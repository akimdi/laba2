#include "axis2_stub_Subscribers.h"
#include <stdio.h>
#include <axiom.h>
#include <axis2_util.h>
#include <axiom_soap.h>
#include <axis2_client.h>

adb_subscriber_t* show(const axutil_env_t *env, adb_subscriber_t* subscriber);

int main(int argc, char** argv)
{
	axis2_stub_t *stub = NULL;
	adb_subscriber_t *sub = NULL;
	axis2_status_t status = AXIS2_FAILURE;
	const axutil_env_t *env = NULL;
	const axis2_char_t *address = NULL;
	const axis2_char_t *client_home = NULL;
	adb_generateTopicEventRequest_t* generateTopicEventRequest;
	adb_generateUnsubscribeEventRequest_t* generateUnsubscribeEventRequest;
	adb_generateUnsubscribeEventResponse_t* generateUnsubscribeEventResponse; 
	adb_subscriberRequest_t* subscriberRequest;
	int operation = 0;
	char nameOfTopic[255];
	char message[255];

	/* Set up the environment */
	env = axutil_env_create_all("subscribers.log", AXIS2_LOG_LEVEL_TRACE);

	/* Set up deploy folder. It is from the deploy folder, the configuration is picked up
	* using the axis2.xml file. You need to set the AXIS2C_HOME variable to the axis2/c
	* installed dir.
	*/
	client_home = AXIS2_GETENV("AXIS2C_HOME");
	if (!client_home || !strcmp(client_home, ""))
	client_home = "../..";    

	/* Set end point reference of Subscribers service */
	address = "http://localhost:9092/axis2/services/Subscribers";

	stub = axis2_stub_create_Subscribers(env, client_home, address);

	if (stub)
	{
		printf("Connected to : %s\n", address);
	}
	else
	{
		printf("You didn't subscribe to : %s\n", address);
	}

	generateTopicEventRequest = adb_generateTopicEventRequest_create(env);
	subscriberRequest = adb_subscriberRequest_create(env);
	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("1 - GetStructure\n");
		printf("2 - GenerateTopicEvent\n");
		printf("3 - GenerateUnsubscribeEvent\n");
		printf("4 - Exit\n");
		printf("Please, input number of operation: ");		

		scanf("%d", &operation);

		switch(operation)
		{
			case 1://GetStructure
				sub = axis2_stub_op_Subscribers_GetStructure(stub, env, subscriberRequest);
				sub = show(env, sub);
			break;
			case 2://GenerateTopicEvent
				printf("Name: ");
				gets(nameOfTopic);
				printf("Message: ");
				gets(message);
				adb_generateTopicEventRequest_set_nameOfTopic(generateTopicEventRequest, env, &nameOfTopic);
				adb_generateTopicEventRequest_set_message(generateTopicEventRequest, env, &message);
				axis2_stub_op_Subscribers_GenerateTopicEvent(stub, env, generateTopicEventRequest);
			break;
			case 3://GenerateUnsubscribeEvent
				generateUnsubscribeEventRequest = adb_generateUnsubscribeEventRequest_create(env);
				adb_generateUnsubscribeEventRequest_set_number(generateUnsubscribeEventRequest, env, 0);
				generateUnsubscribeEventResponse = axis2_stub_op_Subscribers_GenerateUnsubscribeEvent(stub, env, generateUnsubscribeEventRequest);
				printf("%s\n", adb_generateUnsubscribeEventResponse_get_message(generateUnsubscribeEventResponse, env));
			break;
		}
	}while(operation != 4);

	return status;
}
