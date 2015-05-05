<?php
/**
 * @file
 * nucivic_data_dashboard.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nucivic_data_dashboard_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-command-center-menu_content:admin/content
  $menu_links['menu-command-center-menu_content:admin/content'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-command-center-menu_content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-command-center-menu_groups:groups
  $menu_links['menu-command-center-menu_groups:groups'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-command-center-menu_groups:groups',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-command-center-menu_profile-settings:menutoken/5547e8fd0c1a4
  $menu_links['menu-command-center-menu_profile-settings:menutoken/5547e8fd0c1a4'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'menutoken/5547e8fd0c1a4',
    'router_path' => 'menutoken/%',
    'link_title' => 'Profile Settings',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-command-center-menu_profile-settings:menutoken/5547e8fd0c1a4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-command-center-menu_profile:user
  $menu_links['menu-command-center-menu_profile:user'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-command-center-menu_profile:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-command-center-menu_site-preferences:admin/config/system/site-information
  $menu_links['menu-command-center-menu_site-preferences:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site Preferences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-command-center-menu_site-preferences:admin/config/system/site-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-command-center-menu_visualizations:admin/structure/entity-type/visualization
  $menu_links['menu-command-center-menu_visualizations:admin/structure/entity-type/visualization'] = array(
    'menu_name' => 'menu-command-center-menu',
    'link_path' => 'admin/structure/entity-type/visualization',
    'router_path' => 'admin/structure/entity-type/visualization',
    'link_title' => 'Visualizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-command-center-menu_visualizations:admin/structure/entity-type/visualization',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Groups');
  t('Profile');
  t('Profile Settings');
  t('Site Preferences');
  t('Visualizations');


  return $menu_links;
}
