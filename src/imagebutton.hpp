#pragma once

#include "FL/Fl.H"
#include "FL/Fl_SVG_Image.H"
#include "FL/Fl_Button.H"

class image_button: public Fl_Button
{
public:
	image_button(int x, int y, int w, int h, const char *svg_data);

private:
	Fl_SVG_Image svg;
};
