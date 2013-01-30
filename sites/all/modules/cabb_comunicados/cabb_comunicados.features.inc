<?php
/**
 * @file
 * cabb_comunicados.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cabb_comunicados_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cabb_comunicados_node_info() {
  $items = array(
    'comunicado' => array(
      'name' => t('Comunicado'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
