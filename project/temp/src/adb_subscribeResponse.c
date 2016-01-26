

        /**
         * adb_subscribeResponse.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_subscribeResponse.h"
        
               /*
                * implmentation of the subscribeResponse|http://mopevm.ru/axis2/services/types element
                */
           


        struct adb_subscribeResponse
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            int property_id;

                
                axis2_bool_t is_valid_id;
            adb_message_t* property_msg;

                
                axis2_bool_t is_valid_msg;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_subscribeResponse_set_id_nil(
                        adb_subscribeResponse_t* _subscribeResponse,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_subscribeResponse_set_msg_nil(
                        adb_subscribeResponse_t* _subscribeResponse,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_subscribeResponse_t* AXIS2_CALL
        adb_subscribeResponse_create(
            const axutil_env_t *env)
        {
            adb_subscribeResponse_t *_subscribeResponse = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _subscribeResponse = (adb_subscribeResponse_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_subscribeResponse_t));

            if(NULL == _subscribeResponse)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_subscribeResponse, 0, sizeof(adb_subscribeResponse_t));

            _subscribeResponse->property_Type = axutil_strdup(env, "adb_subscribeResponse");
            _subscribeResponse->is_valid_id  = AXIS2_FALSE;
            _subscribeResponse->property_msg  = NULL;
                  _subscribeResponse->is_valid_msg  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "subscribeResponse",
                        "http://mopevm.ru/axis2/services/types",
                        NULL);
                _subscribeResponse->qname = qname;
            

            return _subscribeResponse;
        }

        adb_subscribeResponse_t* AXIS2_CALL
        adb_subscribeResponse_create_with_values(
            const axutil_env_t *env,
                int _id,
                adb_message_t* _msg)
        {
            adb_subscribeResponse_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_subscribeResponse_create(env);

            
              status = adb_subscribeResponse_set_id(
                                     adb_obj,
                                     env,
                                     _id);
              if(status == AXIS2_FAILURE) {
                  adb_subscribeResponse_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_subscribeResponse_set_msg(
                                     adb_obj,
                                     env,
                                     _msg);
              if(status == AXIS2_FAILURE) {
                  adb_subscribeResponse_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        int AXIS2_CALL
                adb_subscribeResponse_free_popping_value(
                        adb_subscribeResponse_t* _subscribeResponse,
                        const axutil_env_t *env)
                {
                    int value;

                    
                    
                    value = _subscribeResponse->property_id;

                    adb_subscribeResponse_free(_subscribeResponse, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_subscribeResponse_free(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env)
        {
            
            
            return adb_subscribeResponse_free_obj(
                _subscribeResponse,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscribeResponse_free_obj(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);

            if (_subscribeResponse->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _subscribeResponse->property_Type);
            }

            adb_subscribeResponse_reset_id(_subscribeResponse, env);
            adb_subscribeResponse_reset_msg(_subscribeResponse, env);
            
              if(_subscribeResponse->qname)
              {
                  axutil_qname_free (_subscribeResponse->qname, env);
                  _subscribeResponse->qname = NULL;
              }
            

            if(_subscribeResponse)
            {
                AXIS2_FREE(env->allocator, _subscribeResponse);
                _subscribeResponse = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_subscribeResponse_deserialize(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_subscribeResponse_deserialize_obj(
                _subscribeResponse,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscribeResponse_deserialize_obj(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for subscribeResponse : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _subscribeResponse-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for subscribeResponse : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_subscribeResponse-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building id element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "id", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("id", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("id", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_subscribeResponse_set_id(_subscribeResponse, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element id");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for id ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element id missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building msg element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "msg", NULL, NULL);
                                 

                           if (adb_message_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("msg", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("msg", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_message");

                                      status =  adb_message_deserialize((adb_message_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element msg");
                                      }
                                      else
                                      {
                                          status = adb_subscribeResponse_set_msg(_subscribeResponse, env,
                                                                   (adb_message_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for msg ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element msg missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_subscribeResponse_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_subscribeResponse_declare_parent_namespaces(
                    adb_subscribeResponse_t* _subscribeResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_subscribeResponse_serialize(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_subscribeResponse_serialize_obj(
                    _subscribeResponse, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_subscribeResponse_serialize_obj(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _subscribeResponse, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://mopevm.ru/axis2/services/types",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://mopevm.ru/axis2/services/types", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "subscribeResponse", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       p_prefix = NULL;
                      

                   if (!_subscribeResponse->is_valid_id)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property id");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("id"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("id")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing id element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_1, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _subscribeResponse->property_id);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_subscribeResponse->is_valid_msg)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property msg");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("msg"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("msg")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing msg element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smsg",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smsg>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_message_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_message_serialize(_subscribeResponse->property_msg, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_message_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_message_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for id by  Property Number 1
             */
            int AXIS2_CALL
            adb_subscribeResponse_get_property1(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env)
            {
                return adb_subscribeResponse_get_id(_subscribeResponse,
                                             env);
            }

            /**
             * getter for id.
             */
            int AXIS2_CALL
            adb_subscribeResponse_get_id(
                    adb_subscribeResponse_t* _subscribeResponse,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _subscribeResponse, (int)0);
                  

                return _subscribeResponse->property_id;
             }

            /**
             * setter for id
             */
            axis2_status_t AXIS2_CALL
            adb_subscribeResponse_set_id(
                    adb_subscribeResponse_t* _subscribeResponse,
                    const axutil_env_t *env,
                    const int  arg_id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);
                
                if(_subscribeResponse->is_valid_id &&
                        arg_id == _subscribeResponse->property_id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscribeResponse_reset_id(_subscribeResponse, env);

                _subscribeResponse->property_id = arg_id;
                        _subscribeResponse->is_valid_id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for id
            */
           axis2_status_t AXIS2_CALL
           adb_subscribeResponse_reset_id(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);
               

               _subscribeResponse->is_valid_id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscribeResponse_is_id_nil(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_TRUE);
               
               return !_subscribeResponse->is_valid_id;
           }

           /**
            * Set id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscribeResponse_set_id_nil(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               return adb_subscribeResponse_reset_id(_subscribeResponse, env);
           }

           

            /**
             * Getter for msg by  Property Number 2
             */
            adb_message_t* AXIS2_CALL
            adb_subscribeResponse_get_property2(
                adb_subscribeResponse_t* _subscribeResponse,
                const axutil_env_t *env)
            {
                return adb_subscribeResponse_get_msg(_subscribeResponse,
                                             env);
            }

            /**
             * getter for msg.
             */
            adb_message_t* AXIS2_CALL
            adb_subscribeResponse_get_msg(
                    adb_subscribeResponse_t* _subscribeResponse,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subscribeResponse, NULL);
                  

                return _subscribeResponse->property_msg;
             }

            /**
             * setter for msg
             */
            axis2_status_t AXIS2_CALL
            adb_subscribeResponse_set_msg(
                    adb_subscribeResponse_t* _subscribeResponse,
                    const axutil_env_t *env,
                    adb_message_t*  arg_msg)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);
                
                if(_subscribeResponse->is_valid_msg &&
                        arg_msg == _subscribeResponse->property_msg)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_msg)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "msg is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_subscribeResponse_reset_msg(_subscribeResponse, env);

                
                if(NULL == arg_msg)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subscribeResponse->property_msg = arg_msg;
                        _subscribeResponse->is_valid_msg = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for msg
            */
           axis2_status_t AXIS2_CALL
           adb_subscribeResponse_reset_msg(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_FAILURE);
               

               
            
                
                if(_subscribeResponse->property_msg != NULL)
                {
                   
                   adb_message_free(_subscribeResponse->property_msg, env);
                     _subscribeResponse->property_msg = NULL;
                }
            
                
                
                _subscribeResponse->is_valid_msg = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether msg is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscribeResponse_is_msg_nil(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscribeResponse, AXIS2_TRUE);
               
               return !_subscribeResponse->is_valid_msg;
           }

           /**
            * Set msg to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscribeResponse_set_msg_nil(
                   adb_subscribeResponse_t* _subscribeResponse,
                   const axutil_env_t *env)
           {
               return adb_subscribeResponse_reset_msg(_subscribeResponse, env);
           }

           

