#pragma once

#include "FL/Fl_Widget.H"

class colors
{
public:
	static const Fl_Color background = 0x212121ff;
	static const Fl_Color foreground = 0xf5f5f5ff;
	static const Fl_Color highlight = 0x388e3cff;

	static void set(Fl_Widget &widget)
	{
		widget.color(background, highlight);
	}
};

