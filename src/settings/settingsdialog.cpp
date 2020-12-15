#include "settingsdialog.hpp"

#define TAB_HEIGHT 40

settings_dialog::settings_dialog()
	: tabs(x(), y(), w(), h()),
	Fl_Window(800, 600, "Settings")
{
	settings = {
		new application_settings(*this),
		new interface_settings(*this),
		new spotify_settings(*this),
		new playlists_settings(*this),
		new about_settings(*this),
	};

	tabs.end();
	tabs.tab_align(FL_ALIGN_IMAGE_NEXT_TO_TEXT);

	resizable(tabs);
	end();
}
