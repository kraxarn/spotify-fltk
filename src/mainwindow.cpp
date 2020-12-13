#include "mainwindow.hpp"

main_window::main_window()
	: Fl_Window(1280, 720, "spotify-fltk")
{
	// Window can be resized
	resizable(this);
	size_range(960, 540);
	colors::set(*this);

	// Main vertical group containing everything
	group_v = new Fl_Group(x(), y(), w(), h());
	{
		menu = new main_menu(*group_v);

		// Main horizontal group containing all panels
		group_h = new Fl_Group(group_v->x(), menu->h(),
			group_v->w(), group_v->h() - menu->h());
		{
			left = new left_side_panel(*group_h);

			tracks = new track_list(*group_h);

			box_right = new Fl_Box(Fl_Boxtype::FL_BORDER_BOX,
				leftWidth + tracks->w(), group_h->y(),
				rightWidth, group_h->h(),
				"artist_search");
		}
		group_h->resizable(tracks);
		group_h->end();
	}
	group_v->resizable(group_h);
	group_v->end();

	toggle_side_panel(false);

	for (auto i = 0; i < 50; i++)
	{
		tracks->add({
			fmt::format("Track {}", (i % 10) + 1),
			fmt::format("Artist {}", (i / 10) + 1),
			fmt::format("Album {}", (i / 10) + 1),
			fmt::format("0:00"),
			fmt::format("Added 1 week ago")
		});
	}

	end();
}

void main_window::toggle_side_panel(bool show)
{
	int width = show ? -rightWidth : rightWidth;
	if (show)
		box_right->show();
	else
		box_right->hide();

	tracks->size(tracks->w() + width, tracks->h());
}
