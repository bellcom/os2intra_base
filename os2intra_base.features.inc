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
    'regions' => 2,
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
      'os2intra_birthday_block_block' => 
      array (
        'module' => 'os2intra_birthday_block',
        'delta' => 'block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Fødselsdage',
        'weight' => -31,
      ),
      'views_os2intra_users_search-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_users_search-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Brugere',
        'weight' => -30,
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
        'weight' => -29,
      ),
      'views_os2intra_user_groups-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_user_groups-block_1',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Dine Grupper',
        'weight' => -28,
      ),
      'views_os2intra_users_content-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_users_content-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Indlæg du har oprettet.',
        'weight' => -28,
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
        'title' => 'Begivenheder',
        'weight' => -27,
      ),
      'views_os2intra_canteen_menu-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_canteen_menu-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Dagens ret',
        'weight' => -22,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
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
    'regions' => 2,
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
      'views_os2intra_group_members-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_group_members-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Gruppens medlemmere',
        'weight' => -31,
      ),
      'views_13f4c793db1c934a1e6735527564e620' => 
      array (
        'module' => 'views',
        'delta' => '13f4c793db1c934a1e6735527564e620',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Begivenheder',
        'weight' => -27,
      ),
      'commons_utility_links_commons_utility_links' => 
      array (
        'module' => 'commons_utility_links',
        'delta' => 'commons_utility_links',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Links',
        'weight' => -19,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
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
