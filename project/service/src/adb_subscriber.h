

        #ifndef ADB_SUBSCRIBER_H
        #define ADB_SUBSCRIBER_H

       /**
        * adb_subscriber.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:34:40 IST)
        */

       /**
        *  adb_subscriber class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_subscriber adb_subscriber_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_subscriber_t
         * @param env pointer to environment struct
         * @return newly created adb_subscriber_t object
         */
        adb_subscriber_t* AXIS2_CALL
        adb_subscriber_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _subscriber adb_subscriber_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_free (
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Free adb_subscriber_t object
         * @param  _subscriber adb_subscriber_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_free_obj (
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for id. 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_subscriber_get_id(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Setter for id.
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param arg_id int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_id(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            const int  arg_id);

        /**
         * Resetter for id
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_reset_id(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        
        

        /**
         * Getter for nameOfTopic. 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_nameOfTopic(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Setter for nameOfTopic.
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param arg_nameOfTopic axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_nameOfTopic(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            const axis2_char_t*  arg_nameOfTopic);

        /**
         * Resetter for nameOfTopic
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_reset_nameOfTopic(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        
        

        /**
         * Getter for about. 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_about(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Setter for about.
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param arg_about axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_about(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            const axis2_char_t*  arg_about);

        /**
         * Resetter for about
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_reset_about(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        
        

        /**
         * Getter for messages. 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_messages(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Setter for messages.
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param arg_messages axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_messages(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            const axis2_char_t*  arg_messages);

        /**
         * Resetter for messages
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_reset_messages(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        
        

        /**
         * Getter for subscriber. 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_subscriber_get_subscriber(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        /**
         * Setter for subscriber.
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param arg_subscriber axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_subscriber(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            axiom_node_t*  arg_subscriber);

        /**
         * Resetter for subscriber
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_reset_subscriber(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether id is nill
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_id_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);


        
        /**
         * Set id to nill (currently the same as reset)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_id_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);
        

        /**
         * Check whether nameOfTopic is nill
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_nameOfTopic_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);


        
        /**
         * Set nameOfTopic to nill (currently the same as reset)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_nameOfTopic_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);
        

        /**
         * Check whether about is nill
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_about_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);


        
        /**
         * Set about to nill (currently the same as reset)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_about_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);
        

        /**
         * Check whether messages is nill
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_messages_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);


        
        /**
         * Set messages to nill (currently the same as reset)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_messages_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);
        

        /**
         * Check whether subscriber is nill
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_subscriber_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);


        
        /**
         * Set subscriber to nill (currently the same as reset)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_set_subscriber_nil(
                adb_subscriber_t* _subscriber,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_deserialize(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_subscriber_deserialize_obj(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_subscriber_declare_parent_namespaces(
                    adb_subscriber_t* _subscriber,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param subscriber_om_node node to serialize from
         * @param subscriber_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_subscriber_serialize(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            axiom_node_t* subscriber_om_node, axiom_element_t *subscriber_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @param subscriber_om_node node to serialize from
         * @param subscriber_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_subscriber_serialize_obj(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env,
            axiom_node_t* subscriber_om_node, axiom_element_t *subscriber_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_subscriber is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_subscriber_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_subscriber_t
         * @param env pointer to environment struct
         * @param _id int
         * @param _nameOfTopic axis2_char_t*
         * @param _about axis2_char_t*
         * @param _messages axis2_char_t*
         * @param _subscriber axiom_node_t*
         * @return newly created adb_subscriber_t object
         */
        adb_subscriber_t* AXIS2_CALL
        adb_subscriber_create_with_values(
            const axutil_env_t *env,
                int _id,
                axis2_char_t* _nameOfTopic,
                axis2_char_t* _about,
                axis2_char_t* _messages,
                axiom_node_t* _subscriber);

        


                /**
                 * Free adb_subscriber_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _subscriber adb_subscriber_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                int AXIS2_CALL
                adb_subscriber_free_popping_value(
                        adb_subscriber_t* _subscriber,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for id by property number (1)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_subscriber_get_property1(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

    
        

        /**
         * Getter for nameOfTopic by property number (2)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_property2(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

    
        

        /**
         * Getter for about by property number (3)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_property3(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

    
        

        /**
         * Getter for messages by property number (4)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_subscriber_get_property4(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

    
        

        /**
         * Getter for subscriber by property number (5)
         * @param  _subscriber adb_subscriber_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_subscriber_get_property5(
            adb_subscriber_t* _subscriber,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SUBSCRIBER_H */
    

