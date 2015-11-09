<?php
/**
 * @file
 * ahillio_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ahillio_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ace_editor_default_syntax';
  $strongarm->value = 'html';
  $export['ace_editor_default_syntax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ace_editor_filter_formats';
  $strongarm->value = array(
    'ace_editor' => 'ace_editor',
  );
  $export['ace_editor_filter_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ace_editor_fontsize';
  $strongarm->value = '10pt';
  $export['ace_editor_fontsize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ace_editor_printmargin';
  $strongarm->value = 0;
  $export['ace_editor_printmargin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ace_editor_theme';
  $strongarm->value = 'clouds';
  $export['ace_editor_theme'] = $strongarm;

  return $export;
}
