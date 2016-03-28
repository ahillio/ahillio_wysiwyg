<?php
/**
 * @file
 * ahillio_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ahillio_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Ace Editor.
  $formats['ace_editor'] = array(
    'format' => 'ace_editor',
    'name' => 'Ace Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => 100,
    'filters' => array(),
  );

  // Exported format: WYSIWYG.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
