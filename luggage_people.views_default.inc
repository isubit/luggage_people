<?php
/**
 * @file
 * luggage_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'people';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['css_class'] = 'profile-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_people_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'people_category' => 'people_category',
    'keywords' => 0,
    'tags' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'profile-title h2';
  /* Field: Content: Position(s) */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['delta_offset'] = '0';
  /* Field: Content: Biography */
  $handler->display->display_options['fields']['field_people_bio']['id'] = 'field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['table'] = 'field_data_field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['field'] = 'field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['label'] = '';
  $handler->display->display_options['fields']['field_people_bio']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_people_bio']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_people_bio']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_people_bio']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_people_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_bio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_people_bio']['element_wrapper_class'] = 'profile-about';
  $handler->display->display_options['fields']['field_people_bio']['type'] = 'text_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_people_email']['id'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['table'] = 'field_data_field_people_email';
  $handler->display->display_options['fields']['field_people_email']['field'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_email']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_people_email']['hide_empty'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_people_website']['id'] = 'field_people_website';
  $handler->display->display_options['fields']['field_people_website']['table'] = 'field_data_field_people_website';
  $handler->display->display_options['fields']['field_people_website']['field'] = 'field_people_website';
  $handler->display->display_options['fields']['field_people_website']['label'] = 'Web Links';
  $handler->display->display_options['fields']['field_people_website']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_people_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_website']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_people_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_people_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_people_website']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_people_website']['delta_offset'] = '0';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'people_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_people_category']['id'] = 'field_people_category';
  $handler->display->display_options['fields']['field_people_category']['table'] = 'field_data_field_people_category';
  $handler->display->display_options['fields']['field_people_category']['field'] = 'field_people_category';
  $handler->display->display_options['fields']['field_people_category']['label'] = '';
  $handler->display->display_options['fields']['field_people_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_people_category']['element_wrapper_class'] = 'profile-category';
  $handler->display->display_options['fields']['field_people_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_people_category']['delta_offset'] = '0';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Last Name (field_people_last_name) */
  $handler->display->display_options['sorts']['field_people_last_name_value']['id'] = 'field_people_last_name_value';
  $handler->display->display_options['sorts']['field_people_last_name_value']['table'] = 'field_data_field_people_last_name';
  $handler->display->display_options['sorts']['field_people_last_name_value']['field'] = 'field_people_last_name_value';
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
    'people' => 'people',
  );

  /* Display: People */
  $handler = $view->new_display('page', 'People', 'people');
  $handler->display->display_options['display_description'] = 'default';
  $handler->display->display_options['path'] = 'people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['people'] = $view;

  return $export;
}
