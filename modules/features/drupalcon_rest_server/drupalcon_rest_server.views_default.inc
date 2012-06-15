<?php
/**
 * @file
 * drupalcon_rest_server.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalcon_rest_server_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'drupalcon_api';
  $view->description = 'Outputs DrupalCon information in JSON format. This is our REST server.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DrupalCon API';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'city';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country']['field_api_classes'] = 0;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'year';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_month']['id'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['table'] = 'field_data_field_month';
  $handler->display->display_options['fields']['field_month']['field'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['label'] = 'month';
  $handler->display->display_options['fields']['field_month']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_month']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_month']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_month']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_month']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_month']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_month']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_month']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_month']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_month']['field_api_classes'] = 0;
  /* Field: Content: Attendees */
  $handler->display->display_options['fields']['field_attendees']['id'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['table'] = 'field_data_field_attendees';
  $handler->display->display_options['fields']['field_attendees']['field'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['label'] = 'attendees';
  $handler->display->display_options['fields']['field_attendees']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attendees']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attendees']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attendees']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_attendees']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attendees']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attendees']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attendees']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_attendees']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_attendees']['field_api_classes'] = 0;
  /* Field: Content: About the city */
  $handler->display->display_options['fields']['field_about_the_city']['id'] = 'field_about_the_city';
  $handler->display->display_options['fields']['field_about_the_city']['table'] = 'field_data_field_about_the_city';
  $handler->display->display_options['fields']['field_about_the_city']['field'] = 'field_about_the_city';
  $handler->display->display_options['fields']['field_about_the_city']['label'] = 'about_the_city';
  $handler->display->display_options['fields']['field_about_the_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_about_the_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_about_the_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_about_the_city']['field_api_classes'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = 'photo';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo']['field_api_classes'] = 0;
  /* Field: Content: Photo credit */
  $handler->display->display_options['fields']['field_photo_credit']['id'] = 'field_photo_credit';
  $handler->display->display_options['fields']['field_photo_credit']['table'] = 'field_data_field_photo_credit';
  $handler->display->display_options['fields']['field_photo_credit']['field'] = 'field_photo_credit';
  $handler->display->display_options['fields']['field_photo_credit']['label'] = 'photo_credit';
  $handler->display->display_options['fields']['field_photo_credit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_photo_credit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo_credit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_photo_credit']['field_api_classes'] = 0;
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_year_value']['expose']['label'] = 'Year';
  /* Sort criterion: Content: Month (field_month) */
  $handler->display->display_options['sorts']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['sorts']['field_month_value']['field'] = 'field_month_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'drupalcon' => 'drupalcon',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'drupalcon' => 'drupalcon',
  );
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['value'] = array(
    'all' => 'all',
    2005 => '2005',
    2006 => '2006',
    2007 => '2007',
    2008 => '2008',
    2009 => '2009',
    2010 => '2010',
    2011 => '2011',
    2012 => '2012',
    2013 => '2013',
  );
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_year_value']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Attendees (field_attendees) */
  $handler->display->display_options['filters']['field_attendees_value']['id'] = 'field_attendees_value';
  $handler->display->display_options['filters']['field_attendees_value']['table'] = 'field_data_field_attendees';
  $handler->display->display_options['filters']['field_attendees_value']['field'] = 'field_attendees_value';
  $handler->display->display_options['filters']['field_attendees_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attendees_value']['expose']['operator_id'] = 'attendees_op';
  $handler->display->display_options['filters']['field_attendees_value']['expose']['label'] = 'Attendees';
  $handler->display->display_options['filters']['field_attendees_value']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_attendees_value']['expose']['operator'] = 'field_attendees_value_op';
  $handler->display->display_options['filters']['field_attendees_value']['expose']['identifier'] = 'attendees';
  $handler->display->display_options['filters']['field_attendees_value']['expose']['multiple'] = FALSE;

  /* Display: Test Page */
  $handler = $view->new_display('page', 'Test Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country' => 'title',
    'field_year' => 'field_year',
    'field_attendees' => 'field_attendees',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attendees' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Location';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country']['field_api_classes'] = 0;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Field: Content: Attendees */
  $handler->display->display_options['fields']['field_attendees']['id'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['table'] = 'field_data_field_attendees';
  $handler->display->display_options['fields']['field_attendees']['field'] = 'field_attendees';
  $handler->display->display_options['fields']['field_attendees']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attendees']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attendees']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attendees']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attendees']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_attendees']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attendees']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attendees']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attendees']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_attendees']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_attendees']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'api-test/drupalcon';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'API Test';
  $handler->display->display_options['menu']['description'] = 'Testing the API.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'drupalcons';
  $handler->display->display_options['style_options']['top_child_object'] = 'drupalcon';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'api/drupalcon';

  /* Display: JSON single item */
  $handler = $view->new_display('page', 'JSON single item', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'drupalcons';
  $handler->display->display_options['style_options']['top_child_object'] = 'drupalcon';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'api/drupalcon/%';
  $export['drupalcon_api'] = $view;

  return $export;
}
