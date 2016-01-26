#include "subscribers_utils.h"

#include <axis2_util.h>
#include <axis2_stub.h>

#include "axis2_stub_Subscribers.h"
#include "adb_topic.h"
#include "adb_subscribeResponse.h"
#include "sqlite3.h"

int subscribeTo(const axutil_env_t *env, axis2_conf_t *conf)
{
	axis2_svc_t *subscribers_svc = NULL;

	axutil_param_t *subscriptionURL_param = NULL;

	axutil_param_t *subscriberURL_param = NULL;

	axis2_char_t * client_home = NULL;

	axis2_char_t * endpoint_uri = NULL;

	axis2_char_t * address = NULL;

	axis2_stub_t * stub = NULL;

	adb_topic_t* topic = NULL;

	adb_subscribeResponse_t* response = NULL;

	sqlite3 *db;
	sqlite3_stmt *stmt;
	int rc;
	char *zErrMsg = 0;
	char *query;


	client_home = AXIS2_GETENV("AXIS2C_HOME");

	subscribers_svc = axis2_conf_get_svc(conf, env, "Subscribers");
	//адрес подписчика
	subscriberURL_param = axis2_svc_get_param(subscribers_svc, env, "subscriberURL");

	address = (axis2_char_t*)axutil_param_get_value(subscriberURL_param, env);

	subscriptionURL_param = axis2_svc_get_param(subscribers_svc, env, "subscriptionURL");
	//адрес подписки
	endpoint_uri = (axis2_char_t*)axutil_param_get_value(subscriptionURL_param, env);

	stub = axis2_stub_create_Subscribers(env, client_home, endpoint_uri);

	topic = adb_topic_create_with_values(env, "Weather", "Hurricane! From 24.10 to 26.10", address);

	response = axis2_stub_op_Subscribers_Subscribe(stub, env, topic);

	if (response == NULL)
	{
		printf("Subscribe to %s error! Response NULL.\n", endpoint_uri);
		return 0;
	}
	else
		printf("Subscribe to %s, my id = %d, message = %s\n", endpoint_uri, adb_subscribeResponse_get_id(response, env),
									adb_message_get_about(adb_subscribeResponse_get_msg(response, env), env) );

	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

	query = "delete from info";

	sqlite3_exec(db, query, 0, 0, &zErrMsg);

	query = "insert into info (id, address) values(?, ?)";

	sqlite3_prepare(db, query, -1, &stmt, 0);

	sqlite3_bind_int(stmt, 1, adb_subscribeResponse_get_id(response, env));
	sqlite3_bind_text(stmt, 2, endpoint_uri, -1, SQLITE_STATIC);
	rc=sqlite3_step(stmt);

	sqlite3_finalize(stmt);
	sqlite3_close(db);

	return 0;
}
