#pragma once

#include "FL/Fl_Group.H"
#include "FL/Fl_Hold_Browser.H"
#include "FL/Fl_Tree.H"

class left_side_panel: public Fl_Group
{
public:
	explicit left_side_panel(Fl_Widget &parent);

private:
	Fl_Tree library;
	Fl_Hold_Browser playlists;
};
