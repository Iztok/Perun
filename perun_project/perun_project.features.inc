<?php
/**
 * @file
 * perun_project.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function perun_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function perun_project_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function perun_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Content type used to present projects or references.'),
      'has_title' => '1',
      'title_label' => t('Naslov'),
      'help' => '',
    ),
  );
  return $items;
}
