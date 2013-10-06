<?php
/**
 * @file
 * people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 *
 * Enabling using templates inside module
 */
function people_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => '3.0',
    'path' => drupal_get_path('module', 'people'),
    'template path' => drupal_get_path('module', 'people') . '/templates',
  );
}

/**
 * Implements hook_node_info().
 */
function people_node_info() {
  $items = array(
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('People profiles'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
