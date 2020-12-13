#pragma once

#include "icons.hpp"

#include "FL/Fl_Button.H"
#include "FL/Fl_Group.H"

class main_menu: public Fl_Group
{
public:
	explicit main_menu(Fl_Widget &parent);

private:
	Fl_Button *button_menu = nullptr;
	Fl_Button *button_search = nullptr;
};


