#include "mainwindow.hpp"

main_window::main_window()
	: Fl_Window(1280, 720, "spotify-fltk")
{
	// Window can be resized
	resizable(this);

	group = new Fl_Group(x(), y(), w(), h());
	{
		box_left = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
			group->x(), group->y(),
			leftWidth, group->h(),
			"playlists_library");

		box_middle = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
			leftWidth, group->y(),
			group->w() - leftWidth - rightWidth, group->h(),
			"main_list");

		box_right = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
			leftWidth + box_middle->w(), group->y(),
			rightWidth, group->h(),
			"artist_search");
	}
	group->resizable(box_middle);
	group->end();

	end();
}
