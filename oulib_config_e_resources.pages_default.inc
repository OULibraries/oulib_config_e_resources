<?php
/**
 * @file
 * oulib_config_e_resources.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oulib_config_e_resources_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Child-Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term parent',
        'keyword' => 'parent_term',
        'name' => 'term_parent',
        'type' => 'top',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'architecture' => 'architecture',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term_has_parent',
          'settings' => array(
            'vid' => '2',
            'vid_3' => array(),
            'vid_4' => array(),
            'vid_2' => array(
              1 => '1',
              6 => '6',
              9 => '9',
              11 => '11',
              18 => '18',
              23 => '23',
              25 => '25',
              29 => '29',
              34 => '34',
              40 => '40',
              45 => '45',
              49 => '49',
              51 => '51',
              56 => '56',
              64 => '64',
              75 => '75',
            ),
            'vid_1' => array(),
            'include_self' => 0,
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ou_twocol_brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'tleft' => NULL,
      'tright' => NULL,
      'bleft' => NULL,
      'bright' => NULL,
      'bottom' => NULL,
      'mheader' => NULL,
      'mleft' => NULL,
      'mright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '450cec28-d5e0-45ef-a046-92b395597e96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b234ded2-0b85-4107-a5b7-cfda2e4a3a3a';
    $pane->panel = 'tleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_subject-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b234ded2-0b85-4107-a5b7-cfda2e4a3a3a';
    $display->content['new-b234ded2-0b85-4107-a5b7-cfda2e4a3a3a'] = $pane;
    $display->panels['tleft'][0] = 'new-b234ded2-0b85-4107-a5b7-cfda2e4a3a3a';
    $pane = new stdClass();
    $pane->pid = 'new-ce4f359b-147a-43b4-9fa6-fffc5bf17504';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '2',
            4 => array(),
            2 => array(
              1 => '1',
              6 => '6',
              10 => '10',
              12 => '12',
              18 => '18',
              23 => '23',
              24 => '24',
              25 => '25',
              29 => '29',
              34 => '34',
              40 => '40',
              45 => '45',
            ),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="container-fluid"><p>
	<a href="%parent_term:url">%term:parent </a> &gt; <a href="%term:url">%term:name </a></p>

</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce4f359b-147a-43b4-9fa6-fffc5bf17504';
    $display->content['new-ce4f359b-147a-43b4-9fa6-fffc5bf17504'] = $pane;
    $display->panels['top'][0] = 'new-ce4f359b-147a-43b4-9fa6-fffc5bf17504';
    $pane = new stdClass();
    $pane->pid = 'new-9e42d176-f354-46af-b26a-c6efccc2137e';
    $pane->panel = 'top';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9e42d176-f354-46af-b26a-c6efccc2137e';
    $display->content['new-9e42d176-f354-46af-b26a-c6efccc2137e'] = $pane;
    $display->panels['top'][1] = 'new-9e42d176-f354-46af-b26a-c6efccc2137e';
    $pane = new stdClass();
    $pane->pid = 'new-cae4d914-74b5-4842-b245-a81e885fca14';
    $pane->panel = 'tright';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '2',
            4 => array(),
            2 => array(
              10 => '10',
              12 => '12',
              23 => '23',
              24 => '24',
              49 => '49',
            ),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'child',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'relationship_term_parent_1',
      'override_title' => 1,
      'override_title_text' => 'Related Subjects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cae4d914-74b5-4842-b245-a81e885fca14';
    $display->content['new-cae4d914-74b5-4842-b245-a81e885fca14'] = $pane;
    $display->panels['tright'][0] = 'new-cae4d914-74b5-4842-b245-a81e885fca14';
    $pane = new stdClass();
    $pane->pid = 'new-646c100f-053c-4173-b30c-0350a7eb0975';
    $pane->panel = 'tright';
    $pane->type = 'views_panes';
    $pane->subtype = 'subjects_libguides-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '646c100f-053c-4173-b30c-0350a7eb0975';
    $display->content['new-646c100f-053c-4173-b30c-0350a7eb0975'] = $pane;
    $display->panels['tright'][1] = 'new-646c100f-053c-4173-b30c-0350a7eb0975';
    $pane = new stdClass();
    $pane->pid = 'new-d767ec4f-0890-4a85-963d-68568034f8be';
    $pane->panel = 'tright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Research Help',
      'title' => 'Research Help',
      'body' => '<div class="container">
	<div class="row">
		<div class="col-md-6">
			<p>
				<a href="https://libraries.webdev.lib.ou.edu/eresources"><strong>Browse Databases </strong></a></p>

			<p>
				Databases help you&nbsp;find articles and other materials. Use the descriptions to help find a relevant database, or use the subjects below to find resources on your topic. <a href="https://libraries.webdev.lib.ou.edu/searchingdatabases">More Information.</a></p>
<p>&nbsp;</p>
		</div>
	</div>

	<div class="row">
		<div class="col-md-1 hidden-sm hidden-xs">
			<img src="https://libraries.webdev.lib.ou.edu/sites/default/files/databases.png" /></div>

		<div class="col-md-8 col-sm-12">
			<b>Use Databases to find</b><br />
			<a href="#">Articles (Journal,&nbsp;Magazine, Newspaper)</a>

			<p>
				&nbsp;</p>

		</div>
	</div>

	<div class="row">
		<div class="col-md-6">
			____________________________________________________________
			<p>
				&nbsp;</p>

			<p>
				<a href="http://sfxhosted.exlibrisgroup.com/ou/az?lang=eng"><strong>Browse&nbsp;E-Journals </strong></a></p>

			<p>
				Use the E-Journals list to search for electronic journals by title. To do a general&nbsp;search for articles on a given topic, use the Discover system or a subject specific database.</p>

			<p>
				&nbsp;</p>
		</div>
	</div>

	<div class="row">
		<div class="col-md-1 hidden-sm hidden-xs">
			<img src="https://libraries.webdev.lib.ou.edu/sites/default/files/ejournals.png" /></div>

		<div class="col-md-8 col-sm-8">
			<b>Use E-Journals to find&nbsp;</b><br />
			<a href="#">Journal titles, volumes, articles</a>

			<p>
				&nbsp;</p>

			<p>
				&nbsp;</p>
		</div>
	</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd767ec4f-0890-4a85-963d-68568034f8be';
    $display->content['new-d767ec4f-0890-4a85-963d-68568034f8be'] = $pane;
    $display->panels['tright'][2] = 'new-d767ec4f-0890-4a85-963d-68568034f8be';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9e42d176-f354-46af-b26a-c6efccc2137e';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Parent-Category',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'architecture' => 'architecture',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '2',
            4 => array(),
            2 => array(
              1 => '1',
              6 => '6',
              9 => '9',
              11 => '11',
              18 => '18',
            ),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ou_twocol_brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'tleft' => NULL,
      'tright' => NULL,
      'bleft' => NULL,
      'bright' => NULL,
      'bottom' => NULL,
      'mheader' => NULL,
      'mleft' => NULL,
      'mright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8988f162-991b-43fd-ac03-5a114b03db44';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70445c86-495e-4b6c-aa91-35a3ca4bc30c';
    $pane->panel = 'tleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_subject-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70445c86-495e-4b6c-aa91-35a3ca4bc30c';
    $display->content['new-70445c86-495e-4b6c-aa91-35a3ca4bc30c'] = $pane;
    $display->panels['tleft'][0] = 'new-70445c86-495e-4b6c-aa91-35a3ca4bc30c';
    $pane = new stdClass();
    $pane->pid = 'new-b3f9518c-09e3-4d6b-a4b2-9ac15ae64cb2';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3f9518c-09e3-4d6b-a4b2-9ac15ae64cb2';
    $display->content['new-b3f9518c-09e3-4d6b-a4b2-9ac15ae64cb2'] = $pane;
    $display->panels['top'][0] = 'new-b3f9518c-09e3-4d6b-a4b2-9ac15ae64cb2';
    $pane = new stdClass();
    $pane->pid = 'new-8b2319b3-79d7-44ca-b396-1da1322c6734';
    $pane->panel = 'tright';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '2',
            4 => array(),
            2 => array(
              9 => '9',
              11 => '11',
            ),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'child',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Choose a Subject',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b2319b3-79d7-44ca-b396-1da1322c6734';
    $display->content['new-8b2319b3-79d7-44ca-b396-1da1322c6734'] = $pane;
    $display->panels['tright'][0] = 'new-8b2319b3-79d7-44ca-b396-1da1322c6734';
    $pane = new stdClass();
    $pane->pid = 'new-593e86b0-884f-4a79-a3ee-4aad6557ad45';
    $pane->panel = 'tright';
    $pane->type = 'views_panes';
    $pane->subtype = 'subjects_libguides-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '593e86b0-884f-4a79-a3ee-4aad6557ad45';
    $display->content['new-593e86b0-884f-4a79-a3ee-4aad6557ad45'] = $pane;
    $display->panels['tright'][1] = 'new-593e86b0-884f-4a79-a3ee-4aad6557ad45';
    $pane = new stdClass();
    $pane->pid = 'new-b5f0e62b-9237-4cb5-bf61-6147796f2c86';
    $pane->panel = 'tright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Research Help',
      'title' => 'Research Help',
      'body' => '<div class="container">
	<div class="row">
		<div class="col-md-6">
			<p>
				<a href="https://libraries.webdev.lib.ou.edu/eresources"><strong>Browse Databases </strong></a></p>

			<p>
				Databases help you&nbsp;find articles and other materials. Use the descriptions to help find a relevant database, or use the subjects below to find resources on your topic. <a href="https://libraries.webdev.lib.ou.edu/searchingdatabases">More Information.</a></p>

			<p>
				&nbsp;</p>
		</div>
	</div>

	<div class="row">
		<div class="col-md-1 hidden-sm hidden-xs">
			<img src="https://libraries.webdev.lib.ou.edu/sites/default/files/databases.png" /></div>

		<div class="col-md-8 col-sm-12">
			<b>Use Databases to find</b><br />
			<a href="#">Articles (Journal,&nbsp;Magazine, Newspaper)</a>

			<p>
				&nbsp;</p>
		</div>
	</div>

	<div class="row">
		<div class="col-md-6">
			____________________________________________________________
			<p>
				&nbsp;</p>

			<p>
				<a href="http://sfxhosted.exlibrisgroup.com/ou/az?lang=eng"><strong>Browse&nbsp;E-Journals </strong></a></p>

			<p>
				Use the E-Journals list to search for electronic journals by title. To do a general&nbsp;search for articles on a given topic, use the Discover system or a subject specific database.</p>

			<p>
				&nbsp;</p>
		</div>
	</div>

	<div class="row">
		<div class="col-md-1 hidden-sm hidden-xs">
			<img src="https://libraries.webdev.lib.ou.edu/sites/default/files/ejournals.png" /></div>

		<div class="col-md-8 col-sm-8">
			<b>Use E-Journals to find&nbsp;</b><br />
			<a href="#">Journal titles, volumes, articles</a>

			<p>
				&nbsp;</p>

			<p>
				&nbsp;</p>
		</div>
	</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b5f0e62b-9237-4cb5-bf61-6147796f2c86';
    $display->content['new-b5f0e62b-9237-4cb5-bf61-6147796f2c86'] = $pane;
    $display->panels['tright'][2] = 'new-b5f0e62b-9237-4cb5-bf61-6147796f2c86';
    $pane = new stdClass();
    $pane->pid = 'new-e2a8725a-100b-4b81-9719-49a4d2e852d7';
    $pane->panel = 'tright';
    $pane->type = 'views_panes';
    $pane->subtype = 'subjects_libguides-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e2a8725a-100b-4b81-9719-49a4d2e852d7';
    $display->content['new-e2a8725a-100b-4b81-9719-49a4d2e852d7'] = $pane;
    $display->panels['tright'][3] = 'new-e2a8725a-100b-4b81-9719-49a4d2e852d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function oulib_config_e_resources_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_library';
  $page->task = 'page';
  $page->admin_title = 'My Library';
  $page->admin_description = '';
  $page->path = 'mylibrary';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_library_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'my_library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ou_twocol_brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'tleft' => NULL,
      'tright' => NULL,
      'mheader' => NULL,
      'mleft' => NULL,
      'mright' => NULL,
      'bleft' => NULL,
      'bright' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Library';
  $display->uuid = '46ac7a4f-4332-41ae-a7e8-8da510bf1a74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-35aab63f-9ff3-4ef0-a68e-638c24b10e51';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '
	My Library is a customizable research dashboard that allows you to added library resources that you use regularly to one convenient location. Get started by Adding Databases, E-Reference Materials, or Research Guides.&nbsp;Add: &nbsp;<strong><a href="/eresources">Databases, Reference Materials, or Research Guides</a>.</strong>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35aab63f-9ff3-4ef0-a68e-638c24b10e51';
    $display->content['new-35aab63f-9ff3-4ef0-a68e-638c24b10e51'] = $pane;
    $display->panels['top'][0] = 'new-35aab63f-9ff3-4ef0-a68e-638c24b10e51';
    $pane = new stdClass();
    $pane->pid = 'new-2adf0d9d-c232-4d08-bb47-a2c022806b9c';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'databases_my_library';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2adf0d9d-c232-4d08-bb47-a2c022806b9c';
    $display->content['new-2adf0d9d-c232-4d08-bb47-a2c022806b9c'] = $pane;
    $display->panels['top'][1] = 'new-2adf0d9d-c232-4d08-bb47-a2c022806b9c';
    $pane = new stdClass();
    $pane->pid = 'new-d94f575f-7f43-4e76-a160-04f7727a8ef8';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'my_e_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd94f575f-7f43-4e76-a160-04f7727a8ef8';
    $display->content['new-d94f575f-7f43-4e76-a160-04f7727a8ef8'] = $pane;
    $display->panels['top'][2] = 'new-d94f575f-7f43-4e76-a160-04f7727a8ef8';
    $pane = new stdClass();
    $pane->pid = 'new-7ac4b507-8866-4df7-90b7-29449c0fbea7';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'my_research_guides';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7ac4b507-8866-4df7-90b7-29449c0fbea7';
    $display->content['new-7ac4b507-8866-4df7-90b7-29449c0fbea7'] = $pane;
    $display->panels['top'][3] = 'new-7ac4b507-8866-4df7-90b7-29449c0fbea7';
    $pane = new stdClass();
    $pane->pid = 'new-86681b49-845a-4e5e-8d75-b9fdbcf4b574';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'my_locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '86681b49-845a-4e5e-8d75-b9fdbcf4b574';
    $display->content['new-86681b49-845a-4e5e-8d75-b9fdbcf4b574'] = $pane;
    $display->panels['top'][4] = 'new-86681b49-845a-4e5e-8d75-b9fdbcf4b574';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2adf0d9d-c232-4d08-bb47-a2c022806b9c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_library'] = $page;

  return $pages;

}
