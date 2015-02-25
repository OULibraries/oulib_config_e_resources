<?php
/**
 * @file
 * oulib_config_e_resources.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function oulib_config_e_resources_taxonomy_default_vocabularies() {
  return array(
    'architecture' => array(
      'name' => 'Subjects',
      'machine_name' => 'architecture',
      'description' => 'Resources by Subject',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
