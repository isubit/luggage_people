<?php
/**
 * @file
 * people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_people_category',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_people_image']['element_wrapper_class'] = 'people-image';
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'file',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_people_email']['id'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['table'] = 'field_data_field_people_email';
  $handler->display->display_options['fields']['field_people_email']['field'] = 'field_people_email';
  $handler->display->display_options['fields']['field_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_people_email']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_people_website']['id'] = 'field_people_website';
  $handler->display->display_options['fields']['field_people_website']['table'] = 'field_data_field_people_website';
  $handler->display->display_options['fields']['field_people_website']['field'] = 'field_people_website';
  $handler->display->display_options['fields']['field_people_website']['label'] = '';
  $handler->display->display_options['fields']['field_people_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_website']['click_sort_column'] = 'url';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_people_category']['id'] = 'field_people_category';
  $handler->display->display_options['fields']['field_people_category']['table'] = 'field_data_field_people_category';
  $handler->display->display_options['fields']['field_people_category']['field'] = 'field_people_category';
  $handler->display->display_options['fields']['field_people_category']['label'] = '';
  $handler->display->display_options['fields']['field_people_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_category']['delta_offset'] = '0';
  /* Field: Content: Position(s) */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_position']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_people_title']['id'] = 'field_people_title';
  $handler->display->display_options['fields']['field_people_title']['table'] = 'field_data_field_people_title';
  $handler->display->display_options['fields']['field_people_title']['field'] = 'field_people_title';
  $handler->display->display_options['fields']['field_people_title']['label'] = '';
  $handler->display->display_options['fields']['field_people_title']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['people'] = $view;

  return $export;
}