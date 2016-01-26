

        /**
         * adb_subscriber.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_subscriber.h"
        
               /*
                * implmentation of the subscriber|http://mopevm.ru/axis2/services/types element
                */
           


        struct adb_subscriber
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            int property_id;

                
                axis2_bool_t is_valid_id;
            axis2_char_t* property_nameOfTopic;

                
                axis2_bool_t is_valid_nameOfTopic;
            axis2_char_t* property_about;

                
                axis2_bool_t is_valid_about;
            axis2_char_t* property_messages;

                
                axis2_bool_t is_valid_messages;
            axiom_node_t* property_subscriber;

                
                axis2_bool_t is_valid_subscriber;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_subscriber_t* AXIS2_CALL
        adb_subscriber_create(
            const axutil_env_t *env)
        {
            adb_subscriber_t *_subscriber = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _subscriber = (adb_subscriber_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_subscriber_t));

            if(NULL == _subscriber)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_subscriber, 0, sizeof(adb_subscriber_t));

            _subscriber->property_Type = axutil_strdup(env, "adb_subscriber");
            _subscriber->is_valid_id  = AXIS2_FALSE;
            _subscriber->property_nameOfTopic  = NULL;
                  _subscriber->is_valid_nameOfTopic  = AXIS2_FALSE;
            _subscriber->property_about  = NULL;
                  _subscriber->is_valid_about  = AXIS2_FALSE;
            _subscriber->property_messages  = NULL;
                  _subscriber->is_valid_messages  = AXIS2_FALSE;
            _subscriber->is_valid_subscriber  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "subscriber",
                        "http://mopevm.ru/axis2/services/types",
                        NULL);
                _subscriber->qname = qname;
            

            return _subscriber;
        }

        adb_subscriber_t* AXIS2_CALL
        adb_subscriber_create_with_values(
            const axutil_env_t *env,
                int _id,
                axis2_char_t* _nameOfTopic,
                axis2_char_t* _about,
                axis2_char_t* _messages,
                axiom_node_t* _subscriber)
        {
            adb_subscriber_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_subscriber_create(env);

            
              status = adb_subscriber_set_id(
                                     adb_obj,
                                     env,
                                     _id);
              if(status == AXIS2_FAILURE) {
                  adb_subscriber_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_subscriber_set_nameOfTopic(
                                     adb_obj,
                                     env,
                                     _nameOfTopic);
              if(status == AXIS2_FAILURE) {
                  adb_subscriber_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_subscriber_set_about(
                                     adb_obj,
                                     env,
                                     _about);
              if(status == AXIS2_FAILURE) {
                  adb_subscriber_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_subscriber_set_messages(
                                     adb_obj,
                                     env,
                                     _messages);
              if(status == AXIS2_FAILURE) {
                  adb_subscriber_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_subscriber_set_subscriber(
                                     adb_obj,
                                     env,
                                     _subscriber);
              if(status == AXIS2_FAILURE) {
                  adb_subscriber_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        int AXIS2_CALL
                adb_subscriber_free_popping_value(
                        adb_subscriber_t* _subscriber,
                        const axutil_env_t *env)
                {
                    int value;

                    
                    
                    value = _subscriber->property_id;

                    adb_subscriber_free(_subscriber, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_subscriber_free(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
        {
            
            
            return adb_subscriber_free_obj(
                _subscriber,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscriber_free_obj(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);

            if (_subscriber->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _subscriber->property_Type);
            }

            adb_subscriber_reset_id(_subscriber, env);
            adb_subscriber_reset_nameOfTopic(_subscriber, env);
            adb_subscriber_reset_about(_subscriber, env);
            adb_subscriber_reset_messages(_subscriber, env);
            adb_subscriber_reset_subscriber(_subscriber, env);
            
              if(_subscriber->qname)
              {
                  axutil_qname_free (_subscriber->qname, env);
                  _subscriber->qname = NULL;
              }
            

            if(_subscriber)
            {
                AXIS2_FREE(env->allocator, _subscriber);
                _subscriber = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_subscriber_deserialize(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_subscriber_deserialize_obj(
                _subscriber,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subscriber_deserialize_obj(
                adb_subscriber_t* _subscriber,
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
            AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for subscriber : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _subscriber-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for subscriber : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_subscriber-> qname, env),
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
                                            status = adb_subscriber_set_id(_subscriber, env,
                                                                   atoi(text_value));
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
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building nameOfTopic element
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
                                 
                                 element_qname = axutil_qname_create(env, "nameOfTopic", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("nameOfTopic", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("nameOfTopic", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_subscriber_set_nameOfTopic(_subscriber, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for nameOfTopic ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building about element
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
                                 
                                 element_qname = axutil_qname_create(env, "about", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("about", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("about", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_subscriber_set_about(_subscriber, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for about ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building messages element
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
                                 
                                 element_qname = axutil_qname_create(env, "messages", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("messages", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("messages", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_subscriber_set_messages(_subscriber, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for messages ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building subscriber element
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
                                 
                                 element_qname = axutil_qname_create(env, "subscriber", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("subscriber", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("subscriber", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_subscriber_set_subscriber(_subscriber, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_subscriber_set_subscriber(_subscriber, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for subscriber ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_subscriber_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_subscriber_declare_parent_namespaces(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_subscriber_serialize(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_subscriber_serialize_obj(
                    _subscriber, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_subscriber_serialize_obj(
                adb_subscriber_t* _subscriber,
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
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _subscriber, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://mopevm.ru/axis2/services/types",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://mopevm.ru/axis2/services/types", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "subscriber", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       p_prefix = NULL;
                      

                   if (!_subscriber->is_valid_id)
                   {
                      
                            
                            start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                        (5 + axutil_strlen(p_prefix) + 
                                         axutil_strlen("id") + 
                                         axutil_strlen(" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\""))); 
                                        
                            
                            sprintf(start_input_str, "<%s%sid xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\"/>",
                                        p_prefix?p_prefix:"",
                                        (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                                        
                            axutil_stream_write(stream, env, start_input_str, axutil_strlen(start_input_str));
                            AXIS2_FREE(env->allocator,start_input_str);
                          
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
                    
                               sprintf (text_value_1, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _subscriber->property_id);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_subscriber->is_valid_nameOfTopic)
                   {
                      
                            
                            start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                        (5 + axutil_strlen(p_prefix) + 
                                         axutil_strlen("nameOfTopic") + 
                                         axutil_strlen(" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\""))); 
                                        
                            
                            sprintf(start_input_str, "<%s%snameOfTopic xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\"/>",
                                        p_prefix?p_prefix:"",
                                        (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                                        
                            axutil_stream_write(stream, env, start_input_str, axutil_strlen(start_input_str));
                            AXIS2_FREE(env->allocator,start_input_str);
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("nameOfTopic"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("nameOfTopic")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing nameOfTopic element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snameOfTopic>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snameOfTopic>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _subscriber->property_nameOfTopic;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_subscriber->is_valid_about)
                   {
                      
                            
                            start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                        (5 + axutil_strlen(p_prefix) + 
                                         axutil_strlen("about") + 
                                         axutil_strlen(" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\""))); 
                                        
                            
                            sprintf(start_input_str, "<%s%sabout xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\"/>",
                                        p_prefix?p_prefix:"",
                                        (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                                        
                            axutil_stream_write(stream, env, start_input_str, axutil_strlen(start_input_str));
                            AXIS2_FREE(env->allocator,start_input_str);
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("about"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("about")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing about element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sabout>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sabout>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _subscriber->property_about;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_subscriber->is_valid_messages)
                   {
                      
                            
                            start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                        (5 + axutil_strlen(p_prefix) + 
                                         axutil_strlen("messages") + 
                                         axutil_strlen(" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\""))); 
                                        
                            
                            sprintf(start_input_str, "<%s%smessages xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\"/>",
                                        p_prefix?p_prefix:"",
                                        (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                                        
                            axutil_stream_write(stream, env, start_input_str, axutil_strlen(start_input_str));
                            AXIS2_FREE(env->allocator,start_input_str);
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("messages"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("messages")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing messages element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smessages>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smessages>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_4 = _subscriber->property_messages;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_4_temp = axutil_xml_quote_string(env, text_value_4, AXIS2_TRUE);
                           if (text_value_4_temp)
                           {
                               axutil_stream_write(stream, env, text_value_4_temp, axutil_strlen(text_value_4_temp));
                               AXIS2_FREE(env->allocator, text_value_4_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_subscriber->is_valid_subscriber)
                   {
                      
                            
                            start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                        (5 + axutil_strlen(p_prefix) + 
                                         axutil_strlen("subscriber") + 
                                         axutil_strlen(" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\""))); 
                                        
                            
                            sprintf(start_input_str, "<%s%ssubscriber xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:nil=\"1\"/>",
                                        p_prefix?p_prefix:"",
                                        (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                                        
                            axutil_stream_write(stream, env, start_input_str, axutil_strlen(start_input_str));
                            AXIS2_FREE(env->allocator,start_input_str);
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("subscriber"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("subscriber")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing subscriber element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssubscriber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssubscriber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_5 = axiom_node_to_string(_subscriber->property_subscriber, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                                
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
             * Getter for id by  Property Number 1
             */
            int AXIS2_CALL
            adb_subscriber_get_property1(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
            {
                return adb_subscriber_get_id(_subscriber,
                                             env);
            }

            /**
             * getter for id.
             */
            int AXIS2_CALL
            adb_subscriber_get_id(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _subscriber, (int)0);
                  

                return _subscriber->property_id;
             }

            /**
             * setter for id
             */
            axis2_status_t AXIS2_CALL
            adb_subscriber_set_id(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env,
                    const int  arg_id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
                
                if(_subscriber->is_valid_id &&
                        arg_id == _subscriber->property_id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriber_reset_id(_subscriber, env);

                _subscriber->property_id = arg_id;
                        _subscriber->is_valid_id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for id
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_reset_id(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
               

               _subscriber->is_valid_id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriber_is_id_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_TRUE);
               
               return !_subscriber->is_valid_id;
           }

           /**
            * Set id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_set_id_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               return adb_subscriber_reset_id(_subscriber, env);
           }

           

            /**
             * Getter for nameOfTopic by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_property2(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
            {
                return adb_subscriber_get_nameOfTopic(_subscriber,
                                             env);
            }

            /**
             * getter for nameOfTopic.
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_nameOfTopic(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subscriber, NULL);
                  

                return _subscriber->property_nameOfTopic;
             }

            /**
             * setter for nameOfTopic
             */
            axis2_status_t AXIS2_CALL
            adb_subscriber_set_nameOfTopic(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_nameOfTopic)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
                
                if(_subscriber->is_valid_nameOfTopic &&
                        arg_nameOfTopic == _subscriber->property_nameOfTopic)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriber_reset_nameOfTopic(_subscriber, env);

                
                if(NULL == arg_nameOfTopic)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subscriber->property_nameOfTopic = (axis2_char_t *)axutil_strdup(env, arg_nameOfTopic);
                        if(NULL == _subscriber->property_nameOfTopic)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for nameOfTopic");
                            return AXIS2_FAILURE;
                        }
                        _subscriber->is_valid_nameOfTopic = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for nameOfTopic
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_reset_nameOfTopic(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
               

               
            
                
                if(_subscriber->property_nameOfTopic != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _subscriber->property_nameOfTopic);
                     _subscriber->property_nameOfTopic = NULL;
                }
            
                
                
                _subscriber->is_valid_nameOfTopic = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether nameOfTopic is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriber_is_nameOfTopic_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_TRUE);
               
               return !_subscriber->is_valid_nameOfTopic;
           }

           /**
            * Set nameOfTopic to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_set_nameOfTopic_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               return adb_subscriber_reset_nameOfTopic(_subscriber, env);
           }

           

            /**
             * Getter for about by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_property3(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
            {
                return adb_subscriber_get_about(_subscriber,
                                             env);
            }

            /**
             * getter for about.
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_about(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subscriber, NULL);
                  

                return _subscriber->property_about;
             }

            /**
             * setter for about
             */
            axis2_status_t AXIS2_CALL
            adb_subscriber_set_about(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_about)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
                
                if(_subscriber->is_valid_about &&
                        arg_about == _subscriber->property_about)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriber_reset_about(_subscriber, env);

                
                if(NULL == arg_about)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subscriber->property_about = (axis2_char_t *)axutil_strdup(env, arg_about);
                        if(NULL == _subscriber->property_about)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for about");
                            return AXIS2_FAILURE;
                        }
                        _subscriber->is_valid_about = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for about
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_reset_about(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
               

               
            
                
                if(_subscriber->property_about != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _subscriber->property_about);
                     _subscriber->property_about = NULL;
                }
            
                
                
                _subscriber->is_valid_about = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether about is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriber_is_about_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_TRUE);
               
               return !_subscriber->is_valid_about;
           }

           /**
            * Set about to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_set_about_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               return adb_subscriber_reset_about(_subscriber, env);
           }

           

            /**
             * Getter for messages by  Property Number 4
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_property4(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
            {
                return adb_subscriber_get_messages(_subscriber,
                                             env);
            }

            /**
             * getter for messages.
             */
            axis2_char_t* AXIS2_CALL
            adb_subscriber_get_messages(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subscriber, NULL);
                  

                return _subscriber->property_messages;
             }

            /**
             * setter for messages
             */
            axis2_status_t AXIS2_CALL
            adb_subscriber_set_messages(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_messages)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
                
                if(_subscriber->is_valid_messages &&
                        arg_messages == _subscriber->property_messages)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriber_reset_messages(_subscriber, env);

                
                if(NULL == arg_messages)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subscriber->property_messages = (axis2_char_t *)axutil_strdup(env, arg_messages);
                        if(NULL == _subscriber->property_messages)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for messages");
                            return AXIS2_FAILURE;
                        }
                        _subscriber->is_valid_messages = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for messages
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_reset_messages(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
               

               
            
                
                if(_subscriber->property_messages != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _subscriber->property_messages);
                     _subscriber->property_messages = NULL;
                }
            
                
                
                _subscriber->is_valid_messages = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether messages is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriber_is_messages_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_TRUE);
               
               return !_subscriber->is_valid_messages;
           }

           /**
            * Set messages to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_set_messages_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               return adb_subscriber_reset_messages(_subscriber, env);
           }

           

            /**
             * Getter for subscriber by  Property Number 5
             */
            axiom_node_t* AXIS2_CALL
            adb_subscriber_get_property5(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env)
            {
                return adb_subscriber_get_subscriber(_subscriber,
                                             env);
            }

            /**
             * getter for subscriber.
             */
            axiom_node_t* AXIS2_CALL
            adb_subscriber_get_subscriber(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subscriber, NULL);
                  

                return _subscriber->property_subscriber;
             }

            /**
             * setter for subscriber
             */
            axis2_status_t AXIS2_CALL
            adb_subscriber_set_subscriber(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_subscriber)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
                
                if(_subscriber->is_valid_subscriber &&
                        arg_subscriber == _subscriber->property_subscriber)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_subscriber_reset_subscriber(_subscriber, env);

                
                if(NULL == arg_subscriber)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subscriber->property_subscriber = arg_subscriber;
                        _subscriber->is_valid_subscriber = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for subscriber
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_reset_subscriber(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_FAILURE);
               

               _subscriber->is_valid_subscriber = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether subscriber is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subscriber_is_subscriber_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subscriber, AXIS2_TRUE);
               
               return !_subscriber->is_valid_subscriber;
           }

           /**
            * Set subscriber to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subscriber_set_subscriber_nil(
                   adb_subscriber_t* _subscriber,
                   const axutil_env_t *env)
           {
               return adb_subscriber_reset_subscriber(_subscriber, env);
           }

           

