<?php
/**
 * @file
 * classified_advertising_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function classified_advertising_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
