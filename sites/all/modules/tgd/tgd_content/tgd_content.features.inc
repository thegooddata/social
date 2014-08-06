<?php
/**
 * @file
 * tgd_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tgd_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function tgd_content_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_discussion_post-field_oa_media'])) {
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-oa_event-field_oa_media'])) {
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_event-field_oa_media']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-field_oa_media'])) {
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-oa_other_spaces_ref'])) {
    unset($data['node-oa_wiki_page-oa_other_spaces_ref']);
  }
  if (isset($data['node-oa_wiki_page-og_group_ref'])) {
    $data['node-oa_wiki_page-og_group_ref']['settings'] = array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ); /* WAS: '' */
    $data['node-oa_wiki_page-og_group_ref']['view modes'] = array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['node-oa_wiki_page-og_vocabulary'])) {
    $data['node-oa_wiki_page-og_vocabulary']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['default']['settings']['concatenate'] = 1; /* WAS: FALSE */
    unset($data['node-oa_wiki_page-og_vocabulary']['display']['teaser']['settings']);
  }
  if (isset($data['node-oa_worktracker_task-field_oa_media'])) {
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_worktracker_assigned_to'])) {
    $data['node-oa_worktracker_task-field_oa_worktracker_assigned_to']['widget']['weight'] = 2; /* WAS: 7 */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_worktracker_duedate'])) {
    $data['node-oa_worktracker_task-field_oa_worktracker_duedate']['widget']['settings']['display_all_day'] = 1; /* WAS: 0 */
    $data['node-oa_worktracker_task-field_oa_worktracker_duedate']['widget']['weight'] = 6; /* WAS: 20 */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_worktracker_priority'])) {
    $data['node-oa_worktracker_task-field_oa_worktracker_priority']['widget']['weight'] = 4; /* WAS: 10 */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_worktracker_task_status'])) {
    $data['node-oa_worktracker_task-field_oa_worktracker_task_status']['widget']['weight'] = 3; /* WAS: 9 */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_worktracker_task_type'])) {
    $data['node-oa_worktracker_task-field_oa_worktracker_task_type']['widget']['weight'] = 5; /* WAS: 11 */
  }
  if (isset($data['node-oa_worktracker_task-oa_section_ref'])) {
    $data['node-oa_worktracker_task-oa_section_ref']['widget']['weight'] = 1; /* WAS: 6 */
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function tgd_content_file_default_displays_alter(&$data) {
  if (isset($data['document__preview__file_field_file_default'])) {
    $data['document__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['video__default__media_vimeo_image'])) {
    $data['video__default__media_vimeo_image']->settings['image_style'] = 'panopoly_image_video'; /* WAS: 'large' */
    $data['video__default__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol'] = '//'; /* WAS: '' */
    $data['video__default__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_vimeo_image'])) {
    $data['video__media_large__media_vimeo_image']->settings = array(
      'image_style' => 'large',
    ); /* WAS: '' */
    $data['video__media_large__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_vimeo_video'])) {
    $data['video__media_large__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_vimeo_image'])) {
    $data['video__media_original__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_vimeo_video'])) {
    $data['video__media_original__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_preview__media_vimeo_image'])) {
    $data['video__media_preview__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings = array(
      'image_style' => 'panopoly_image_thumbnail',
    ); /* WAS: '' */
    $data['video__preview__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_vimeo_image'])) {
    $data['video__teaser__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_vimeo_video'])) {
    $data['video__teaser__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function tgd_content_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function tgd_content_strongarm_alter(&$data) {
  if (isset($data['comment_oa_wiki_page'])) {
    $data['comment_oa_wiki_page']->value = 2; /* WAS: 0 */
  }
  if (isset($data['node_options_oa_worktracker_task'])) {
    unset($data['node_options_oa_worktracker_task']->value['1']);
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function tgd_content_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'tgd_content',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}