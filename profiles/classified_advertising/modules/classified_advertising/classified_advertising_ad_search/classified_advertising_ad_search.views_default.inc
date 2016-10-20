<?php
/**
 * @file
 * classified_advertising_ad_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function classified_advertising_ad_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ad_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ad_search';
  $view->human_name = 'ad_search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find Ads';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="jumbotron">
  <h1>No results found</h1>
  <p><a class="btn btn-primary btn-lg" href="/search/ad" role="button">Search in All categories</a></p>
</div>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ad_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ad_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_ad_category']['id'] = 'field_ad_category';
  $handler->display->display_options['filters']['field_ad_category']['table'] = 'search_api_index_ad_search';
  $handler->display->display_options['filters']['field_ad_category']['field'] = 'field_ad_category';
  $handler->display->display_options['filters']['field_ad_category']['value'] = array();
  $handler->display->display_options['filters']['field_ad_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_category']['expose']['operator_id'] = 'field_ad_category_op';
  $handler->display->display_options['filters']['field_ad_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_ad_category']['expose']['operator'] = 'field_ad_category_op';
  $handler->display->display_options['filters']['field_ad_category']['expose']['identifier'] = 'field_ad_category';
  $handler->display->display_options['filters']['field_ad_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ad_category']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_ad_category']['group_info']['label'] = 'Category';
  $handler->display->display_options['filters']['field_ad_category']['group_info']['identifier'] = 'field_ad_category';
  $handler->display->display_options['filters']['field_ad_category']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_ad_category']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'search_page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/ad';
  $export['ad_search'] = $view;

  return $export;
}
