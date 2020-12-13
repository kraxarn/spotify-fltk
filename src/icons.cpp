#include "icons.hpp"

/*
 * Icons kindly provided by the KDE project as BreezeIcons, copyright 2014 Uri Herrera <uri_herrera@nitrux.in> and others.
 * Icons are not modified from the original source code.
 *
 * Original source code (modified LGPL):
 * https://cgit.kde.org/breeze-icons.git
 */

const char *application_menu =
	"<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 22 22\">\n"
	"  <defs id=\"defs3051\">\n"
	"    <style type=\"text/css\" id=\"current-color-scheme\">\n"
	"      .ColorScheme-Text {\n"
	"        color:#eff0f1;\n"
	"      }\n"
	"      </style>\n"
	"  </defs>\n"
	" <path \n"
	"     style=\"fill:currentColor;fill-opacity:1;stroke:none\" \n"
	"\td=\"m3 5v2h16v-2h-16m0 5v2h16v-2h-16m0 5v2h16v-2h-16\"\n"
	"\t class=\"ColorScheme-Text\"\n"
	"     />\n"
	"</svg>";

const char *edit_find =
	"<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 22 22\">\n"
	"  <defs id=\"defs3051\">\n"
	"    <style type=\"text/css\" id=\"current-color-scheme\">\n"
	"      .ColorScheme-Text {\n"
	"        color:#eff0f1;\n"
	"      }\n"
	"      </style>\n"
	"  </defs>\n"
	" <path \n"
	"    style=\"fill:currentColor;fill-opacity:1;stroke:none\" \n"
	"    d=\"M 9 3 C 5.6759952 3 3 5.6759952 3 9 C 3 12.324005 5.6759952 15 9 15 C 10.481205 15 11.830584 14.465318 12.875 13.582031 L 18.292969 19 L 19 18.292969 L 13.582031 12.875 C 14.465318 11.830584 15 10.481205 15 9 C 15 5.6759952 12.324005 3 9 3 z M 9 4 C 11.770005 4 14 6.2299952 14 9 C 14 11.770005 11.770005 14 9 14 C 6.2299952 14 4 11.770005 4 9 C 4 6.2299952 6.2299952 4 9 4 z \"\n"
	"    class=\"ColorScheme-Text\"\n"
	"    />  \n"
	"</svg>";

const char *icons::get(Icon icon)
{
	switch (icon)
	{
		case Icon::APPLICATION_MENU:
			return application_menu;

		case Icon::EDIT_FIND:
			return edit_find;
	}

	return nullptr;
}