<?php
/**
 * @file
 * drupalcon_content_type.features.inc
 */

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
