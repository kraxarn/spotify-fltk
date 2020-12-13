#pragma once

#include "mainmenu.hpp"
#include "leftsidepanel.hpp"

#include "FL/Fl.H"
#include "FL/Fl_Box.H"
#include "FL/Fl_Box.H"
#include "FL/Fl_Window.H"

class main_window: public Fl_Window
{
public:
	main_window();

private:
	const int leftWidth = 250;
	const int rightWidth = 320;

	Fl_Group *group_v = nullptr;
	Fl_Group *group_h = nullptr;

	main_menu *menu = nullptr;

	left_side_panel *left = nullptr;
	Fl_Box *box_left = nullptr;
	Fl_Box *box_middle = nullptr;
	Fl_Box *box_right = nullptr;

	void toggle_side_panel(bool show);
};
