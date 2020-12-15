#pragma once

#include "icons.hpp"
#include "custombox.hpp"

#include "FL/Fl_Button.H"
#include "FL/Fl_Group.H"
#include "FL/Fl_Slider.H"
#include "FL/Fl_Toggle_Button.H"
#include "FL/Fl_Box.H"
#include "FL/Fl_Menu_Item.H"
#include "FL/Fl_Menu_Button.H"

class main_menu: public Fl_Group
{
public:
	explicit main_menu(Fl_Widget &parent);

private:
	Fl_Box position;

	Fl_Button next;
	Fl_Button play_pause;
	Fl_Button previous;

	Fl_Menu_Button button_menu;

	Fl_Menu_Item menu_popup[5];

	Fl_Slider progress;
	Fl_Slider volume;

	Fl_Toggle_Button button_search;
	Fl_Toggle_Button repeat;
	Fl_Toggle_Button shuffle;
};
