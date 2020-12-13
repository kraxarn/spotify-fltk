#pragma once

#include "icons.hpp"

#include "FL/Fl_Button.H"
#include "FL/Fl_Group.H"
#include "FL/Fl_Slider.H"
#include "FL/Fl_Toggle_Button.H"
#include "FL/Fl_Box.H"

class main_menu: public Fl_Group
{
public:
	explicit main_menu(Fl_Widget &parent);

private:
	Fl_Button button_menu;
	Fl_Button previous;
	Fl_Button play_pause;
	Fl_Button next;

	Fl_Toggle_Button button_search;
	Fl_Toggle_Button shuffle;
	Fl_Toggle_Button repeat;

	Fl_Slider progress;
	Fl_Slider volume;

	Fl_Box position;
};


