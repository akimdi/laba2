

        /**
         * adb_topic.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_topic.h"
        
               /*
                * implmentation of the topic|http://mopevm.ru/axis2/services/types element
                */
           


        struct adb_topic
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            axis2_char_t* property_about;

                
                axis2_bool_t is_valid_about;
            axis2_char_t* property_address;

                
                axis2_bool_t is_valid_address;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_topic_set_name_nil(
                        adb_topic_t* _topic,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_topic_set_about_nil(
                        adb_topic_t* _topic,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_topic_set_address_nil(
                        adb_topic_t* _topic,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_topic_t* AXIS2_CALL
        adb_topic_create(
            const axutil_env_t *env)
        {
            adb_topic_t *_topic = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _topic = (adb_topic_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_topic_t));

            if(NULL == _topic)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_topic, 0, sizeof(adb_topic_t));

            _topic->property_Type = axutil_strdup(env, "adb_topic");
            _topic->property_name  = NULL;
                  _topic->is_valid_name  = AXIS2_FALSE;
            _topic->property_about  = NULL;
                  _topic->is_valid_about  = AXIS2_FALSE;
            _topic->property_address  = NULL;
                  _topic->is_valid_address  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "topic",
                        "http://mopevm.ru/axis2/services/types",
                        NULL);
                _topic->qname = qname;
            

            return _topic;
        }

        adb_topic_t* AXIS2_CALL
        adb_topic_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _name,
                axis2_char_t* _about,
                axis2_char_t* _address)
        {
            adb_topic_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_topic_create(env);

            
              status = adb_topic_set_name(
                                     adb_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  adb_topic_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_topic_set_about(
                                     adb_obj,
                                     env,
                                     _about);
              if(status == AXIS2_FAILURE) {
                  adb_topic_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_topic_set_address(
                                     adb_obj,
                                     env,
                                     _address);
              if(status == AXIS2_FAILURE) {
                  adb_topic_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_topic_free_popping_value(
                        adb_topic_t* _topic,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _topic->property_name;

                    _topic->property_name = (axis2_char_t*)NULL;
                    adb_topic_free(_topic, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_topic_free(
                adb_topic_t* _topic,
                const axutil_env_t *env)
        {
            
            
            return adb_topic_free_obj(
                _topic,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_topic_free_obj(
                adb_topic_t* _topic,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);

            if (_topic->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _topic->property_Type);
            }

            adb_topic_reset_name(_topic, env);
            adb_topic_reset_about(_topic, env);
            adb_topic_reset_address(_topic, env);
            
              if(_topic->qname)
              {
                  axutil_qname_free (_topic->qname, env);
                  _topic->qname = NULL;
              }
            

            if(_topic)
            {
                AXIS2_FREE(env->allocator, _topic);
                _topic = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_topic_deserialize(
                adb_topic_t* _topic,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_topic_deserialize_obj(
                _topic,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_topic_deserialize_obj(
                adb_topic_t* _topic,
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
            AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for topic : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _topic-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for topic : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_topic-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building name element
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
                                   
                                 element_qname = axutil_qname_create(env, "name", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("name", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("name", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_topic_set_name(_topic, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element name");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_topic_set_name(_topic, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for name ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element name missing");
                                  return AXIS2_FAILURE;
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
                                            status = adb_topic_set_about(_topic, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element about");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_topic_set_about(_topic, env,
                                                                   "");
                                            }
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
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element about missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building address element
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
                                 
                                 element_qname = axutil_qname_create(env, "address", NULL, NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("address", axiom_element_get_localname(current_element, env)))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("address", axiom_element_get_localname(current_element, env))))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_topic_set_address(_topic, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element address");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_topic_set_address(_topic, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for address ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element address missing");
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
          adb_topic_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_topic_declare_parent_namespaces(
                    adb_topic_t* _topic,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_topic_serialize(
                adb_topic_t* _topic,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_topic_serialize_obj(
                    _topic, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_topic_serialize_obj(
                adb_topic_t* _topic,
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
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _topic, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://mopevm.ru/axis2/services/types",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://mopevm.ru/axis2/services/types", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "topic", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       p_prefix = NULL;
                      

                   if (!_topic->is_valid_name)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property name");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("name"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("name")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing name element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _topic->property_name;
                           
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

                 
                       p_prefix = NULL;
                      

                   if (!_topic->is_valid_about)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property about");
                            return NULL;
                          
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
                    
                           text_value_2 = _topic->property_about;
                           
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
                      

                   if (!_topic->is_valid_address)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property address");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("address"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("address")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing address element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%saddress>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%saddress>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _topic->property_address;
                           
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
             * Getter for name by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_property1(
                adb_topic_t* _topic,
                const axutil_env_t *env)
            {
                return adb_topic_get_name(_topic,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_name(
                    adb_topic_t* _topic,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _topic, NULL);
                  

                return _topic->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            adb_topic_set_name(
                    adb_topic_t* _topic,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
                
                if(_topic->is_valid_name &&
                        arg_name == _topic->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_name)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "name is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_topic_reset_name(_topic, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _topic->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _topic->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _topic->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           adb_topic_reset_name(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
               

               
            
                
                if(_topic->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _topic->property_name);
                     _topic->property_name = NULL;
                }
            
                
                
                _topic->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_topic_is_name_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_TRUE);
               
               return !_topic->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_topic_set_name_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               return adb_topic_reset_name(_topic, env);
           }

           

            /**
             * Getter for about by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_property2(
                adb_topic_t* _topic,
                const axutil_env_t *env)
            {
                return adb_topic_get_about(_topic,
                                             env);
            }

            /**
             * getter for about.
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_about(
                    adb_topic_t* _topic,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _topic, NULL);
                  

                return _topic->property_about;
             }

            /**
             * setter for about
             */
            axis2_status_t AXIS2_CALL
            adb_topic_set_about(
                    adb_topic_t* _topic,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_about)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
                
                if(_topic->is_valid_about &&
                        arg_about == _topic->property_about)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_about)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "about is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_topic_reset_about(_topic, env);

                
                if(NULL == arg_about)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _topic->property_about = (axis2_char_t *)axutil_strdup(env, arg_about);
                        if(NULL == _topic->property_about)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for about");
                            return AXIS2_FAILURE;
                        }
                        _topic->is_valid_about = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for about
            */
           axis2_status_t AXIS2_CALL
           adb_topic_reset_about(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
               

               
            
                
                if(_topic->property_about != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _topic->property_about);
                     _topic->property_about = NULL;
                }
            
                
                
                _topic->is_valid_about = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether about is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_topic_is_about_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_TRUE);
               
               return !_topic->is_valid_about;
           }

           /**
            * Set about to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_topic_set_about_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               return adb_topic_reset_about(_topic, env);
           }

           

            /**
             * Getter for address by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_property3(
                adb_topic_t* _topic,
                const axutil_env_t *env)
            {
                return adb_topic_get_address(_topic,
                                             env);
            }

            /**
             * getter for address.
             */
            axis2_char_t* AXIS2_CALL
            adb_topic_get_address(
                    adb_topic_t* _topic,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _topic, NULL);
                  

                return _topic->property_address;
             }

            /**
             * setter for address
             */
            axis2_status_t AXIS2_CALL
            adb_topic_set_address(
                    adb_topic_t* _topic,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_address)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
                
                if(_topic->is_valid_address &&
                        arg_address == _topic->property_address)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_address)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "address is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_topic_reset_address(_topic, env);

                
                if(NULL == arg_address)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _topic->property_address = (axis2_char_t *)axutil_strdup(env, arg_address);
                        if(NULL == _topic->property_address)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for address");
                            return AXIS2_FAILURE;
                        }
                        _topic->is_valid_address = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for address
            */
           axis2_status_t AXIS2_CALL
           adb_topic_reset_address(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_FAILURE);
               

               
            
                
                if(_topic->property_address != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _topic->property_address);
                     _topic->property_address = NULL;
                }
            
                
                
                _topic->is_valid_address = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether address is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_topic_is_address_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _topic, AXIS2_TRUE);
               
               return !_topic->is_valid_address;
           }

           /**
            * Set address to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_topic_set_address_nil(
                   adb_topic_t* _topic,
                   const axutil_env_t *env)
           {
               return adb_topic_reset_address(_topic, env);
           }

           

