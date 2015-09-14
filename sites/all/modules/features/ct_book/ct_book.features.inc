<?php
/**
 * @file
 * ct_book.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ct_book_image_default_styles() {
  $styles = array();

  // Exported image style: book_couverture.
  $styles['book_couverture'] = array(
    'label' => 'Couverture',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ct_book_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Livre'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
