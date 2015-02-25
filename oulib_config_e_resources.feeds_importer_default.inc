<?php
/**
 * @file
 * oulib_config_e_resources.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function oulib_config_e_resources_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bulk_database_import';
  $feeds_importer->config = array(
    'name' => 'Bulk Database Import',
    'description' => 'Import all Bulk Databases',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '5',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'TITLE',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'TITLE',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URL',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'COVERAGE',
            'target' => 'field_coverage',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'PUBLIC_NOTES',
            'target' => 'field_info',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'TAXONOMY',
            'target' => 'field_ereferece',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'databases',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bulk_database_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bulk_e_reference_import';
  $feeds_importer->config = array(
    'name' => 'Bulk E-Reference Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '5',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'TITLE',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'TITLE',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URL',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'COVERAGE',
            'target' => 'field_coverage',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'PUBLIC',
            'target' => 'field_info',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ereference',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bulk_e_reference_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bulk_import_libguides';
  $feeds_importer->config = array(
    'name' => 'Bulk Import Libguides',
    'description' => 'Import changes to libguides in bulk',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '5',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'NAME',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'NAME',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URL',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'TAXONOMY',
            'target' => 'field_subjects',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'MOREINFO',
            'target' => 'field_info',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 1,
        'bundle' => 'guides',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bulk_import_libguides'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'database_subjects';
  $feeds_importer->config = array(
    'name' => 'Database Subjects',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'TITLE',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'TITLE',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URL',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'COVERAGE',
            'target' => 'field_coverage',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'PUBLIC_NOTES',
            'target' => 'field_info',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'TAX1',
            'target' => 'field_subjects',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'TAX2',
            'target' => 'field_subjects',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'TAX3',
            'target' => 'field_subjects',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          9 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'eresource',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['database_subjects'] = $feeds_importer;

  return $export;
}
