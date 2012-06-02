<?php
/**
 * @file
 * drupalcon_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcon_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalcon_content_type_node_info() {
  $items = array(
    'drupalcon' => array(
      'name' => t('DrupalCon'),
      'base' => 'node_content',
      'description' => t('Information about DrupalCons, cities, number of attendees etc.'),
      'has_title' => '1',
      'title_label' => t('City'),
      'help' => '',
    ),
  );
  return $items;
}
