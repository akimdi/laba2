

    /**
     * axis2_skel_Subscribers.h
     *
     * This file was auto-generated from WSDL for "Subscribers|http://mopevm.ru/axis2/services/Subscribers" service
     * by the Apache Axis2/C version: 1.6.2  Built on : Apr 17, 2012 (05:33:49 IST)
     * axis2_skel_Subscribers Axis2/C skeleton for the axisService- Header file
     */


	#include <axis2_svc_skeleton.h>
	#include <axutil_log_default.h>
	#include <axutil_error_default.h>
    #include <axutil_error.h>
	#include <axiom_text.h>
	#include <axiom_node.h>
	#include <axiom_element.h>
    #include <stdio.h>


   
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

     

		 
        /**
         * auto generated function declaration
         * for "Subscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _topic of the adb_topic_t*
         *
         * @return adb_subscribeResponse_t*
         */
        adb_subscribeResponse_t* axis2_skel_Subscribers_Subscribe(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_topic_t* _topic);


     

		 
        /**
         * auto generated function declaration
         * for "GenerateTopicEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _generateTopicEventRequest of the adb_generateTopicEventRequest_t*
         *
         * @return 
         */
        axis2_status_t  axis2_skel_Subscribers_GenerateTopicEvent(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_generateTopicEventRequest_t* _generateTopicEventRequest);


     

		 
        /**
         * auto generated function declaration
         * for "GenerateUnsubscribeEvent|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _generateUnsubscribeEventRequest of the adb_generateUnsubscribeEventRequest_t*
         *
         * @return adb_generateUnsubscribeEventResponse_t*
         */
        adb_generateUnsubscribeEventResponse_t* axis2_skel_Subscribers_GenerateUnsubscribeEvent(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest);


     

		 
        /**
         * auto generated function declaration
         * for "GetStructure|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _subscriberRequest of the adb_subscriberRequest_t*
         *
         * @return adb_subscriber_t*
         */
        adb_subscriber_t* axis2_skel_Subscribers_GetStructure(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_subscriberRequest_t* _subscriberRequest);


     

		 
        /**
         * auto generated function declaration
         * for "Unsubscribe|http://mopevm.ru/axis2/services/Subscribers" operation.
         * @param env environment ( mandatory)* @param MessageContext the outmessage context
         * @param _unsubscribeRequest of the adb_unsubscribeRequest_t*
         *
         * @return adb_unsubscribeResponse_t*
         */
        adb_unsubscribeResponse_t* axis2_skel_Subscribers_Unsubscribe(const axutil_env_t *env,axis2_msg_ctx_t *msg_ctx,
                                              adb_unsubscribeRequest_t* _unsubscribeRequest);


     

    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_SKEL_SUBSCRIBERS_ERROR_CODES_START (AXIS2_ERROR_LAST + 2500)

    typedef enum 
    {
        AXIS2_SKEL_SUBSCRIBERS_ERROR_NONE = AXIS2_SKEL_SUBSCRIBERS_ERROR_CODES_START,
        
        AXIS2_SKEL_SUBSCRIBERS_ERROR_LAST
    } axis2_skel_Subscribers_error_codes;

	#ifdef __cplusplus
	}
	#endif
    

