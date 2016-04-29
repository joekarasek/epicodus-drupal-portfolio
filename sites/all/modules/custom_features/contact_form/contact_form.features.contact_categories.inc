<?php
/**
 * @file
 * contact_form.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_form_contact_categories_defaults() {
  return array(
    'Inquiries/Feedback' => array(
      'category' => 'Inquiries/Feedback',
      'recipients' => 'joe@joekarasek.com',
      'reply' => 'Thank you for the inquiry/feedback. I will get back to you as soon as possible.

Best,
Joe Karasek',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
