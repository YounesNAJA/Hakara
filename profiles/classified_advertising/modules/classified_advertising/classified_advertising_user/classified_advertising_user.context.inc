<?php
/**
 * @file
 * classified_advertising_user.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function classified_advertising_user_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_ad_view';
  $context->description = 'User ads in profile page';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_based_ads-block' => array(
          'module' => 'views',
          'delta' => 'user_based_ads-block',
          'region' => 'content',
          'weight' => '15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User ads in profile page');
  t('user');
  $export['user_ad_view'] = $context;

  return $export;
}
