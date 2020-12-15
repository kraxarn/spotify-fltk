#pragma once

#include "../icons.hpp"

#include "FL/Fl_Tabs.H"

class settings_tab: public Fl_Tabs
{
protected:
	settings_tab(Fl_Widget &parent, const char *title, Icon icon);
};


