#include "mainmenu.hpp"

#define VOLUME_WIDTH 140
#define POSITION_WIDTH 120

main_menu::main_menu(Fl_Widget &parent)
	: button_menu(0, 0, 40, 40),
	menu_popup{
		{"&Device", 0, nullptr, nullptr, FL_SUBMENU_POINTER},
		{"&Settings...", 0, callback_settings, nullptr, FL_MENU_DIVIDER},
		{"&Log out", 0, nullptr, nullptr},
		{"&Quit", 0, nullptr, nullptr},
		{nullptr}
	},
	button_search(40, 0, 40, 40),
	// ---
	previous(90, 0, 40, 40),
	play_pause(130, 0, 40, 40),
	next(170, 0, 40, 40),
	// ---
	progress(220, 0, w() - VOLUME_WIDTH - 80 - POSITION_WIDTH - 220, 40),
	// ---
	position(w() - VOLUME_WIDTH - 80 - POSITION_WIDTH, 0, POSITION_WIDTH, h(), "00:00/00:00"),
	shuffle(w() - VOLUME_WIDTH - 80, 0, 40, 40),
	repeat(w() - VOLUME_WIDTH - 40, 0, 40, 40),
	volume(w() - VOLUME_WIDTH, 0, VOLUME_WIDTH, 40),
	// ---
	Fl_Group(parent.x(), parent.y(), parent.w(), 40)
{
	icons::set(button_menu, Icon::APPLICATION_MENU);
	button_menu.menu(menu_popup);

	icons::set(button_search, Icon::EDIT_FIND);

	icons::set(previous, Icon::MEDIA_SKIP_BACKWARD);
	icons::set(play_pause, Icon::MEDIA_PLAYBACK_START);
	icons::set(next, Icon::MEDIA_SKIP_FORWARD);

	progress.type(FL_HOR_NICE_SLIDER);

	position.labelfont(FL_COURIER);

	icons::set(shuffle, Icon::MEDIA_PLAYLIST_SHUFFLE);
	icons::set(repeat, Icon::MEDIA_PLAYLIST_REPEAT);

	volume.minimum(0);
	volume.maximum(100);
	volume.step(5);
	volume.value(100);
	volume.type(FL_HOR_NICE_SLIDER);

	custom_box::set({
		&button_menu,
		&button_search,
		&previous,
		&play_pause,
		&next,
		&progress,
		&repeat,
		&shuffle,
		&volume
	});

	resizable(progress);
	end();
}

void main_menu::callback_settings(Fl_Widget *widget, void *data)
{
	auto window = new settings_dialog();
	window->show();
}
