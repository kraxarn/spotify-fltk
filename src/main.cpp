#include <iostream>

#include "FL/Fl.H"
#include "FL/Fl_Box.H"
#include "FL/Fl_Pixmap.H"
#include "FL/Fl_Window.H"
#include "FL/Fl_SVG_Image.H"
#include "FL/Fl_Menu_Bar.H"
#include "FL/Fl_Menu_Item.H"
#include "FL/Fl_Tile.H"

int main(int argc, char **argv)
{
	std::cout << "Using FLTK " << FL_MAJOR_VERSION << "." << FL_MINOR_VERSION << "." << FL_PATCH_VERSION << std::endl;

	const int leftWidth = 250;
	const int rightWidth = 320;

	// Window start
	Fl_Window window(1280, 720);
	window.resizable(window);

	Fl_Group group(window.x(), window.y(), window.w(), window.h());

	Fl_Box box1(Fl_Boxtype::FL_BORDER_BOX, group.x(), group.y(), leftWidth, group.h(), "playlists_library");
	Fl_Box box2(Fl_Boxtype::FL_BORDER_BOX, leftWidth, group.y(), group.w() - leftWidth - rightWidth, group.h(), "main_list");
	Fl_Box box3(Fl_Boxtype::FL_BORDER_BOX, leftWidth + box2.w(), group.y(), rightWidth, group.h(), "artist_search");

	group.resizable(box2);
	group.end();

	window.end();
	// Window end

	window.show(argc, argv);

	return Fl::run();
}
