

        #ifndef ADB_MESSAGE_H
        #define ADB_MESSAGE_H

       /**
        * adb_message.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:34:40 IST)
        */

       /**
        *  adb_message class
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
        

        typedef struct adb_message adb_message_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_message_t
         * @param env pointer to environment struct
         * @return newly created adb_message_t object
         */
        adb_message_t* AXIS2_CALL
        adb_message_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _message adb_message_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_free (
            adb_message_t* _message,
            const axutil_env_t *env);

        /**
         * Free adb_message_t object
         * @param  _message adb_message_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_free_obj (
            adb_message_t* _message,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for about. 
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_message_get_about(
            adb_message_t* _message,
            const axutil_env_t *env);

        /**
         * Setter for about.
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param arg_about axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_set_about(
            adb_message_t* _message,
            const axutil_env_t *env,
            const axis2_char_t*  arg_about);

        /**
         * Resetter for about
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_reset_about(
            adb_message_t* _message,
            const axutil_env_t *env);

        
        

        /**
         * Getter for errorLevel. 
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_message_get_errorLevel(
            adb_message_t* _message,
            const axutil_env_t *env);

        /**
         * Setter for errorLevel.
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param arg_errorLevel int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_set_errorLevel(
            adb_message_t* _message,
            const axutil_env_t *env,
            const int  arg_errorLevel);

        /**
         * Resetter for errorLevel
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_reset_errorLevel(
            adb_message_t* _message,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether about is nill
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_message_is_about_nil(
                adb_message_t* _message,
                const axutil_env_t *env);


        

        /**
         * Check whether errorLevel is nill
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_message_is_errorLevel_nil(
                adb_message_t* _message,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_deserialize(
            adb_message_t* _message,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_message_deserialize_obj(
            adb_message_t* _message,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_message_declare_parent_namespaces(
                    adb_message_t* _message,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param message_om_node node to serialize from
         * @param message_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_message_serialize(
            adb_message_t* _message,
            const axutil_env_t *env,
            axiom_node_t* message_om_node, axiom_element_t *message_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @param message_om_node node to serialize from
         * @param message_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_message_serialize_obj(
            adb_message_t* _message,
            const axutil_env_t *env,
            axiom_node_t* message_om_node, axiom_element_t *message_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_message is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_message_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_message_t
         * @param env pointer to environment struct
         * @param _about axis2_char_t*
         * @param _errorLevel int
         * @return newly created adb_message_t object
         */
        adb_message_t* AXIS2_CALL
        adb_message_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _about,
                int _errorLevel);

        


                /**
                 * Free adb_message_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _message adb_message_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_message_free_popping_value(
                        adb_message_t* _message,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for about by property number (1)
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_message_get_property1(
            adb_message_t* _message,
            const axutil_env_t *env);

    
        

        /**
         * Getter for errorLevel by property number (2)
         * @param  _message adb_message_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_message_get_property2(
            adb_message_t* _message,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_MESSAGE_H */
    

