<?php

/**
 * @file
 * lullablog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lullablog_user_default_roles() {
  $roles = array();

  // Exported role: Lullablogger.
  $roles['Lullablogger'] = array(
    'name' => 'Lullablogger',
    'weight' => 4,
  );

  return $roles;
}
