<?php

/**
 * @file
 * lullablog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lullablog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer lullablog status'.
  $permissions['administer lullablog status'] = array(
    'name' => 'administer lullablog status',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'lullablog',
  );

  // Exported permission: 'create lullablog content'.
  $permissions['create lullablog content'] = array(
    'name' => 'create lullablog content',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lullablog content'.
  $permissions['delete any lullablog content'] = array(
    'name' => 'delete any lullablog content',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lullablog content'.
  $permissions['delete own lullablog content'] = array(
    'name' => 'delete own lullablog content',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lullablog content'.
  $permissions['edit any lullablog content'] = array(
    'name' => 'edit any lullablog content',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lullablog content'.
  $permissions['edit own lullablog content'] = array(
    'name' => 'edit own lullablog content',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Lullablogger' => 'Lullablogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
