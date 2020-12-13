#pragma once

#include "icons.hpp"

#include "FL/Fl.H"
#include "FL/Fl_SVG_Image.H"
#include "FL/Fl_Button.H"

class icon_button: public Fl_Button
{
public:
	icon_button(int x, int y, int w, int h, Icon icon);

private:
	Fl_SVG_Image svg;
};
