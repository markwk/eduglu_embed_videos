<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_embed_videos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:embed_videos
  $menu_links['features:embed_videos'] = array(
    'menu_name' => 'features',
    'link_path' => 'embed_videos',
    'router_path' => 'embed_videos',
    'link_title' => 'Videos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videos');


  return $menu_links;
}
