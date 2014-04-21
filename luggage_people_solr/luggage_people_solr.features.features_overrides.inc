<?php
/**
 * @file
 * luggage_people_solr.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function luggage_people_solr_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-people-field_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|full|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|full|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|search_index|settings"]["DELETED"] = TRUE;
  $overrides["field_instance.node-people-field_category.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_category.display|search_result"] = array(
    'label' => 'inline',
    'module' => 'taxonomy',
    'settings' => array(),
    'type' => 'taxonomy_term_reference_link',
    'weight' => 0,
  );
  $overrides["field_instance.node-people-field_people_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_people_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_people_category.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_people_category.display|search_index|settings"]["DELETED"] = TRUE;
  $overrides["field_instance.node-people-field_people_category.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_people_category.display|teaser|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_people_category.display|teaser|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_tags.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-people-field_tags.display|search_index|settings"]["DELETED"] = TRUE;
  $overrides["field_instance.node-people-field_tags.display|search_index|type"] = 'taxonomy_to_apachesolr_link';

 return $overrides;
}
