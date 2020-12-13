#include "leftsidepanel.hpp"

left_side_panel::left_side_panel(Fl_Widget &parent)
	: library(x() + 10, y() + 30, w() - 20, h() / 2 - 40, "Library"),
	playlists(x() + 10, y() + (h() / 2) + 10, w() - 20, h() / 2 - 40, "Playlists"),
	Fl_Group(parent.x(), parent.y(), 250, parent.h())
{
	library.showroot(false);
	library.color(parent.color());
	library.item_labelfgcolor(parent.labelcolor());
	library.connectorcolor(parent.labelcolor());
	library.connectorstyle(FL_TREE_CONNECTOR_NONE);
	{
		library.add("Recently Played");
		library.add("Liked");
		library.add("Tracks");
		library.add("New Releases");

		library.add("Albums");
		library.add("Albums/Please wait");
		library.close("Albums");

		library.add("Artists");
		library.add("Artists/Please wait");
		library.close("Artists");

		library.add("Following");
		library.add("Following/Please wait");
		library.close("Following");
	}
	library.end();

	end();
}
