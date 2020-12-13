#pragma once

#include "lib/format.hpp"
#include "icons.hpp"

#include "FL/Fl_Group.H"
#include "FL/Fl_Tree.H"
#include "FL/Fl_Box.H"

class left_side_panel: public Fl_Group
{
public:
	explicit left_side_panel(Fl_Widget &parent);

private:
	Fl_Tree library;
	Fl_Tree playlists;

	Fl_Box now_playing;

	void set_style(Fl_Tree &tree);
};
