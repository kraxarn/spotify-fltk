#include "mainwindow.hpp"

main_window::main_window()
	: Fl_Window(1280, 720, "spotify-fltk")
{
	// Window can be resized
	resizable(this);
	size_range(960, 540);

	// Main vertical group containing everything
	group_v = new Fl_Group(x(), y(), w(), h());
	{
		box_top = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
			group_v->x(), group_v->y(),
			group_v->w(), 40,
			"top_menu");

		// Main horizontal group containing all panels
		group_h = new Fl_Group(group_v->x(), box_top->h(),
			group_v->w(), group_v->h() - box_top->h());
		{
			box_left = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
				group_h->x(), group_h->y(),
				leftWidth, group_h->h(),
				"playlists_library");

			box_middle = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
				leftWidth, group_h->y(),
				group_h->w() - leftWidth - rightWidth, group_h->h(),
				"main_list");

			box_right = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
				leftWidth + box_middle->w(), group_h->y(),
				rightWidth, group_h->h(),
				"artist_search");
		}
		group_h->resizable(box_middle);
		group_h->end();
	}
	group_v->resizable(group_h);
	group_v->end();

	end();
}
