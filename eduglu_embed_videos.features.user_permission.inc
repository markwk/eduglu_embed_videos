<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_embed_videos_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_embed_video
  $permissions['edit field_embed_video'] = array(
    'name' => 'edit field_embed_video',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_embed_video
  $permissions['view field_embed_video'] = array(
    'name' => 'view field_embed_video',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
