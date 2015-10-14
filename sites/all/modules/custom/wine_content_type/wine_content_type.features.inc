<?php
/**
 * @file
 * wine_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wine_content_type_node_info() {
  $items = array(
    'migrate_example_wine' => array(
      'name' => t('Wine'),
      'base' => 'node_content',
      'description' => t('Wine is what we drink a lot.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
