/**
     * axis2_skel_Subscribers.c
     *
     * This file was auto-generated from WSDL for "Subscribers|http://mopevm.ru/axis2/services/Subscribers" service
     * by the Apache Axis2/C version: 1.6.2  Built on : Mar 14, 2013 (10:39:28 MSK)
     * axis2_skel_Subscribers Axis2/C skeleton for the axisService
     */

#include "axis2_skel_Subscribers.h"
#include "sqlite3.h"

int GLOBAL_ID = 0;

/**
         * auto generated function definition signature
         * for "Subscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _topic of the adb_topic_t*
         *
         * @return adb_subscribeResponse_t*
         */
adb_subscribeResponse_t* axis2_skel_Subscribers_Subscribe(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                                                          adb_topic_t* _topic )
{
	// TODO: добавить подписчика с темой в базу данных
   	sqlite3 *db;
	sqlite3_stmt *stmt;
	int rc;
	
	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

	char *query = "insert into 'subscribers' ('id', 'topic', 'about', 'address') values(?, ?, ?, ?)";
	
	sqlite3_prepare(db, query, -1, &stmt, 0);

	sqlite3_bind_int(stmt, 1, GLOBAL_ID);
	sqlite3_bind_text(stmt, 2, adb_topic_get_name(_topic, env), -1, SQLITE_STATIC);
	sqlite3_bind_text(stmt, 3, adb_topic_get_about(_topic, env), -1, SQLITE_STATIC);
	sqlite3_bind_text(stmt, 4, adb_topic_get_address(_topic, env), -1, SQLITE_STATIC);
	rc=sqlite3_step(stmt);

	sqlite3_finalize(stmt);
	sqlite3_close(db);

	// вернуть ему id и соообщение

	adb_subscribeResponse_t* reply = adb_subscribeResponse_create(env);

	adb_subscribeResponse_set_id(reply, env, GLOBAL_ID++);
	adb_subscribeResponse_set_msg(reply, env, adb_message_create_with_values(env, "Ok. I subscribe you", 0));
	return reply;
}

/**
* auto generated function definition signature
* for "GenerateTopicEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
* @param env environment ( mandatory)* @param MessageContext the outmessage context
* @param _generateTopicEventRequest of the adb_generateTopicEventRequest_t*
*
* @return 
*/
axis2_status_t  axis2_skel_Subscribers_GenerateTopicEvent(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                              adb_generateTopicEventRequest_t* _generateTopicEventRequest )
{
	sqlite3 *db;
	sqlite3_stmt *stmt;
	int rc;

	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

	char *query = "insert into 'messages' ('topic', 'message') values(?, ?)";
	
	sqlite3_prepare(db, query, -1, &stmt, 0);

	sqlite3_bind_text(stmt, 1, adb_generateTopicEventRequest_get_nameOfTopic(_generateTopicEventRequest, env), -1, SQLITE_STATIC);
	sqlite3_bind_text(stmt, 2, adb_generateTopicEventRequest_get_message(_generateTopicEventRequest, env), -1, SQLITE_STATIC);
	rc=sqlite3_step(stmt);

	sqlite3_finalize(stmt);
	sqlite3_close(db);

	return AXIS2_SUCCESS;
}

/**
* auto generated function definition signature
* for "GenerateUnsubscribeEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
* @param env environment ( mandatory)* @param MessageContext the outmessage context
* @param _generateUnsubscribeEventRequest of the adb_generateUnsubscribeEventRequest_t*
*
* @return adb_generateUnsubscribeEventResponse_t*
*/
adb_generateUnsubscribeEventResponse_t* axis2_skel_Subscribers_GenerateUnsubscribeEvent(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                              adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest )
{
	axis2_stub_t *stub = NULL;
//	const axutil_env_t *env = NULL;
	const axis2_char_t *address = NULL;
	const axis2_char_t *client_home = NULL;
	int id;
	sqlite3 *db;
	sqlite3_stmt *stmt;
	int rc;

//	env = axutil_env_create_all("subscribers.log", AXIS2_LOG_LEVEL_TRACE);

	client_home = AXIS2_GETENV("AXIS2C_HOME");
	if (!client_home || !strcmp(client_home, ""))
	client_home = "../..";    

	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

	char* query = "select * from info";
	sqlite3_prepare(db, query, -1, &stmt, 0);
	rc=sqlite3_step(stmt);
	id = sqlite3_column_int( stmt, 0 );
	address = sqlite3_column_text( stmt, 1 );
	sqlite3_finalize(stmt);
	sqlite3_close(db);	

	stub = axis2_stub_create_Subscribers(env, client_home, address);

	adb_unsubscribeResponse_t* unsubscribeResponse = axis2_stub_op_Subscribers_Unsubscribe( stub, env,
                                                  adb_unsubscribeRequest_create_with_values(env, id));

	adb_generateUnsubscribeEventResponse_t* reply = adb_generateUnsubscribeEventResponse_create(env);

	adb_generateUnsubscribeEventResponse_set_message(reply, env, adb_unsubscribeResponse_get_message(unsubscribeResponse, env));
	
	return reply;
}


 
/**
* auto generated function definition signature
* for "Unsubscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
* @param env environment ( mandatory)* @param MessageContext the outmessage context
* @param _unsubscribeRequest of the adb_unsubscribeRequest_t*
*
* @return adb_unsubscribeResponse_t*
*/
adb_unsubscribeResponse_t* axis2_skel_Subscribers_Unsubscribe(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                              adb_unsubscribeRequest_t* _unsubscribeRequest )
{
	sqlite3 *db;
	sqlite3_stmt *stmt;
	int rc;
	int id;

	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

	id = adb_unsubscribeRequest_get_id(_unsubscribeRequest, env);

	char* query = "delete from 'subscribers' where id = ?";	
	sqlite3_prepare(db, query, -1, &stmt, 0);
	sqlite3_bind_int(stmt, 1, id);
	rc=sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	sqlite3_close(db);
	adb_unsubscribeResponse_t* reply = adb_unsubscribeResponse_create(env);

	adb_unsubscribeResponse_set_message(reply, env, "Ok. I unsubscribed you");
	return reply;
}

