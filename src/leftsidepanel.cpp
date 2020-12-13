#include "leftsidepanel.hpp"

left_side_panel::left_side_panel(Fl_Widget &parent)
	: library(x() + 10, y() + 30, w() - 20, h() / 2 - 72, "Library"),
	playlists(library.x(), library.y() + library.h() + 30, library.w(), library.h(), "Playlists"),
	now_playing(library.x(), playlists.y() + playlists.h() + 10, library.w(), 64),
	Fl_Group(parent.x(), parent.y(), 250, parent.h())
{
	colors::set(*this);
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

	icons::set(now_playing, Icon::MEDIA_OPTICAL_AUDIO, 64);
	now_playing.label("No music playing");

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
