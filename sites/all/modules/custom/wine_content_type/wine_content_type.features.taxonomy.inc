<?php
/**
 * @file
 * wine_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wine_content_type_taxonomy_default_vocabularies() {
  return array(
    'migrate_example_wine_best_with' => array(
      'name' => 'Migrate Example Wine Best With',
      'machine_name' => 'migrate_example_wine_best_with',
      'description' => 'Foods the wine goes best with',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'migrate_example_wine_regions' => array(
      'name' => 'Migrate Example Wine Regions',
      'machine_name' => 'migrate_example_wine_regions',
      'description' => 'Wine regions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'migrate_example_wine_varieties' => array(
      'name' => 'Migrate Example Wine Varieties',
      'machine_name' => 'migrate_example_wine_varieties',
      'description' => 'Wine varieties',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
