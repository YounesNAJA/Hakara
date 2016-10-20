<?php
/**
 * @file
 * classified_advertising_ad.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function classified_advertising_ad_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create classified content'.
  $permissions['create classified content'] = array(
    'name' => 'create classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own classified content'.
  $permissions['edit own classified content'] = array(
    'name' => 'edit own classified content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag ad_abuse'.
  $permissions['flag ad_abuse'] = array(
    'name' => 'flag ad_abuse',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag node_favorite'.
  $permissions['flag node_favorite'] = array(
    'name' => 'flag node_favorite',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: 'unflag ad_abuse'.
  $permissions['unflag ad_abuse'] = array(
    'name' => 'unflag ad_abuse',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag node_favorite'.
  $permissions['unflag node_favorite'] = array(
    'name' => 'unflag node_favorite',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
