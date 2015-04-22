<?php
/**
 * @file
 * luggage_people_authors.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function luggage_people_authors_taxonomy_default_vocabularies() {
  return array(
    'authors' => array(
      'name' => 'Authors',
      'machine_name' => 'authors',
      'description' => 'A vocabulary for authors.',
      'hierarchy' => 0,
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
