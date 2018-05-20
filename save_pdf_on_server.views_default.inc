<?php

function save_pdf_on_server_views_default_views() {

$view = new view();
$view->name = 'save_pdf_on_server';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'entityform';
$view->human_name = 'save_pdf_on_server';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'save_pdf_on_server';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Återställ';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['tags']['first'] = '« första';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ föregående';
$handler->display->display_options['pager']['options']['tags']['next'] = 'nästa ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'sista »';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Fält: Entityform Submission: Summary Details */
$handler->display->display_options['fields']['field_summary_details']['id'] = 'field_summary_details';
$handler->display->display_options['fields']['field_summary_details']['table'] = 'field_data_field_summary_details';
$handler->display->display_options['fields']['field_summary_details']['field'] = 'field_summary_details';
/* Fält: Entityform Submission: Date submitted */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'entityform';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
/* Sort criterion: Entityform Submission: Date submitted */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'entityform';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Entityform Submission: Entityform Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'entityform';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'summary' => 'summary',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'reports-for-journal';

/* Display: PDF Page */
$handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'pdf_unformatted';
$handler->display->display_options['row_plugin'] = 'pdf_fields';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Fält: Entityform Submission: Summary Details */
$handler->display->display_options['fields']['field_summary_details']['id'] = 'field_summary_details';
$handler->display->display_options['fields']['field_summary_details']['table'] = 'field_data_field_summary_details';
$handler->display->display_options['fields']['field_summary_details']['field'] = 'field_summary_details';
/* Fält: Entityform Submission: journal filtered result */
$handler->display->display_options['fields']['field_journal_filtered_result']['id'] = 'field_journal_filtered_result';
$handler->display->display_options['fields']['field_journal_filtered_result']['table'] = 'field_data_field_journal_filtered_result';
$handler->display->display_options['fields']['field_journal_filtered_result']['field'] = 'field_journal_filtered_result';
$handler->display->display_options['fields']['field_journal_filtered_result']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_journal_filtered_result']['type'] = 'field_hidden_text_plain';
/* Fält: Entityform Submission: Journal Summary Results */
$handler->display->display_options['fields']['field_journal_summary_results']['id'] = 'field_journal_summary_results';
$handler->display->display_options['fields']['field_journal_summary_results']['table'] = 'field_data_field_journal_summary_results';
$handler->display->display_options['fields']['field_journal_summary_results']['field'] = 'field_journal_summary_results';
$handler->display->display_options['fields']['field_journal_summary_results']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_journal_summary_results']['alter']['text'] = '[field_journal_summary_results] ';
$handler->display->display_options['fields']['field_journal_summary_results']['alter']['nl2br'] = TRUE;
$handler->display->display_options['fields']['field_journal_summary_results']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['path'] = 'save_pdf_on_server';
$translatables['save_pdf_on_server'] = array(
  t('Master'),
  t('save_pdf_on_server'),
  t('more'),
  t('Apply'),
  t('Återställ'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« första'),
  t('‹ föregående'),
  t('nästa ›'),
  t('sista »'),
  t('Summary Details'),
  t('Date submitted'),
  t('Page'),
  t('PDF Page'),
  t('journal filtered result'),
  t('Journal Summary Results'),
  t('[field_journal_summary_results] '),
);



// (Export ends here.)

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.

  // At the end, return array of default views.
  return $views;

}

?>