/**
* auto generated function definition signature
* for "GetStructure|http://mopevm.ru/axis2/services/Subscribers" operation.
* @param env environment ( mandatory)* @param MessageContext the outmessage context
* @param _subscriberRequest of the adb_subscriberRequest_t*
*
* @return adb_subscriber_t*
*/
adb_subscriber_t* axis2_skel_Subscribers_GetStructure(const axutil_env_t *env , axis2_msg_ctx_t *msg_ctx,
                              adb_subscriberRequest_t* _subscriberRequest )
{
	axis2_stub_t *stub = NULL;
	const axis2_char_t *address = NULL;
	const axis2_char_t *client_home = NULL;
		
	adb_subscriberRequest_t* subscriberRequest;
	sqlite3 *db;
	sqlite3_stmt *stmt1, *stmt2;
	int rc1, rc2;
	char *query1, *query2;
	axis2_char_t* nameOfTopic;
	axis2_char_t* about;
	axis2_char_t** messages;
	int id;
	int i;
	adb_subscriber_t* subscriber;
	adb_subscriber_t* reply = adb_subscriber_create(env);

	if (SQLITE_OK == sqlite3_open("Subscribers.db", &db))
	{
		printf("Database opened\n");	
	}
	else
	{
		printf("Error opening database\n");
	}

//	query = "select t1.id, t1.topic, t1.about, t2.message from 'subscribers' as t1 inner join 'messages' as t2 on t1.topic = t2.topic";
	query1 = "select * from subscribers";

	sqlite3_prepare(db, query1, -1, &stmt1, 0);
	while(1)
	{
		printf("IN 1 CYCLE\n");
		rc1=sqlite3_step(stmt1);
		if (rc1 == SQLITE_ROW)
		{
			printf("IF 1\n");
			id = sqlite3_column_int( stmt1, 0 );
			nameOfTopic = sqlite3_column_text( stmt1, 1 );
			about = sqlite3_column_text( stmt1, 2 );
			printf("YES\n");
			query2 = "select t1.message from messages as t1 where t1.topic = ?";
			sqlite3_prepare(db, query2, -1, &stmt2, 0);
			sqlite3_bind_text(stmt2, 1, nameOfTopic, -1, SQLITE_STATIC);
			i = 0;
			while(1)
			{
				printf("IN 2 CYCLE\n");
				rc2=sqlite3_step(stmt2);
				if (rc2 == SQLITE_ROW)
				{
					messages[i] = sqlite3_column_text( stmt2, 1 );
					i++;
				}
				else
					break;
				printf("OUT 2 CYCLE\n");
			}

//			env = axutil_env_create_all("subscribers.log", AXIS2_LOG_LEVEL_TRACE);

			client_home = AXIS2_GETENV("AXIS2C_HOME");
			if (!client_home || !strcmp(client_home, ""))
			client_home = "../..";    
			printf("SETTING PARAMS\n");
			adb_subscriber_set_id(reply, env, id);
			adb_subscriber_set_nameOfTopic(reply, env, nameOfTopic);
			adb_subscriber_set_about(reply, env, about);
			adb_subscriber_set_messages(reply, env, messages);
			adb_subscriber_set_subscriber(reply, env, subscriber);
			printf("%d\n", id);
			printf("%s\n", nameOfTopic);
			printf("%s\n", about);
			printf("SETTING PARAMS SUCCESSFULLY\n");
			address = sqlite3_column_text( stmt1, 3 );
			stub = axis2_stub_create_Subscribers(env, client_home, address);
			printf("STUB CREATED\n");
			subscriber = axis2_stub_op_Subscribers_GetStructure(stub, env, adb_subscriberRequest_create_with_values(env, 0));

		}
		else
			break;

	}
printf("OUT 1 CYCLE\n");
//	sqlite3_finalize(stmt1);
//	sqlite3_finalize(stmt2);
	sqlite3_close(db);

printf("CLOSE DB\n");
	return reply;	
}

