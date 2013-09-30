<?php
/**
 * @file
 * os2intra_base.features.inc
 */

/**
 * Implements hook_views_api().
 */
function os2intra_base_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function os2intra_base_homebox() {
  $homeboxes = array();

  $homeboxes['os2intra_homebox_front'] = array (
    'regions' => 4,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#ffffff',
      1 => '#ffffff',
      2 => '#ffffff',
      3 => '#ffffff',
      4 => '#ffffff',
      5 => '#ffffff',
    ),
    'blocks' => 
    array (
      'shortcut_shortcuts' => 
      array (
        'module' => 'shortcut',
        'delta' => 'shortcuts',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'user_online' => 
      array (
        'module' => 'user',
        'delta' => 'online',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'user_new' => 
      array (
        'module' => 'user',
        'delta' => 'new',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'node_recent' => 
      array (
        'module' => 'node',
        'delta' => 'recent',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'views_7732143edc5e5a96528c9ad88958a764' => 
      array (
        'module' => 'views',
        'delta' => '7732143edc5e5a96528c9ad88958a764',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -26,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
      3 => 50,
      4 => 50,
    ),
    'title' => 'Din forside',
    'path' => 'front',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );

  $homeboxes['os2intra_homebox_group'] = array (
    'regions' => 4,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#ffffff',
      1 => '#ffffff',
      2 => '#ffffff',
      3 => '#ffffff',
      4 => '#ffffff',
      5 => '#ffffff',
    ),
    'blocks' => 
    array (
      'commons_utility_links_commons_utility_links' => 
      array (
        'module' => 'commons_utility_links',
        'delta' => 'commons_utility_links',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -19,
      ),
      'user_online' => 
      array (
        'module' => 'user',
        'delta' => 'online',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -19,
      ),
      'views_9e669ba41e5460dbfef4caed8d3efc37' => 
      array (
        'module' => 'views',
        'delta' => '9e669ba41e5460dbfef4caed8d3efc37',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -26,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
      3 => 50,
      4 => 50,
    ),
    'title' => 'Din gruppe',
    'path' => 'dingruppe',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
