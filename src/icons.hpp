#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "FL/Fl_Widget.H"
#include "FL/Fl_SVG_Image.H"

#include "lib/format.hpp"

enum class Icon
{
	APPLICATION_MENU,
	EDIT_FIND,
	MEDIA_OPTICAL_AUDIO,
	MEDIA_PLAYBACK_PAUSE,
	MEDIA_PLAYBACK_START,
	MEDIA_PLAYLIST_REPEAT,
	MEDIA_PLAYLIST_SHUFFLE,
	MEDIA_SKIP_BACKWARD,
	MEDIA_SKIP_FORWARD,
	WINDOW,
	DRAW_BRUSH,
	HEADPHONES,
	VIEW_MEDIA_PLAYLIST,
	HELP_ABOUT,
};

class icons
{
public:
	static std::string get(Icon icon);

	static void set(Fl_Widget &widget, Icon icon, int size = -1);

private:
	static unsigned int fill_color;
};
