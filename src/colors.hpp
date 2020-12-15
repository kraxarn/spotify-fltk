#pragma once

#include "FL/Fl_Widget.H"

class colors
{
public:
	static const Fl_Color highlight = 0x388e3cff;

	static void init()
	{
		Fl::background(0x12, 0x12, 0x12);
		Fl::background2(0x28, 0x28, 0x28);
		Fl::foreground(0xf5, 0xf5, 0xf5);
	}
};

