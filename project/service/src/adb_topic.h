

        #ifndef ADB_TOPIC_H
        #define ADB_TOPIC_H

       /**
        * adb_topic.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:34:40 IST)
        */

       /**
        *  adb_topic class
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
        

        typedef struct adb_topic adb_topic_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_topic_t
         * @param env pointer to environment struct
         * @return newly created adb_topic_t object
         */
        adb_topic_t* AXIS2_CALL
        adb_topic_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _topic adb_topic_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_free (
            adb_topic_t* _topic,
            const axutil_env_t *env);

        /**
         * Free adb_topic_t object
         * @param  _topic adb_topic_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_free_obj (
            adb_topic_t* _topic,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for name. 
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_name(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        /**
         * Setter for name.
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param arg_name axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_set_name(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            const axis2_char_t*  arg_name);

        /**
         * Resetter for name
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_reset_name(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        
        

        /**
         * Getter for about. 
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_about(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        /**
         * Setter for about.
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param arg_about axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_set_about(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            const axis2_char_t*  arg_about);

        /**
         * Resetter for about
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_reset_about(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        
        

        /**
         * Getter for address. 
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_address(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        /**
         * Setter for address.
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param arg_address axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_set_address(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            const axis2_char_t*  arg_address);

        /**
         * Resetter for address
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_reset_address(
            adb_topic_t* _topic,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether name is nill
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_topic_is_name_nil(
                adb_topic_t* _topic,
                const axutil_env_t *env);


        

        /**
         * Check whether about is nill
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_topic_is_about_nil(
                adb_topic_t* _topic,
                const axutil_env_t *env);


        

        /**
         * Check whether address is nill
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_topic_is_address_nil(
                adb_topic_t* _topic,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_deserialize(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_topic_deserialize_obj(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_topic_declare_parent_namespaces(
                    adb_topic_t* _topic,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param topic_om_node node to serialize from
         * @param topic_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_topic_serialize(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            axiom_node_t* topic_om_node, axiom_element_t *topic_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @param topic_om_node node to serialize from
         * @param topic_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_topic_serialize_obj(
            adb_topic_t* _topic,
            const axutil_env_t *env,
            axiom_node_t* topic_om_node, axiom_element_t *topic_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_topic is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_topic_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_topic_t
         * @param env pointer to environment struct
         * @param _name axis2_char_t*
         * @param _about axis2_char_t*
         * @param _address axis2_char_t*
         * @return newly created adb_topic_t object
         */
        adb_topic_t* AXIS2_CALL
        adb_topic_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _name,
                axis2_char_t* _about,
                axis2_char_t* _address);

        


                /**
                 * Free adb_topic_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _topic adb_topic_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_topic_free_popping_value(
                        adb_topic_t* _topic,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for name by property number (1)
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_property1(
            adb_topic_t* _topic,
            const axutil_env_t *env);

    
        

        /**
         * Getter for about by property number (2)
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_property2(
            adb_topic_t* _topic,
            const axutil_env_t *env);

    
        

        /**
         * Getter for address by property number (3)
         * @param  _topic adb_topic_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_topic_get_property3(
            adb_topic_t* _topic,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_TOPIC_H */
    

