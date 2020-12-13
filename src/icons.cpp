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
const char *edit_find = "M 9 3 C 5.6759952 3 3 5.6759952 3 9 C 3 12.324005 5.6759952 15 9 15 C 10.481205 15 11.830584 14.465318 12.875 13.582031 L 18.292969 19 L 19 18.292969 L 13.582031 12.875 C 14.465318 11.830584 15 10.481205 15 9 C 15 5.6759952 12.324005 3 9 3 z M 9 4 C 11.770005 4 14 6.2299952 14 9 C 14 11.770005 11.770005 14 9 14 C 6.2299952 14 4 11.770005 4 9 C 4 6.2299952 6.2299952 4 9 4 z";
const char *media_playback_pause = "m3 3v16h6v-16zm10 0v16h6v-16z";
const char *media_playback_start = "m3 3v16l16-8z";
const char *media_playlist_repeat = "m16 5v2h-10c-1.662 0-3 1.338-3 3v1h1v-1c0-1.108 0.892-2 2-2h10v2l3-2.5zm2 6v1c0 1.108-0.892 2-2 2h-10v-2l-3 2.5 3 2.5v-2h10c1.662 0 3-1.338 3-3v-1z";
const char *media_playlist_shuffle = "M 16 5 L 16 7 L 13 7 C 10.784 7 9 8.784 9 11 C 9 12.662 7.662 14 6 14 L 3 14 L 3 15 L 6 15 C 8.216 15 10 13.216 10 11 C 10 9.338 11.338 8 13 8 L 16 8 L 16 10 L 19 7.5 L 16 5 z M 3 7 L 3 8 L 6 8 C 6.8536128 8 7.6168144 8.3572581 8.1621094 8.9257812 C 8.2578781 8.5814037 8.3956215 8.2568349 8.5742188 7.9570312 C 7.8779048 7.3680394 6.9875937 7 6 7 L 3 7 z M 16 12 L 16 14 L 13 14 C 12.146387 14 11.383186 13.642742 10.837891 13.074219 C 10.742121 13.418597 10.604379 13.743165 10.425781 14.042969 C 11.122095 14.631961 12.012406 15 13 15 L 16 15 L 16 17 L 19 14.5 L 16 12 z";
const char *media_skip_backward = "m0 3v16h2v-16zm2 8 10 8v-16zm10 0 10 8v-16z";
const char *media_skip_forward = "m0 3v16l10-8zm10 8v8l10-8-10-8zm10 0v8h2v-16h-2z";

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

		case Icon::MEDIA_PLAYBACK_PAUSE:
			svg = media_playback_pause;
			break;

		case Icon::MEDIA_PLAYBACK_START:
			svg = media_playback_start;
			break;

		case Icon::MEDIA_SKIP_BACKWARD:
			svg = media_skip_backward;
			break;

		case Icon::MEDIA_SKIP_FORWARD:
			svg = media_skip_forward;
			break;

		case Icon::MEDIA_PLAYLIST_REPEAT:
			svg = media_playlist_repeat;
			break;

		case Icon::MEDIA_PLAYLIST_SHUFFLE:
			svg = media_playlist_shuffle;
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
