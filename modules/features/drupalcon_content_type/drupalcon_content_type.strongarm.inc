<?php
/**
 * @file
 * drupalcon_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcon_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_drupalcon';
  $strongarm->value = FALSE;
  $export['node_submitted_drupalcon'] = $strongarm;

  return $export;
}
