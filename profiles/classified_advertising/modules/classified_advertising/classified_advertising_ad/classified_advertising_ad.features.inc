<?php
/**
 * @file
 * classified_advertising_ad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function classified_advertising_ad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function classified_advertising_ad_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function classified_advertising_ad_flag_default_flags() {
  $flags = array();
  // Exported flag: "Ad Abuse".
  $flags['ad_abuse'] = array(
    'entity_type' => 'node',
    'title' => 'Ad Abuse',
    'global' => 0,
    'types' => array(
      0 => 'classified',
    ),
    'flag_short' => 'Flag as offensive',
    'flag_long' => 'Flag this content as offensive.',
    'flag_message' => '',
    'unflag_short' => 'Flag as non-offensive',
    'unflag_long' => 'Flag this content as non-offensive.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'form',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'form_flagging_help' => '',
    'form_flagging_button' => '',
    'form_flagging_delete_button' => '',
    'form_unflagging_help' => '',
    'form_unflagging_button' => '',
    'form_unflag_link_leads_to_edit' => 0,
    'form_interaction' => 'flagging_dialog',
    'module' => 'classified_advertising_ad',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Node Favorite".
  $flags['node_favorite'] = array(
    'entity_type' => 'node',
    'title' => 'Node Favorite',
    'global' => 0,
    'types' => array(
      0 => 'classified',
    ),
    'flag_short' => 'Mark as Favorite',
    'flag_long' => 'Mark as Favorite',
    'flag_message' => '',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => 'Remove from favorites',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'classified_advertising_ad',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function classified_advertising_ad_image_default_styles() {
  $styles = array();

  // Exported image style: ad_galleryformatter_slide.
  $styles['ad_galleryformatter_slide'] = array(
    'label' => 'Ad Galleryformatter Slide',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 312,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      19 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 500,
            'height' => 312,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: ad_galleryformatter_thumb.
  $styles['ad_galleryformatter_thumb'] = array(
    'label' => 'Ad Galleryformatter Thumb',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 121,
          'height' => 75,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      17 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 121,
            'height' => 75,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: ad_thumbnail.
  $styles['ad_thumbnail'] = array(
    'label' => 'Ad Thumbnail',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 144,
          'height' => 108,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      15 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 144,
            'height' => 108,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function classified_advertising_ad_node_info() {
  $items = array(
    'classified' => array(
      'name' => t('Classified'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Ad Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
