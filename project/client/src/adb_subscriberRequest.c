

        /**
         * adb_subscriberRequest.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_subscriberRequest.h"
        
               /*
                * implmentation of the subscriberRequest|http://mopevm.ru/axis2/services/types element
                */
           


        struct adb_subscriberRequest
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            int property_number;

                
                axis2_bool_t is_valid_number;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_subscriberRequest_set_number_nil(
                        adb_subscriberRequest_t* _subscriberRequest,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_subscriberRequest_t* AXIS2_CALL
        adb_subscriberRequest_create(
            const axutil_env_t *env)
        {
            adb_subscriberRequest_t *_subscriberRequest = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _subscriberRequest = (adb_subscriberRequest_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_subscriberRequest_t));

            if(NULL == _subscriberRequest)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_subscriberRequest, 0, sizeof(adb_subscriberRequest_t));

            _subscriberRequest->property_Type = axutil_strdup(env, "adb_subscriberRequest");
            _subscriberRequest->is_valid_number  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "subscriberRequest",
                        "http://mopevm.ru/axis2/services/types",
                        NULL);
                _subscriberRequest->qname = qname;
            

            return _subscriberRequest;
        }

        adb_subscriberRequest_t* AXIS2_CALL
        adb_subscriberRequest_create_with_values(
            const axutil_env_t *env,
                int _number)
        {
            adb_subscriberRequest_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_subscriberRequest_create(env);

            
              status = adb_subscriberRequest_set_number(
                                     adb_obj,
                                     env,
                                     _number);
              if(status == AXIS2_FAILURE) {
                  adb_subscriberRequest_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        int AXIS2_CALL
                adb_subscriberRequest_free_popping_value(
                        adb_subscriberRequest_t* _subscriberRequest,
                        const axutil_env_t *env)
                {
                    int value;

                    
                    
                    value = _subscriberRequest->property_number;

                    adb_subscriberRequest_free(_subscriberRequest, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_subscriberRequest_free(
                adb_subscriberRequest_t* _subscriberRequest,
                const axutil_env_t *env)
        {
            
            
            return adb_subscriberRequest_free_obj(
                _subscriberRequest,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscriberRequest_free_obj(
                adb_subscriberRequest_t* _subscriberRequest,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _subscriberRequest, AXIS2_FAILURE);

            if (_subscriberRequest->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _subscriberRequest->property_Type);
            }

            adb_subscriberRequest_reset_number(_subscriberRequest, env);
            
              if(_subscriberRequest->qname)
              {
                  axutil_qname_free (_subscriberRequest->qname, env);
                  _subscriberRequest->qname = NULL;
              }
            

            if(_subscriberRequest)
            {
                AXIS2_FREE(env->allocator, _subscriberRequest);
                _subscriberRequest = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_subscriberRequest_deserialize(
                adb_subscriberRequest_t* _subscriberRequest,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_subscriberRequest_deserialize_obj(
                _subscriberRequest,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscriberRequest_deserialize_obj(
                adb_subscriberRequest_t* _subscriberRequest,
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
            AXIS2_PARAM_CHECK(env->error, _subscriberRequest, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for subscriberRequest : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _subscriberRequest-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for subscriberRequest : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_subscriberRequest-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building number element
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
                                   
                                 element_qname = axutil_qname_create(env, "number", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("number", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("number", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_subscriberRequest_set_number(_subscriberRequest, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element number");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for number ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element number missing");
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
          adb_subscriberRequest_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_subscriberRequest_declare_parent_namespaces(
                    adb_subscriberRequest_t* _subscriberRequest,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_subscriberRequest_serialize(
                adb_subscriberRequest_t* _subscriberRequest,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_subscriberRequest_serialize_obj(
                    _subscriberRequest, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_subscriberRequest_serialize_obj(
                adb_subscriberRequest_t* _subscriberRequest,
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _subscriberRequest, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://mopevm.ru/axis2/services/types",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://mopevm.ru/axis2/services/types", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "subscriberRequest", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       p_prefix = NULL;
                      

                   if (!_subscriberRequest->is_valid_number)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property number");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("number"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("number")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing number element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_1, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _subscriberRequest->property_number);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
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
             * Getter for number by  Property Number 1
             */
            int AXIS2_CALL
            adb_subscriberRequest_get_property1(
                adb_subscriberRequest_t* _subscriberRequest,
                const axutil_env_t *env)
            {
                return adb_subscriberRequest_get_number(_subscriberRequest,
                                             env);
            }

            /**
             * getter for number.
             */
            int AXIS2_CALL
            adb_subscriberRequest_get_number(
                    adb_subscriberRequest_t* _subscriberRequest,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _subscriberRequest, (int)0);
                  

                return _subscriberRequest->property_number;
             }

            /**
             * setter for number
             */
            axis2_status_t AXIS2_CALL
            adb_subscriberRequest_set_number(
                    adb_subscriberRequest_t* _subscriberRequest,
                    const axutil_env_t *env,
                    const int  arg_number)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriberRequest, AXIS2_FAILURE);
                
                if(_subscriberRequest->is_valid_number &&
                        arg_number == _subscriberRequest->property_number)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriberRequest_reset_number(_subscriberRequest, env);

                _subscriberRequest->property_number = arg_number;
                        _subscriberRequest->is_valid_number = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for number
            */
           axis2_status_t AXIS2_CALL
           adb_subscriberRequest_reset_number(
                   adb_subscriberRequest_t* _subscriberRequest,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriberRequest, AXIS2_FAILURE);
               

               _subscriberRequest->is_valid_number = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether number is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriberRequest_is_number_nil(
                   adb_subscriberRequest_t* _subscriberRequest,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriberRequest, AXIS2_TRUE);
               
               return !_subscriberRequest->is_valid_number;
           }

           /**
            * Set number to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriberRequest_set_number_nil(
                   adb_subscriberRequest_t* _subscriberRequest,
                   const axutil_env_t *env)
           {
               return adb_subscriberRequest_reset_number(_subscriberRequest, env);
           }

           

