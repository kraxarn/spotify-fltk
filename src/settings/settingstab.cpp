#include "settingstab.hpp"

settings_tab::settings_tab(Fl_Widget &parent, const char *title, Icon icon)
	: Fl_Tabs(parent.x(), parent.y() + 40, parent.w(), parent.h(), title)
{
	icons::set(*this, icon);

	end();
}
