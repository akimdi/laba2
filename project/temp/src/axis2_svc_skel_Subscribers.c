

        /**
         * axis2_svc_skel_Subscribers.c
         *
         * This file was auto-generated from WSDL for "Subscribers|http://mopevm.ru/axis2/services/Subscribers" service
         * by the Apache Axis2 version: 1.6.2  Built on : Apr 17, 2012 (05:33:49 IST)
         *  axis2_svc_skel_Subscribers
         */

        #include "axis2_skel_Subscribers.h"
        #include <axis2_svc_skeleton.h>
        #include <stdio.h>
        #include <axis2_svc.h>

        #ifdef __cplusplus
        extern "C" {
        #endif

        /**
         * creating a custom structure to wrap the axis2_svc_skeleton class
         */
        typedef struct {
            axis2_svc_skeleton_t svc_skeleton;

            /* union to keep all the exception objects */
          
        }axis2_svc_skel_Subscribers_t;
       
        /**
         * functions prototypes
         */
        /* On fault, handle the fault */
        axiom_node_t* AXIS2_CALL
        axis2_svc_skel_Subscribers_on_fault(axis2_svc_skeleton_t *svc_skeleton,
                  const axutil_env_t *env, axiom_node_t *node);

        /* Free the service */
        int AXIS2_CALL
        axis2_svc_skel_Subscribers_free(axis2_svc_skeleton_t *svc_skeleton,
                  const axutil_env_t *env);

        /* This method invokes the right service method */
        axiom_node_t* AXIS2_CALL
        axis2_svc_skel_Subscribers_invoke(axis2_svc_skeleton_t *svc_skeleton,
                    const axutil_env_t *env,
                    axiom_node_t *node,
                    axis2_msg_ctx_t *msg_ctx);

        /* Initializing the environment  */
        int AXIS2_CALL
        axis2_svc_skel_Subscribers_init(axis2_svc_skeleton_t *svc_skeleton,
                        const axutil_env_t *env);

        /* Create the service  */
        axis2_svc_skeleton_t* AXIS2_CALL
        axis2_svc_skel_Subscribers_create(const axutil_env_t *env);

        static const axis2_svc_skeleton_ops_t axis2_svc_skel_Subscribers_svc_skeleton_ops_var = {
            axis2_svc_skel_Subscribers_init,
            axis2_svc_skel_Subscribers_invoke,
            axis2_svc_skel_Subscribers_on_fault,
            axis2_svc_skel_Subscribers_free
        };


        /**
         * Following block distinguish the exposed part of the dll.
         * create the instance
         */

        AXIS2_EXTERN int
        axis2_get_instance(struct axis2_svc_skeleton **inst,
                                const axutil_env_t *env);

        AXIS2_EXTERN int 
        axis2_remove_instance(axis2_svc_skeleton_t *inst,
                                const axutil_env_t *env);


         /**
          * function to free any soap input headers
          */
         


        #ifdef __cplusplus
        }
        #endif


        /**
         * Implementations for the functions
         */

	axis2_svc_skeleton_t* AXIS2_CALL
	axis2_svc_skel_Subscribers_create(const axutil_env_t *env)
	{
	    axis2_svc_skel_Subscribers_t *svc_skeleton_wrapper = NULL;
	    axis2_svc_skeleton_t *svc_skeleton = NULL;
        
        /* Allocate memory for the structs */
        svc_skeleton_wrapper = (axis2_svc_skel_Subscribers_t *)AXIS2_MALLOC(env->allocator,
            sizeof(axis2_svc_skel_Subscribers_t));

        svc_skeleton = (axis2_svc_skeleton_t*)svc_skeleton_wrapper;

        svc_skeleton->ops = &axis2_svc_skel_Subscribers_svc_skeleton_ops_var;

	    return svc_skeleton;
	}


	int AXIS2_CALL
	axis2_svc_skel_Subscribers_init(axis2_svc_skeleton_t *svc_skeleton,
	                        const axutil_env_t *env)
	{
	    /* Nothing special in initialization  axis2_skel_Subscribers */
	    return AXIS2_SUCCESS;
	}

	int AXIS2_CALL
	axis2_svc_skel_Subscribers_free(axis2_svc_skeleton_t *svc_skeleton,
				 const axutil_env_t *env)
	{

        /* Free the service skeleton */
        if (svc_skeleton)
        {
            AXIS2_FREE(env->allocator, svc_skeleton);
            svc_skeleton = NULL;
        }

        return AXIS2_SUCCESS;
	}



     




	/*
	 * This method invokes the right service method
	 */
	axiom_node_t* AXIS2_CALL
	axis2_svc_skel_Subscribers_invoke(axis2_svc_skeleton_t *svc_skeleton,
				const axutil_env_t *env,
				axiom_node_t *content_node,
				axis2_msg_ctx_t *msg_ctx)
	{
         /* depending on the function name invoke the
          * corresponding  method
          */

          axis2_op_ctx_t *operation_ctx = NULL;
          axis2_op_t *operation = NULL;
          axutil_qname_t *op_qname = NULL;
          axis2_char_t *op_name = NULL;
          axis2_msg_ctx_t *in_msg_ctx = NULL;
          
          axiom_soap_envelope_t *req_soap_env = NULL;
          axiom_soap_header_t *req_soap_header = NULL;
          axiom_soap_envelope_t *res_soap_env = NULL;
          axiom_soap_header_t *res_soap_header = NULL;

          axiom_node_t *ret_node = NULL;
          axiom_node_t *input_header = NULL;
          axiom_node_t *output_header = NULL;
          axiom_node_t *header_base_node = NULL;
	    
          axis2_svc_skel_Subscribers_t *svc_skeleton_wrapper = NULL;

          
            adb_subscribeResponse_t* ret_val1;
            adb_topic_t* input_val1;
            
            axis2_status_t ret_val2;
            adb_generateTopicEventRequest_t* input_val2;
            
            adb_generateUnsubscribeEventResponse_t* ret_val3;
            adb_generateUnsubscribeEventRequest_t* input_val3;
            
            adb_subscriber_t* ret_val4;
            adb_subscriberRequest_t* input_val4;
            
            adb_unsubscribeResponse_t* ret_val5;
            adb_unsubscribeRequest_t* input_val5;
            

          svc_skeleton_wrapper = (axis2_svc_skel_Subscribers_t*)svc_skeleton;
          operation_ctx = axis2_msg_ctx_get_op_ctx(msg_ctx, env);
          operation = axis2_op_ctx_get_op(operation_ctx, env);
          op_qname = (axutil_qname_t *)axis2_op_get_qname(operation, env);
          op_name = axutil_qname_get_localpart(op_qname, env);

          if (op_name)
          {
               

                if ( axutil_strcmp(op_name, "Subscribe") == 0 )
                {

                    
                    input_val1 = adb_topic_create( env);
                        if( AXIS2_FAILURE == adb_topic_deserialize(input_val1, env, &content_node, NULL, AXIS2_FALSE))
                        {
                            adb_topic_free(input_val1, env);
                      
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_DATA_ELEMENT_IS_NULL, AXIS2_FAILURE);
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_topic_deserialize: "
                                        "This should be due to an invalid XML");
                            return NULL;      
                        }
                        
                        ret_val1 =  axis2_skel_Subscribers_Subscribe(env, msg_ctx,input_val1);
                    
                        if ( NULL == ret_val1 )
                        {
                            adb_topic_free(input_val1, env);
                            
                            return NULL; 
                        }
                        ret_node = adb_subscribeResponse_serialize(ret_val1, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                   adb_subscribeResponse_free(ret_val1, env);
                                   adb_topic_free(input_val1, env);
                                   

                        return ret_node;
                    

                    /* since this has no output params it just returns NULL */                    
                    

                }
             

                if ( axutil_strcmp(op_name, "GenerateTopicEvent") == 0 )
                {

                    
                    input_val2 = adb_generateTopicEventRequest_create( env);
                        if( AXIS2_FAILURE == adb_generateTopicEventRequest_deserialize(input_val2, env, &content_node, NULL, AXIS2_FALSE))
                        {
                            adb_generateTopicEventRequest_free(input_val2, env);
                      
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_DATA_ELEMENT_IS_NULL, AXIS2_FAILURE);
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_generateTopicEventRequest_deserialize: "
                                        "This should be due to an invalid XML");
                            return NULL;      
                        }
                        
                        ret_val2 =  axis2_skel_Subscribers_GenerateTopicEvent(env, msg_ctx,input_val2);
                    
                        if( AXIS2_FAILURE == ret_val2 )
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL returnted from the business logic from GenerateTopicEvent ");
                        }
                        adb_generateTopicEventRequest_free(input_val2, env);
                        

                    /* since this has no output params it just returns NULL */                    
                    return NULL;

                }
             

                if ( axutil_strcmp(op_name, "GenerateUnsubscribeEvent") == 0 )
                {

                    
                    input_val3 = adb_generateUnsubscribeEventRequest_create( env);
                        if( AXIS2_FAILURE == adb_generateUnsubscribeEventRequest_deserialize(input_val3, env, &content_node, NULL, AXIS2_FALSE))
                        {
                            adb_generateUnsubscribeEventRequest_free(input_val3, env);
                      
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_DATA_ELEMENT_IS_NULL, AXIS2_FAILURE);
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_generateUnsubscribeEventRequest_deserialize: "
                                        "This should be due to an invalid XML");
                            return NULL;      
                        }
                        
                        ret_val3 =  axis2_skel_Subscribers_GenerateUnsubscribeEvent(env, msg_ctx,input_val3);
                    
                        if ( NULL == ret_val3 )
                        {
                            adb_generateUnsubscribeEventRequest_free(input_val3, env);
                            
                            return NULL; 
                        }
                        ret_node = adb_generateUnsubscribeEventResponse_serialize(ret_val3, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                   adb_generateUnsubscribeEventResponse_free(ret_val3, env);
                                   adb_generateUnsubscribeEventRequest_free(input_val3, env);
                                   

                        return ret_node;
                    

                    /* since this has no output params it just returns NULL */                    
                    

                }
             

                if ( axutil_strcmp(op_name, "GetStructure") == 0 )
                {

                    
                    input_val4 = adb_subscriberRequest_create( env);
                        if( AXIS2_FAILURE == adb_subscriberRequest_deserialize(input_val4, env, &content_node, NULL, AXIS2_FALSE))
                        {
                            adb_subscriberRequest_free(input_val4, env);
                      
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_DATA_ELEMENT_IS_NULL, AXIS2_FAILURE);
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_subscriberRequest_deserialize: "
                                        "This should be due to an invalid XML");
                            return NULL;      
                        }
                        
                        ret_val4 =  axis2_skel_Subscribers_GetStructure(env, msg_ctx,input_val4);
                    
                        if ( NULL == ret_val4 )
                        {
                            adb_subscriberRequest_free(input_val4, env);
                            
                            return NULL; 
                        }
                        ret_node = adb_subscriber_serialize(ret_val4, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                   adb_subscriber_free(ret_val4, env);
                                   adb_subscriberRequest_free(input_val4, env);
                                   

                        return ret_node;
                    

                    /* since this has no output params it just returns NULL */                    
                    

                }
             

                if ( axutil_strcmp(op_name, "Unsubscribe") == 0 )
                {

                    
                    input_val5 = adb_unsubscribeRequest_create( env);
                        if( AXIS2_FAILURE == adb_unsubscribeRequest_deserialize(input_val5, env, &content_node, NULL, AXIS2_FALSE))
                        {
                            adb_unsubscribeRequest_free(input_val5, env);
                      
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_DATA_ELEMENT_IS_NULL, AXIS2_FAILURE);
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_unsubscribeRequest_deserialize: "
                                        "This should be due to an invalid XML");
                            return NULL;      
                        }
                        
                        ret_val5 =  axis2_skel_Subscribers_Unsubscribe(env, msg_ctx,input_val5);
                    
                        if ( NULL == ret_val5 )
                        {
                            adb_unsubscribeRequest_free(input_val5, env);
                            
                            return NULL; 
                        }
                        ret_node = adb_unsubscribeResponse_serialize(ret_val5, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                   adb_unsubscribeResponse_free(ret_val5, env);
                                   adb_unsubscribeRequest_free(input_val5, env);
                                   

                        return ret_node;
                    

                    /* since this has no output params it just returns NULL */                    
                    

                }
             
             }
            
          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "axis2_svc_skel_Subscribers service ERROR: invalid OM parameters in request\n");
          return NULL;
    }

    axiom_node_t* AXIS2_CALL
    axis2_svc_skel_Subscribers_on_fault(axis2_svc_skeleton_t *svc_skeleton,
                  const axutil_env_t *env, axiom_node_t *node)
	{
		axiom_node_t *error_node = NULL;
		axiom_element_t *error_ele = NULL;
        axutil_error_codes_t error_code;
        axis2_svc_skel_Subscribers_t *svc_skeleton_wrapper = NULL;

        svc_skeleton_wrapper = (axis2_svc_skel_Subscribers_t*)svc_skeleton;

        error_code = env->error->error_number;

        if(error_code <= AXIS2_SKEL_SUBSCRIBERS_ERROR_NONE ||
                error_code >= AXIS2_SKEL_SUBSCRIBERS_ERROR_LAST )
        {
            error_ele = axiom_element_create(env, node, "fault", NULL,
                            &error_node);
            axiom_element_set_text(error_ele, env, "Subscribers|http://mopevm.ru/axis2/services/Subscribers failed",
                            error_node);
        }
        

		return error_node;
	}


	/**
	 * Following block distinguish the exposed part of the dll.
 	 */

    AXIS2_EXTERN int
    axis2_get_instance(struct axis2_svc_skeleton **inst,
	                        const axutil_env_t *env)
	{
		*inst = axis2_svc_skel_Subscribers_create(env);

        if(!(*inst))
        {
            return AXIS2_FAILURE;
        }

  		return AXIS2_SUCCESS;
	}

	AXIS2_EXTERN int 
    axis2_remove_instance(axis2_svc_skeleton_t *inst,
                            const axutil_env_t *env)
	{
        axis2_status_t status = AXIS2_FAILURE;
       	if (inst)
        {
            status = AXIS2_SVC_SKELETON_FREE(inst, env);
        }
    	return status;
	}


    

