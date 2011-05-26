<?php
/**
 * @file
 * perun_contentblock.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function perun_contentblock_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function perun_contentblock_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function perun_contentblock_node_info() {
  $items = array(
    'content_block' => array(
      'name' => t('Content block'),
      'base' => 'node_content',
      'description' => t('Content displayed in a block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
