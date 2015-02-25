<?php
/**
 * @file
 * oulib_config_e_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oulib_config_e_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oulib_config_e_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function oulib_config_e_resources_flag_default_flags() {
  $flags = array();
  // Exported flag: "My Library".
  $flags['my_library'] = array(
    'entity_type' => 'node',
    'title' => 'My Library',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add to My Library',
    'flag_long' => 'To access My Library visit libraries.ou.edu/mylibrary',
    'flag_message' => '',
    'unflag_short' => 'Remove',
    'unflag_long' => 'To access My Library visit libraries.ou.edu/mylibrary',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'ical' => 0,
      'single_event' => 0,
      'frontpage' => 0,
      'locations_index' => 0,
      'location_single' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'oulib_config_e_resources',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function oulib_config_e_resources_node_info() {
  $items = array(
    'databases' => array(
      'name' => t('Databases'),
      'base' => 'node_content',
      'description' => t('Use <i>databases</i> to add a new database to the site.'),
      'has_title' => '1',
      'title_label' => t('Database Name'),
      'help' => '',
    ),
    'ereference' => array(
      'name' => t('E-Reference'),
      'base' => 'node_content',
      'description' => t('Use <i>e-reference</i> to add a new e-reference resource to the site.'),
      'has_title' => '1',
      'title_label' => t('E-Reference Title'),
      'help' => '',
    ),
    'guides' => array(
      'name' => t('Research Guides'),
      'base' => 'node_content',
      'description' => t('Use <i>research guide</i> to add a new libguide to the site.'),
      'has_title' => '1',
      'title_label' => t('Research Guide Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
