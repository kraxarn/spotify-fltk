#pragma once

#include "colors.hpp"

#include "FL/fl_draw.H"

#include <vector>

#define CUSTOM_BOX FL_FREE_BOXTYPE

class custom_box
{
public:
	static void init();

	static void set(const std::initializer_list<Fl_Widget*> &widgets);

private:
	static void draw(int x, int y, int w, int h, Fl_Color c);
};
