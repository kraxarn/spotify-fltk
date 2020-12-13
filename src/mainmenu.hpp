#pragma once

#include "icons.hpp"
#include "iconbutton.hpp"

#include "FL/Fl_Button.H"
#include "FL/Fl_Group.H"
#include "FL/Fl_Pixmap.H"

class main_menu: public Fl_Group
{
public:
	explicit main_menu(Fl_Widget &parent);

private:
	icon_button *button_menu = nullptr;
	icon_button *button_search = nullptr;
};


