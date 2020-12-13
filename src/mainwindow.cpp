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
		menu = new main_menu(*group_v);

		// Main horizontal group containing all panels
		group_h = new Fl_Group(group_v->x(), menu->h(),
			group_v->w(), group_v->h() - menu->h());
		{
			left = new left_side_panel(*group_h);

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
