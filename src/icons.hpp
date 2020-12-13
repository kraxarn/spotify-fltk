#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "FL/Fl_Widget.H"
#include "FL/Fl_SVG_Image.H"

#include "lib/format.hpp"

enum class Icon
{
	APPLICATION_MENU,
	EDIT_FIND
};

class icons
{
public:
	static std::string get(Icon icon);

	static void set(Fl_Widget &widget, Icon icon);

private:
	static unsigned int fill_color;
};
