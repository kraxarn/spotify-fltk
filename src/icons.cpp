#include "icons.hpp"

unsigned int icons::fill_color = 0xeff0f1;

/*
 * Icons kindly provided by the KDE project as BreezeIcons, copyright 2014 Uri Herrera <uri_herrera@nitrux.in> and others.
 * Icons are not modified from the original source code.
 *
 * Original source code (modified LGPL):
 * https://cgit.kde.org/breeze-icons.git
 */

const char *base =
	"<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 22 22\">\n"
	"  <path style=\"fill:#{};fill-opacity:1;stroke:none\" \n"
	"    d=\"{}\"/>\n"
	"</svg>";

const char *application_menu = "m3 5v2h16v-2h-16m0 5v2h16v-2h-16m0 5v2h16v-2h-16";

const char *edit_find =
	"M 9 3 C 5.6759952 3 3 5.6759952 3 9 C 3 12.324005 5.6759952 15 9 15 C 10.481205 15 11.830584 14.465318 12.875 13.582031 L 18.292969 19 L 19 18.292969 L 13.582031 12.875 C 14.465318 11.830584 15 10.481205 15 9 C 15 5.6759952 12.324005 3 9 3 z M 9 4 C 11.770005 4 14 6.2299952 14 9 C 14 11.770005 11.770005 14 9 14 C 6.2299952 14 4 11.770005 4 9 C 4 6.2299952 6.2299952 4 9 4 z";

std::string icons::get(Icon icon)
{
	const char *svg = nullptr;

	switch (icon)
	{
		case Icon::APPLICATION_MENU:
			svg = application_menu;
			break;

		case Icon::EDIT_FIND:
			svg = edit_find;
			break;
	}

	std::stringstream stream;
	stream << std::setfill('0') << std::setw(6) << std::hex << fill_color;

	return fmt::format(base, stream.str(), svg);
}

void icons::set(Fl_Widget &widget, Icon icon)
{
	auto svg = new Fl_SVG_Image(nullptr, get(icon).c_str());
	widget.image(svg);
}
