#include "mainmenu.hpp"

main_menu::main_menu(Fl_Widget &parent)
	: Fl_Group(parent.x(), parent.y(), parent.w(), 40)
{
	button_menu = new Fl_Button(0, 0, 40, 40);
	icons::set(*button_menu, Icon::APPLICATION_MENU);

	button_search = new Fl_Button(40, 0, 40, 40);
	icons::set(*button_search, Icon::EDIT_FIND);

	end();
}
