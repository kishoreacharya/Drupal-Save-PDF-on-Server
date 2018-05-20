<?php
function save_pdf_on_server_default_rules_configuration() {
  $configs = array();
  $rule = '{ "save_pdf_on_server" : {
    "LABEL" : "final save pdfs",
    "PLUGIN" : "reaction rule",
    "ACTIVE" : false,
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "views_pdf", "entityform" ],
    "ON" : { "entityform_insert" : [] },
    "IF" : [
      { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_test_pdf_form" } }
    ],
    "DO" : [
      { "views_pdf_rules_action_save" : {
          "views_pdf" : "test_new_view:pdf_1",
          "path" : "\/dev_final\/sites\/default\/files\/save_pdf_on_server\/[entityform:field-date]"
        }
      }
    ]
  }
}';
  
  $configs['save_pdf_on_server'] = entity_import('rules_config', $rule);
  return $configs;
}
?>