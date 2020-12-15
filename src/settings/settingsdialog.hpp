#pragma once

#include "../icons.hpp"
#include "aboutsettings.hpp"
#include "applicationsettings.hpp"
#include "interfacesettings.hpp"
#include "playlistssettings.hpp"
#include "settingstab.hpp"
#include "spotifysettings.hpp"

#include <vector>
#include <memory>

#include "FL/Fl_Window.H"
#include "FL/Fl_Tabs.H"
#include "FL/Fl_Group.H"

class settings_dialog: public Fl_Window
{
public:
	settings_dialog();

private:
	Fl_Tabs tabs;

	std::vector<settings_tab *> settings;

	Fl_Group *playlists = nullptr;
	Fl_Group *about = nullptr;
};
