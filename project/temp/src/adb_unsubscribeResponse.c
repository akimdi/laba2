

        /**
         * adb_unsubscribeResponse.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_unsubscribeResponse.h"
        
               /*
                * implmentation of the unsubscribeResponse|http://mopevm.ru/axis2/services/types element
                */
           


        struct adb_unsubscribeResponse
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axis2_char_t* property_message;

                
                axis2_bool_t is_valid_message;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_unsubscribeResponse_set_message_nil(
                        adb_unsubscribeResponse_t* _unsubscribeResponse,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_unsubscribeResponse_t* AXIS2_CALL
        adb_unsubscribeResponse_create(
            const axutil_env_t *env)
        {
            adb_unsubscribeResponse_t *_unsubscribeResponse = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _unsubscribeResponse = (adb_unsubscribeResponse_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_unsubscribeResponse_t));

            if(NULL == _unsubscribeResponse)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_unsubscribeResponse, 0, sizeof(adb_unsubscribeResponse_t));

            _unsubscribeResponse->property_Type = axutil_strdup(env, "adb_unsubscribeResponse");
            _unsubscribeResponse->property_message  = NULL;
                  _unsubscribeResponse->is_valid_message  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "unsubscribeResponse",
                        "http://mopevm.ru/axis2/services/types",
                        NULL);
                _unsubscribeResponse->qname = qname;
            

            return _unsubscribeResponse;
        }

        adb_unsubscribeResponse_t* AXIS2_CALL
        adb_unsubscribeResponse_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _message)
        {
            adb_unsubscribeResponse_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_unsubscribeResponse_create(env);

            
              status = adb_unsubscribeResponse_set_message(
                                     adb_obj,
                                     env,
                                     _message);
              if(status == AXIS2_FAILURE) {
                  adb_unsubscribeResponse_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_unsubscribeResponse_free_popping_value(
                        adb_unsubscribeResponse_t* _unsubscribeResponse,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _unsubscribeResponse->property_message;

                    _unsubscribeResponse->property_message = (axis2_char_t*)NULL;
                    adb_unsubscribeResponse_free(_unsubscribeResponse, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_unsubscribeResponse_free(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env)
        {
            
            
            return adb_unsubscribeResponse_free_obj(
                _unsubscribeResponse,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_unsubscribeResponse_free_obj(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, AXIS2_FAILURE);

            if (_unsubscribeResponse->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _unsubscribeResponse->property_Type);
            }

            adb_unsubscribeResponse_reset_message(_unsubscribeResponse, env);
            
              if(_unsubscribeResponse->qname)
              {
                  axutil_qname_free (_unsubscribeResponse->qname, env);
                  _unsubscribeResponse->qname = NULL;
              }
            

            if(_unsubscribeResponse)
            {
                AXIS2_FREE(env->allocator, _unsubscribeResponse);
                _unsubscribeResponse = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_unsubscribeResponse_deserialize(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_unsubscribeResponse_deserialize_obj(
                _unsubscribeResponse,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_unsubscribeResponse_deserialize_obj(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for unsubscribeResponse : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _unsubscribeResponse-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for unsubscribeResponse : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_unsubscribeResponse-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building message element
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
                                   
                                 element_qname = axutil_qname_create(env, "message", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("message", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("message", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_unsubscribeResponse_set_message(_unsubscribeResponse, env,
                                                               text_value);
                                      }
                                      
                                      else
                                      {
                                            /*
                                             * axis2_qname_t *qname = NULL;
                                             * axiom_attribute_t *the_attri = NULL;
                                             * 
                                             * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                             * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                             */
                                            /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

                                            axiom_attribute_t *the_attri = NULL;
                                            axis2_char_t *attrib_text = NULL;
                                            axutil_hash_t *attribute_hash = NULL;

                                            attribute_hash = axiom_element_get_all_attributes(current_element, env);

                                            attrib_text = NULL;
                                            if(attribute_hash)
                                            {
                                                 axutil_hash_index_t *hi;
                                                 void *val;
                                                 const void *key;
                                        
                                                 for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                 {
                                                     axutil_hash_this(hi, &key, NULL, &val);
                                                     
                                                     if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                     {
                                                         the_attri = (axiom_attribute_t*)val;
                                                         break;
                                                     }
                                                 }
                                            }

                                            if(the_attri)
                                            {
                                                attrib_text = axiom_attribute_get_value(the_attri, env);
                                            }
                                            else
                                            {
                                                /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                            }

                                            if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                            {
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element message");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_unsubscribeResponse_set_message(_unsubscribeResponse, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for message ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element message missing");
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
          adb_unsubscribeResponse_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_unsubscribeResponse_declare_parent_namespaces(
                    adb_unsubscribeResponse_t* _unsubscribeResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_unsubscribeResponse_serialize(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_unsubscribeResponse_serialize_obj(
                    _unsubscribeResponse, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_unsubscribeResponse_serialize_obj(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://mopevm.ru/axis2/services/types",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://mopevm.ru/axis2/services/types", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "unsubscribeResponse", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       p_prefix = NULL;
                      

                   if (!_unsubscribeResponse->is_valid_message)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property message");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("message"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("message")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing message element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smessage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smessage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _unsubscribeResponse->property_message;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
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
             * Getter for message by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_unsubscribeResponse_get_property1(
                adb_unsubscribeResponse_t* _unsubscribeResponse,
                const axutil_env_t *env)
            {
                return adb_unsubscribeResponse_get_message(_unsubscribeResponse,
                                             env);
            }

            /**
             * getter for message.
             */
            axis2_char_t* AXIS2_CALL
            adb_unsubscribeResponse_get_message(
                    adb_unsubscribeResponse_t* _unsubscribeResponse,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, NULL);
                  

                return _unsubscribeResponse->property_message;
             }

            /**
             * setter for message
             */
            axis2_status_t AXIS2_CALL
            adb_unsubscribeResponse_set_message(
                    adb_unsubscribeResponse_t* _unsubscribeResponse,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_message)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, AXIS2_FAILURE);
                
                if(_unsubscribeResponse->is_valid_message &&
                        arg_message == _unsubscribeResponse->property_message)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_message)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "message is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_unsubscribeResponse_reset_message(_unsubscribeResponse, env);

                
                if(NULL == arg_message)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _unsubscribeResponse->property_message = (axis2_char_t *)axutil_strdup(env, arg_message);
                        if(NULL == _unsubscribeResponse->property_message)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for message");
                            return AXIS2_FAILURE;
                        }
                        _unsubscribeResponse->is_valid_message = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for message
            */
           axis2_status_t AXIS2_CALL
           adb_unsubscribeResponse_reset_message(
                   adb_unsubscribeResponse_t* _unsubscribeResponse,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, AXIS2_FAILURE);
               

               
            
                
                if(_unsubscribeResponse->property_message != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _unsubscribeResponse->property_message);
                     _unsubscribeResponse->property_message = NULL;
                }
            
                
                
                _unsubscribeResponse->is_valid_message = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether message is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_unsubscribeResponse_is_message_nil(
                   adb_unsubscribeResponse_t* _unsubscribeResponse,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _unsubscribeResponse, AXIS2_TRUE);
               
               return !_unsubscribeResponse->is_valid_message;
           }

           /**
            * Set message to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_unsubscribeResponse_set_message_nil(
                   adb_unsubscribeResponse_t* _unsubscribeResponse,
                   const axutil_env_t *env)
           {
               return adb_unsubscribeResponse_reset_message(_unsubscribeResponse, env);
           }

           

