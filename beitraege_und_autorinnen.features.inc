<?php
/**
 * @file
 * beitraege_und_autorinnen.features.inc
 */

/**
 * Implements hook_views_api().
 */
function beitraege_und_autorinnen_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beitraege_und_autorinnen_node_info() {
  $items = array(
    'autor_in' => array(
      'name' => t('Autor_in'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'beitrag' => array(
      'name' => t('Beitrag'),
      'base' => 'node_content',
      'description' => t('Artikel, Abstract, ...'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'material' => array(
      'name' => t('Material'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'materialsammlung' => array(
      'name' => t('Materialsammlung'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
