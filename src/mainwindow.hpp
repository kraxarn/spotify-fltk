#pragma once

#include "FL/Fl.H"
#include "FL/Fl_Box.H"
#include "FL/Fl_Pixmap.H"
#include "FL/Fl_Window.H"
#include "FL/Fl_SVG_Image.H"
#include "FL/Fl_Menu_Bar.H"
#include "FL/Fl_Menu_Item.H"
#include "FL/Fl_Tile.H"

class main_window: public Fl_Window
{
public:
	main_window();

private:
	const int leftWidth = 250;
	const int rightWidth = 320;

	Fl_Group *group_v = nullptr;
	Fl_Group *group_h = nullptr;

	Fl_Box *box_top = nullptr;
	Fl_Box *box_left = nullptr;
	Fl_Box *box_middle = nullptr;
	Fl_Box *box_right = nullptr;
};
