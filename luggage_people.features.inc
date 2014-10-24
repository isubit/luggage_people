<?php
/**
 * @file
 * luggage_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function luggage_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function luggage_people_image_default_styles() {
  $styles = array();

  // Exported image style: people_full.
  $styles['people_full'] = array(
    'name' => 'people_full',
    'label' => 'People Full',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: people_thumb.
  $styles['people_thumb'] = array(
    'name' => 'people_thumb',
    'label' => 'People Thumb',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function luggage_people_node_info() {
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
  drupal_alter('node_info', $items);
  return $items;
}
