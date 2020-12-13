#include "iconbutton.hpp"

icon_button::icon_button(int x, int y, int w, int h, Icon icon)
	: svg(nullptr, icons::get(icon).c_str()), Fl_Button(x, y, w, h)
{
	this->image(svg);
}
