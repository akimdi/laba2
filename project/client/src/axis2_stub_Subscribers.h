

        /**
        * axis2_stub_Subscribers.h
        *
        * This file was auto-generated from WSDL for "Subscribers|http://mopevm.ru/axis2/services/Subscribers" service
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:33:49 IST)
        */

        #include <stdio.h>
        #include <axiom.h>
        #include <axutil_utils.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>
        #include <axis2_stub.h>

       
         #include "adb_topic.h"
        
         #include "adb_subscribeResponse.h"
        
         #include "adb_generateTopicEventRequest.h"
        
         #include "adb_generateUnsubscribeEventRequest.h"
        
         #include "adb_generateUnsubscribeEventResponse.h"
        
         #include "adb_subscriberRequest.h"
        
         #include "adb_subscriber.h"
        
         #include "adb_unsubscribeRequest.h"
        
         #include "adb_unsubscribeResponse.h"
        

	#ifdef __cplusplus
	extern "C" {
	#endif

        /***************** function prototypes - for header file *************/
        /**
         * axis2_stub_create_Subscribers
         * Create and return the stub with services populated
         * @param env Environment ( mandatory)
         * @param client_home Axis2/C home ( mandatory )
         * @param endpoint_uri Service endpoint uri( optional ) - if NULL default picked from WSDL used
         * @return Newly created stub object
         */
        axis2_stub_t* AXIS2_CALL
        axis2_stub_create_Subscribers(const axutil_env_t *env,
                                        const axis2_char_t *client_home,
                                        const axis2_char_t *endpoint_uri);
        /**
         * axis2_stub_populate_services_for_Subscribers
         * populate the svc in stub with the service and operations
         * @param stub The stub
         * @param env environment ( mandatory)
         */
        void AXIS2_CALL 
        axis2_stub_populate_services_for_Subscribers( axis2_stub_t *stub, const axutil_env_t *env);
        /**
         * axis2_stub_get_endpoint_uri_of_Subscribers
         * Return the endpoint URI picked from WSDL
         * @param env environment ( mandatory)
         * @return The endpoint picked from WSDL
         */
        axis2_char_t* AXIS2_CALL
        axis2_stub_get_endpoint_uri_of_Subscribers(const axutil_env_t *env);


        
            /**
             * Auto generated function declaration
             * for "Subscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _topic of the adb_topic_t*
             *
             * @return adb_subscribeResponse_t*
             */

            adb_subscribeResponse_t* AXIS2_CALL 
            axis2_stub_op_Subscribers_Subscribe( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_topic_t* _topic);
          
            /**
             * Auto generated function declaration
             * for "GenerateTopicEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _generateTopicEventRequest of the adb_generateTopicEventRequest_t*
             *
             * @return 
             */

            axis2_status_t AXIS2_CALL 
            axis2_stub_op_Subscribers_GenerateTopicEvent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_generateTopicEventRequest_t* _generateTopicEventRequest);
          
            /**
             * Auto generated function declaration
             * for "GenerateUnsubscribeEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _generateUnsubscribeEventRequest of the adb_generateUnsubscribeEventRequest_t*
             *
             * @return adb_generateUnsubscribeEventResponse_t*
             */

            adb_generateUnsubscribeEventResponse_t* AXIS2_CALL 
            axis2_stub_op_Subscribers_GenerateUnsubscribeEvent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest);
          
            /**
             * Auto generated function declaration
             * for "GetStructure|http://mopevm.ru/axis2/services/Subscribers" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _subscriberRequest of the adb_subscriberRequest_t*
             *
             * @return adb_subscriber_t*
             */

            adb_subscriber_t* AXIS2_CALL 
            axis2_stub_op_Subscribers_GetStructure( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_subscriberRequest_t* _subscriberRequest);
          
            /**
             * Auto generated function declaration
             * for "Unsubscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _unsubscribeRequest of the adb_unsubscribeRequest_t*
             *
             * @return adb_unsubscribeResponse_t*
             */

            adb_unsubscribeResponse_t* AXIS2_CALL 
            axis2_stub_op_Subscribers_Unsubscribe( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_unsubscribeRequest_t* _unsubscribeRequest);
          

        /**
         * Auto generated function for asynchronous invocations
         * for "Subscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _topic of the adb_topic_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Subscribers_Subscribe( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_topic_t* _topic,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_subscribeResponse_t* _subscribeResponse, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "GenerateUnsubscribeEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _generateUnsubscribeEventRequest of the adb_generateUnsubscribeEventRequest_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Subscribers_GenerateUnsubscribeEvent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_generateUnsubscribeEventResponse_t* _generateUnsubscribeEventResponse, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "GetStructure|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _subscriberRequest of the adb_subscriberRequest_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Subscribers_GetStructure( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_subscriberRequest_t* _subscriberRequest,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_subscriber_t* _subscriber, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "Unsubscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _unsubscribeRequest of the adb_unsubscribeRequest_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Subscribers_Unsubscribe( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_unsubscribeRequest_t* _unsubscribeRequest,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_unsubscribeResponse_t* _unsubscribeResponse, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        


    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_STUB_SUBSCRIBERS_ERROR_CODES_START (AXIS2_ERROR_LAST + 2000)

    typedef enum 
    {
        AXIS2_STUB_SUBSCRIBERS_ERROR_NONE = AXIS2_STUB_SUBSCRIBERS_ERROR_CODES_START,
        
        AXIS2_STUB_SUBSCRIBERS_ERROR_LAST
    } axis2_stub_Subscribers_error_codes;

	#ifdef __cplusplus
	}
	#endif
   

