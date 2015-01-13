<?php
/**
 * @file
 * proba_blog.features.inc
 */

/**
 * Implements hook_node_info().
 */
function proba_blog_node_info() {
  $items = array(
    'blogbejegyzes' => array(
      'name' => t('Blogbejegyzés'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
