<?php
/**
 * @file
 * perun_news.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function perun_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function perun_news_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function perun_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News post'),
      'base' => 'node_content',
      'description' => t('Short, usually time related content.'),
      'has_title' => '1',
      'title_label' => t('Naslov'),
      'help' => '',
    ),
  );
  return $items;
}
