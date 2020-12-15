#include "applicationsettings.hpp"

application_settings::application_settings(Fl_Widget &parent)
	: settings_tab(parent, "Application", Icon::WINDOW)
{
	end();
}