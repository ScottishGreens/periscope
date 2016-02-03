<?php

/**
 * @file
 * Administration page callbacks for the Periscope On Air button module.
 */

/**
 * Main settings page.
 */
function periscope_admin_settings_form() {
  $form = array();

  $form['periscope_onair_periscopeid'] = array(
    '#type' => 'textfield',
    '#title' => t('Broadcaster username'),
    '#default_value' => variable_get('periscope_onair_periscopeid', ''),
  );

  $form['periscope_onair_button_size'] = array(
    '#type' => 'select',
    '#title' => t('Button Size'),
    '#options' => array(
      'small' => t('Small'),
      'large' => t('Large')),
    '#default_value' => variable_get('periscope_onair_button_size', ''),
  );

  return system_settings_form($form);
}