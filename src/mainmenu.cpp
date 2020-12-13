#include "mainmenu.hpp"

main_menu::main_menu(Fl_Widget &parent)
	: Fl_Group(parent.x(), parent.y(), parent.w(), 40)
{
	button_menu = new icon_button(0, 0, 40, 40, Icon::APPLICATION_MENU);
	button_search = new icon_button(40, 0, 40, 40, Icon::EDIT_FIND);

	end();
}
