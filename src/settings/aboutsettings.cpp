#include "aboutsettings.hpp"

about_settings::about_settings(Fl_Widget &parent)
	: settings_tab(parent, "About", Icon::HELP_ABOUT)
{
	end();
}
