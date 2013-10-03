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
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'user-user-field_os2intra_birthday'
  $field_instances['user-user-field_os2intra_birthday'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'user',
    'field_name' => 'field_os2intra_birthday',
    'label' => 'Birthday',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_os2intra_phone'
  $field_instances['user-user-field_os2intra_phone'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => '+45 ',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'user',
    'field_name' => 'field_os2intra_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Birthday');
  t('Gruppe Type');
  t('Gruppens Organisation');
  t('Phone');
  t('Vælg forældre til denne gruppe. I hvilken organisation er denne afdeling en del af?');

  return $field_instances;
}
