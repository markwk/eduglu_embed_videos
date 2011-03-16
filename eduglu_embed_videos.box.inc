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
  $box->title = 'Videos:';
  $box->description = 'Embedded Videos Help';
  $box->options = array(
    'body' => '<p>This video section is specifically configured for video website in China and lets you add videos from: <a href="http://www.youku.com/">YouKu</a> &amp; <a href="http://www.tudou.com">TuDou</a>.</p>',
    'format' => '3',
  );

  $export['videos_help'] = $box;
  return $export;
}
