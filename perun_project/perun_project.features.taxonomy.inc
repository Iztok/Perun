<?php
/**
 * @file
 * perun_project.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function perun_project_taxonomy_default_vocabularies() {
  return array(
    'project_type' => array(
      'name' => 'Project type',
      'machine_name' => 'project_type',
      'description' => 'Project type.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
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
