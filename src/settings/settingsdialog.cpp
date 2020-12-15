#include "settingsdialog.hpp"

#define TAB_HEIGHT 40

settings_dialog::settings_dialog()
	: tabs(x(), y(), w(), h()),
	Fl_Window(800, 600, "Settings")
{
	application = new Fl_Group(tabs.x(), tabs.y() + TAB_HEIGHT, tabs.w(), tabs.h(), "Application");
	{
		// ...
	}
	icons::set(*application, Icon::WINDOW);
	application->end();

	interface = new Fl_Group(tabs.x(), tabs.y() + TAB_HEIGHT, tabs.w(), tabs.h(), "Interface");
	{
		// ...
	}
	icons::set(*interface, Icon::DRAW_BRUSH);
	interface->end();

	spotify = new Fl_Group(tabs.x(), tabs.y() + TAB_HEIGHT, tabs.w(), tabs.h(), "Spotify");
	{
		// ...
	}
	icons::set(*spotify, Icon::HEADPHONES);
	spotify->end();

	playlists = new Fl_Group(tabs.x(), tabs.y() + TAB_HEIGHT, tabs.w(), tabs.h(), "Playlists");
	{
		// ...
	}
	icons::set(*playlists, Icon::VIEW_MEDIA_PLAYLIST);
	playlists->end();

	about = new Fl_Group(tabs.x(), tabs.y() + TAB_HEIGHT, tabs.w(), tabs.h(), "About");
	{
		// ...
	}
	icons::set(*about, Icon::HELP_ABOUT);
	about->end();

	tabs.end();
	std::cout << tabs.x() << " " << tabs.y() << " " << tabs.w() << " " << tabs.h() << std::endl;

	tabs.tab_align(FL_ALIGN_IMAGE_NEXT_TO_TEXT);
	resizable(tabs);
	end();
}
