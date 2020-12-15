#include "interfacesettings.hpp"

interface_settings::interface_settings(Fl_Widget &parent)
	: settings_tab(parent, "Interface", Icon::DRAW_BRUSH)
{
	end();
}
