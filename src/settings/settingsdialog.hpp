#pragma once

#include "../icons.hpp"

#include "FL/Fl_Window.H"
#include "FL/Fl_Tabs.H"
#include "FL/Fl_Group.H"

class settings_dialog: public Fl_Window
{
public:
	settings_dialog();

private:
	Fl_Tabs tabs;

	Fl_Group *application = nullptr;
	Fl_Group *interface = nullptr;
	Fl_Group *spotify = nullptr;
	Fl_Group *playlists = nullptr;
	Fl_Group *about = nullptr;
};
