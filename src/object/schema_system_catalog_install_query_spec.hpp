/*
 *
 * Copyright 2016 CUBRID Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */


/*
 * schema_system_catalog_install_query_spec.hpp
 */

#ifndef _SCHEMA_SYSTEM_CATALOG_INSTALL_QUERY_SPEC_HPP_
#define _SCHEMA_SYSTEM_CATALOG_INSTALL_QUERY_SPEC_HPP_

const char *sm_define_view_class_spec (void);
const char *sm_define_view_super_class_spec (void);
const char *sm_define_view_vclass_spec (void);
const char *sm_define_view_attribute_spec (void);
const char *sm_define_view_attribute_set_domain_spec (void);
const char *sm_define_view_method_spec (void);
const char *sm_define_view_method_argument_spec (void);
const char *sm_define_view_method_argument_set_domain_spec (void);
const char *sm_define_view_method_file_spec (void);
const char *sm_define_view_index_spec (void);
const char *sm_define_view_index_key_spec (void);
const char *sm_define_view_authorization_spec (void);
const char *sm_define_view_trigger_spec (void);
const char *sm_define_view_partition_spec (void);
const char *sm_define_view_stored_procedure_spec (void);
const char *sm_define_view_stored_procedure_arguments_spec (void);
const char *sm_define_view_db_collation_spec (void);
const char *sm_define_view_db_charset_spec (void);
const char *sm_define_view_synonym_spec (void);
const char *sm_define_view_db_server_spec (void);

#endif /* _SCHEMA_SYSTEM_CATALOG_INSTALL_QUERY_SPEC_HPP_ */
