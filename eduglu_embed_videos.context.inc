<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_embed_videos_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'embed_videos_context';
  $context->description = '';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'embed_videos' => 'embed_videos',
      ),
    ),
    'views' => array(
      'values' => array(
        'embed_videos' => 'embed_videos',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-videos_help' => array(
          'module' => 'boxes',
          'delta' => 'videos_help',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-embed_videos-block_1' => array(
          'module' => 'views',
          'delta' => 'embed_videos-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['embed_videos_context'] = $context;
  return $export;
}
