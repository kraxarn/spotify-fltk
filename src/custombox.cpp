#include "custombox.hpp"

void custom_box::init()
{
	Fl::set_boxtype(CUSTOM_BOX, draw, 1, 1, 2, 2);
}

void custom_box::draw(int x, int y, int w, int h, Fl_Color c)
{
	fl_color(c);
	fl_rectf(x, y, w, h);

	fl_color(FL_BACKGROUND2_COLOR);
	fl_rect(x, y, w, h);
}

void custom_box::set(const std::initializer_list<Fl_Widget*> &widgets)
{
	for (auto &widget : widgets)
		widget->box(CUSTOM_BOX);
}
