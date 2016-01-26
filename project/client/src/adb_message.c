

        /**
         * adb_message.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_message.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = message
                 * Namespace URI = http://mopevm.ru/axis2/services/types
                 * Namespace Prefix = ns1
                 */
           


        struct adb_message
        {
            axis2_char_t *property_Type;

            axis2_char_t* property_about;

                
                axis2_bool_t is_valid_about;
            int property_errorLevel;

                
                axis2_bool_t is_valid_errorLevel;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_message_set_about_nil(
                        adb_message_t* _message,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_message_set_errorLevel_nil(
                        adb_message_t* _message,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_message_t* AXIS2_CALL
        adb_message_create(
            const axutil_env_t *env)
        {
            adb_message_t *_message = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _message = (adb_message_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_message_t));

            if(NULL == _message)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_message, 0, sizeof(adb_message_t));

            _message->property_Type = axutil_strdup(env, "adb_message");
            _message->property_about  = NULL;
                  _message->is_valid_about  = AXIS2_FALSE;
            _message->is_valid_errorLevel  = AXIS2_FALSE;
            

            return _message;
        }

        adb_message_t* AXIS2_CALL
        adb_message_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _about,
                int _errorLevel)
        {
            adb_message_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_message_create(env);

            
              status = adb_message_set_about(
                                     adb_obj,
                                     env,
                                     _about);
              if(status == AXIS2_FAILURE) {
                  adb_message_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_message_set_errorLevel(
                                     adb_obj,
                                     env,
                                     _errorLevel);
              if(status == AXIS2_FAILURE) {
                  adb_message_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_message_free_popping_value(
                        adb_message_t* _message,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _message->property_about;

                    _message->property_about = (axis2_char_t*)NULL;
                    adb_message_free(_message, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_message_free(
                adb_message_t* _message,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _message,
                env,
                "adb_message");
            
        }

        axis2_status_t AXIS2_CALL
        adb_message_free_obj(
                adb_message_t* _message,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);

            if (_message->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _message->property_Type);
            }

            adb_message_reset_about(_message, env);
            adb_message_reset_errorLevel(_message, env);
            

            if(_message)
            {
                AXIS2_FREE(env->allocator, _message);
                _message = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_message_deserialize(
                adb_message_t* _message,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _message,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_message");
            
        }

        axis2_status_t AXIS2_CALL
        adb_message_deserialize_obj(
                adb_message_t* _message,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              axiom_attribute_t *parent_attri = NULL;
              axiom_element_t *parent_element = NULL;
              axis2_char_t *attrib_text = NULL;

              axutil_hash_t *attribute_hash = NULL;

           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for message : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building about element
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
                                            status = adb_message_set_about(_message, env,
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
                                                status = adb_message_set_about(_message, env,
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
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "errorLevel"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "errorLevel", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "errorLevel");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_message_set_errorLevel(_message,
                                                          env, atoi(attrib_text));
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_message_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_message_declare_parent_namespaces(
                    adb_message_t* _message,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_message_serialize(
                adb_message_t* _message,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_message == NULL)
            {
                return adb_message_serialize_obj(
                    _message, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _message, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_message");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_message_serialize_obj(
                adb_message_t* _message,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
               axiom_attribute_t *text_attri = NULL;
             
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _message, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_message->is_valid_errorLevel)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (ADB_DEFAULT_DIGIT_LIMIT + 5 + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT + 
                                                                axutil_strlen("errorLevel")));
                                                            
                           sprintf(text_value, " %s%s%s=\"%d\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "errorLevel", _message->property_errorLevel);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute errorLevel");
                      return NULL;
                   }
                   
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"message\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://mopevm.ru/axis2/services/types",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "message", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       p_prefix = NULL;
                      

                   if (!_message->is_valid_about)
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
                    
                           text_value_1 = _message->property_about;
                           
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

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_message->is_valid_errorLevel)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                           sprintf (text_value, "%d", _message->property_errorLevel);
                           text_attri = axiom_attribute_create (env, "errorLevel", text_value, ns1);
                           
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute errorLevel");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for about by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_message_get_property1(
                adb_message_t* _message,
                const axutil_env_t *env)
            {
                return adb_message_get_about(_message,
                                             env);
            }

            /**
             * getter for about.
             */
            axis2_char_t* AXIS2_CALL
            adb_message_get_about(
                    adb_message_t* _message,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _message, NULL);
                  

                return _message->property_about;
             }

            /**
             * setter for about
             */
            axis2_status_t AXIS2_CALL
            adb_message_set_about(
                    adb_message_t* _message,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_about)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);
                
                if(_message->is_valid_about &&
                        arg_about == _message->property_about)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_about)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "about is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_message_reset_about(_message, env);

                
                if(NULL == arg_about)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _message->property_about = (axis2_char_t *)axutil_strdup(env, arg_about);
                        if(NULL == _message->property_about)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for about");
                            return AXIS2_FAILURE;
                        }
                        _message->is_valid_about = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for about
            */
           axis2_status_t AXIS2_CALL
           adb_message_reset_about(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);
               

               
            
                
                if(_message->property_about != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _message->property_about);
                     _message->property_about = NULL;
                }
            
                
                
                _message->is_valid_about = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether about is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_message_is_about_nil(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _message, AXIS2_TRUE);
               
               return !_message->is_valid_about;
           }

           /**
            * Set about to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_message_set_about_nil(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               return adb_message_reset_about(_message, env);
           }

           

            /**
             * Getter for errorLevel by  Property Number 2
             */
            int AXIS2_CALL
            adb_message_get_property2(
                adb_message_t* _message,
                const axutil_env_t *env)
            {
                return adb_message_get_errorLevel(_message,
                                             env);
            }

            /**
             * getter for errorLevel.
             */
            int AXIS2_CALL
            adb_message_get_errorLevel(
                    adb_message_t* _message,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _message, (int)0);
                  

                return _message->property_errorLevel;
             }

            /**
             * setter for errorLevel
             */
            axis2_status_t AXIS2_CALL
            adb_message_set_errorLevel(
                    adb_message_t* _message,
                    const axutil_env_t *env,
                    const int  arg_errorLevel)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);
                
                if(_message->is_valid_errorLevel &&
                        arg_errorLevel == _message->property_errorLevel)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_message_reset_errorLevel(_message, env);

                _message->property_errorLevel = arg_errorLevel;
                        _message->is_valid_errorLevel = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for errorLevel
            */
           axis2_status_t AXIS2_CALL
           adb_message_reset_errorLevel(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _message, AXIS2_FAILURE);
               

               _message->is_valid_errorLevel = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether errorLevel is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_message_is_errorLevel_nil(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _message, AXIS2_TRUE);
               
               return !_message->is_valid_errorLevel;
           }

           /**
            * Set errorLevel to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_message_set_errorLevel_nil(
                   adb_message_t* _message,
                   const axutil_env_t *env)
           {
               return adb_message_reset_errorLevel(_message, env);
           }

           

