<?php

/**
 * @file
 * lullablog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lullablog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lullablog_node_info() {
  $items = array(
    'lullablog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Blog is a made up word that is both a verb and a noun. Tread carefully. It\'s almost as ambiguous as the word \'Feature\' in the context of Drupal. Oops, and I just said \'Context\' which also is loaded.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
