

        #ifndef ADB_GENERATEUNSUBSCRIBEEVENTREQUEST_H
        #define ADB_GENERATEUNSUBSCRIBEEVENTREQUEST_H

       /**
        * adb_generateUnsubscribeEventRequest.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:34:40 IST)
        */

       /**
        *  adb_generateUnsubscribeEventRequest class
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
        

        typedef struct adb_generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_generateUnsubscribeEventRequest_t
         * @param env pointer to environment struct
         * @return newly created adb_generateUnsubscribeEventRequest_t object
         */
        adb_generateUnsubscribeEventRequest_t* AXIS2_CALL
        adb_generateUnsubscribeEventRequest_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_free (
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env);

        /**
         * Free adb_generateUnsubscribeEventRequest_t object
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_free_obj (
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for number. 
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_generateUnsubscribeEventRequest_get_number(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env);

        /**
         * Setter for number.
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param arg_number int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_set_number(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env,
            const int  arg_number);

        /**
         * Resetter for number
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_reset_number(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether number is nill
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_is_number_nil(
                adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_deserialize(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_deserialize_obj(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_generateUnsubscribeEventRequest_declare_parent_namespaces(
                    adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param generateUnsubscribeEventRequest_om_node node to serialize from
         * @param generateUnsubscribeEventRequest_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_generateUnsubscribeEventRequest_serialize(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env,
            axiom_node_t* generateUnsubscribeEventRequest_om_node, axiom_element_t *generateUnsubscribeEventRequest_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @param generateUnsubscribeEventRequest_om_node node to serialize from
         * @param generateUnsubscribeEventRequest_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_generateUnsubscribeEventRequest_serialize_obj(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env,
            axiom_node_t* generateUnsubscribeEventRequest_om_node, axiom_element_t *generateUnsubscribeEventRequest_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_generateUnsubscribeEventRequest is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_generateUnsubscribeEventRequest_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_generateUnsubscribeEventRequest_t
         * @param env pointer to environment struct
         * @param _number int
         * @return newly created adb_generateUnsubscribeEventRequest_t object
         */
        adb_generateUnsubscribeEventRequest_t* AXIS2_CALL
        adb_generateUnsubscribeEventRequest_create_with_values(
            const axutil_env_t *env,
                int _number);

        


                /**
                 * Free adb_generateUnsubscribeEventRequest_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                int AXIS2_CALL
                adb_generateUnsubscribeEventRequest_free_popping_value(
                        adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for number by property number (1)
         * @param  _generateUnsubscribeEventRequest adb_generateUnsubscribeEventRequest_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_generateUnsubscribeEventRequest_get_property1(
            adb_generateUnsubscribeEventRequest_t* _generateUnsubscribeEventRequest,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_GENERATEUNSUBSCRIBEEVENTREQUEST_H */
    

