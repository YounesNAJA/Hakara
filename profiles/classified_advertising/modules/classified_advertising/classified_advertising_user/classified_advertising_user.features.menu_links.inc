<?php
/**
 * @file
 * classified_advertising_user.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function classified_advertising_user_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_my-favorites:favorites.
  $menu_links['user-menu_my-favorites:favorites'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'favorites',
    'router_path' => 'favorites',
    'link_title' => 'My Favorites',
    'options' => array(
      'identifier' => 'user-menu_my-favorites:favorites',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_submit-a-free-ad:node/add/classified.
  $menu_links['user-menu_submit-a-free-ad:node/add/classified'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/classified',
    'router_path' => 'node/add/classified',
    'link_title' => 'Submit a Free Ad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_submit-a-free-ad:node/add/classified',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My Favorites');
  t('Submit a Free Ad');
  t('User account');

  return $menu_links;
}
