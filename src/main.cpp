#include "mainwindow.hpp"


int main(int argc, char **argv)
{
	// Create and show window
	main_window window;
	window.show(argc, argv);

	// Run application
	return Fl::run();
}
