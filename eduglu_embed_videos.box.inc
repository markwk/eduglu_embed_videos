<?php

/**
 * Implementation of hook_default_box().
 */
function eduglu_embed_videos_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'videos_help';
  $box->plugin_key = 'simple';
  $box->title = 'Videos Help';
  $box->description = 'Embedded Videos Help';
  $box->options = array(
    'body' => '<p>The videos section lets you add videos from external websites. Currently, the following websites are supported: YouKu &amp; TuDou.</p><p>If you want other sites to be added, please <a href="http://language-corner.org/support">request the sites you want added here</a>.</p>',
    'format' => '3',
  );

  $export['videos_help'] = $box;
  return $export;
}
