<?php
/**
 * @file
 * luggage_people_solr.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function luggage_people_solr_field_default_field_instances_alter(&$data) {
  if (isset($data['node-people-field_category'])) {
    $data['node-people-field_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-people-field_category']['display']['full']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_category']['display']['full']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-people-field_category']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_category']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-people-field_category']['display']['search_result'] = array(
      'label' => 'inline',
      'module' => 'taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_term_reference_link',
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['node-people-field_category']['display']['search_index']['settings']);
  }
  if (isset($data['node-people-field_people_category'])) {
    $data['node-people-field_people_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_people_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-people-field_people_category']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_people_category']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-people-field_people_category']['display']['teaser']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_people_category']['display']['teaser']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-people-field_people_category']['display']['search_index']['settings']);
  }
  if (isset($data['node-people-field_tags'])) {
    $data['node-people-field_tags']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-people-field_tags']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-people-field_tags']['display']['search_index']['settings']);
  }
}
