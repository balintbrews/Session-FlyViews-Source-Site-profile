<?php
/**
 * @file
 * drupalcon_rest_server.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcon_rest_server_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
