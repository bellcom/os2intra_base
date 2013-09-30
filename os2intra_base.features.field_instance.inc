<?php
/**
 * @file
 * os2intra_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2intra_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_os2intra_grouptype'
  $field_instances['node-group-field_os2intra_grouptype'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'tid' => 5,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'node',
    'field_name' => 'field_os2intra_grouptype',
    'label' => 'Gruppe Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-group-field_os2intra_organization'
  $field_instances['node-group-field_os2intra_organization'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg forældre til denne gruppe. I hvilken organisation er denne afdeling en del af?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'node',
    'field_name' => 'field_os2intra_organization',
    'label' => 'Gruppens Organisation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gruppe Type');
  t('Gruppens Organisation');
  t('Vælg forældre til denne gruppe. I hvilken organisation er denne afdeling en del af?');

  return $field_instances;
}
