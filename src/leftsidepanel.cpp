#include "leftsidepanel.hpp"

left_side_panel::left_side_panel(Fl_Widget &parent)
	: library(x() + 10, y() + 30, w() - 20, h() / 2 - 40, "Library"),
	playlists(x() + 10, y() + (h() / 2) + 20, w() - 20, h() / 2 - 40, "Playlists"),
	Fl_Group(parent.x(), parent.y(), 250, parent.h())
{
	set_style(library);
	set_style(playlists);

	library.add("Recently Played");
	library.add("Liked");
	library.add("Tracks");
	library.add("New Releases");

	library.add("Albums");
	library.add("Albums/...");
	library.close("Albums");

	library.add("Artists");
	library.add("Artists/...");
	library.close("Artists");

	library.add("Following");
	library.add("Following/...");
	library.close("Following");

	library.end();

	for (auto i = 0; i < 20; i++)
		playlists.add(fmt::format("Playlist {}", i + 1).c_str());
	playlists.end();

	resizable(playlists);
	end();
}

void left_side_panel::set_style(Fl_Tree &tree)
{
	tree.showroot(false);
	tree.color(color());
	tree.item_labelfgcolor(labelcolor());
	tree.connectorcolor(labelcolor());
	tree.connectorstyle(FL_TREE_CONNECTOR_NONE);
}
