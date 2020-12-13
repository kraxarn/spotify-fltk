#include "imagebutton.hpp"

image_button::image_button(int x, int y, int w, int h, const char *svg_data)
	: svg(nullptr, svg_data), Fl_Button(x, y, w, h)
{
	this->image(svg);
}