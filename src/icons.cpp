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
const char *media_optical_audio = "M 11 3 C 6.568 3 3 6.568 3 11 C 3 15.432 6.568 19 11 19 L 11 18 C 7.122 18 4 14.878 4 11 C 4 7.122 7.122 4 11 4 C 14.878 4 18 7.122 18 11 L 19 11 C 19 6.568 15.432 3 11 3 z M 11 5 C 7.676 5 5 7.676 5 11 L 8 11 C 8 9.338 9.338 8 11 8 L 11 5 z M 11 9 C 9.892 9 9 9.892 9 11 C 9 12.108 9.892 13 11 13 L 11 12 C 10.446 12 10 11.554 10 11 C 10 10.446 10.446 10 11 10 C 11.554 10 12 10.446 12 11 L 13 11 C 13 9.892 12.108 9 11 9 z M 15 10 L 15 15.277344 C 14.704935 15.106143 14.367047 15 14 15 C 12.892 15 12 15.892 12 17 C 12 18.108 12.892 19 14 19 C 15.108 19 16 18.108 16 17 L 16 12 L 16 11 L 17 11 L 16 10 L 15 10 z";
const char *media_playback_pause = "m3 3v16h6v-16zm10 0v16h6v-16z";
const char *media_playback_start = "m3 3v16l16-8z";
const char *media_playlist_repeat = "m16 5v2h-10c-1.662 0-3 1.338-3 3v1h1v-1c0-1.108 0.892-2 2-2h10v2l3-2.5zm2 6v1c0 1.108-0.892 2-2 2h-10v-2l-3 2.5 3 2.5v-2h10c1.662 0 3-1.338 3-3v-1z";
const char *media_playlist_shuffle = "M 16 5 L 16 7 L 13 7 C 10.784 7 9 8.784 9 11 C 9 12.662 7.662 14 6 14 L 3 14 L 3 15 L 6 15 C 8.216 15 10 13.216 10 11 C 10 9.338 11.338 8 13 8 L 16 8 L 16 10 L 19 7.5 L 16 5 z M 3 7 L 3 8 L 6 8 C 6.8536128 8 7.6168144 8.3572581 8.1621094 8.9257812 C 8.2578781 8.5814037 8.3956215 8.2568349 8.5742188 7.9570312 C 7.8779048 7.3680394 6.9875937 7 6 7 L 3 7 z M 16 12 L 16 14 L 13 14 C 12.146387 14 11.383186 13.642742 10.837891 13.074219 C 10.742121 13.418597 10.604379 13.743165 10.425781 14.042969 C 11.122095 14.631961 12.012406 15 13 15 L 16 15 L 16 17 L 19 14.5 L 16 12 z";
const char *media_skip_backward = "m0 3v16h2v-16zm2 8 10 8v-16zm10 0 10 8v-16z";
const char *media_skip_forward = "m0 3v16l10-8zm10 8v8l10-8-10-8zm10 0v8h2v-16h-2z";
const char *window = "M 3 3 L 3 7 L 3 18 L 3 19 L 4 19 L 13 19 L 18 19 L 19 19 L 19 18 L 19 13 L 19 7 L 19 3 L 3 3 z M 4 7 L 18 7 L 18 13 L 18 18 L 13 18 L 4 18 L 4 7 z";
const char *draw_brush = "M19.513672 4.00781A2 9 45 0 0 12.06836 9.105469 2 9 45 0 0 8.525391 13.21875c1.07606.34264 1.915172 1.181743 2.257812 2.257812A2 9 45 0 0 14.896484 11.933594 2 9 45 0 0 19.845703 4.15625 2 9 45 0 0 19.513672 4.00781M8 14.664062C3.99999 15.735863 7 18.26795 4 20c4.00339 0 6-2.00082 6-3.335938 0-.66488.0676-1.88944-2-2z";
const char *headphones = "M 11 3 A 8 8 0 0 0 3 11 L 3 19 L 4 19 L 4 17 L 6 19 L 7 19 L 7 13 L 6 13 L 4 15 L 4 11 A 7 7 0 0 1 11 4 A 7 7 0 0 1 18 11 L 18 15 L 16 13 L 15 13 L 15 19 L 16 19 L 18 17 L 18 19 L 19 19 L 19 11 A 8 8 0 0 0 11 3 z";
const char *view_media_playlist = "M 4.5 3 C 3.671579 3 3.000008 3.67157 3 4.5 C 3.000008 5.32843 3.671579 6 4.5 6 C 5.328421 6 5.999992 5.32843 6 4.5 C 5.999992 3.67157 5.328421 3 4.5 3 z M 7 4 L 7 5 L 8 5 L 8 4 L 7 4 z M 9 4 L 9 5 L 19 5 L 19 4 L 9 4 z M 9 6 L 9 7 L 12 7 L 12 6 L 9 6 z M 4.5 9 C 3.671573 8.9999999 3 9.671572 3 10.5 C 3 11.328428 3.671573 12.000001 4.5 12 C 5.328427 12 6 11.328428 6 10.5 C 6 9.671572 5.328427 8.999999 4.5 9 z M 7 10 L 7 11 L 8 11 L 8 10 L 7 10 z M 9 10 L 9 11 L 19 11 L 19 10 L 9 10 z M 9 12 L 9 13 L 13 13 L 13 12 L 9 12 z M 4.5 15 C 3.671573 15 3 15.671572 3 16.5 C 3 17.328428 3.671573 18.000001 4.5 18 C 5.328427 18 6 17.328428 6 16.5 C 6 15.671572 5.328427 14.999999 4.5 15 z M 7 16 L 7 17 L 8 17 L 8 16 L 7 16 z M 9 16 L 9 17 L 19 17 L 19 16 L 9 16 z M 9 18 L 9 19 L 16 19 L 16 18 L 9 18 z";
const char *help_about = "M 11 3 C 6.568 3 3 6.568 3 11 C 3 15.432 6.568 19 11 19 C 15.432 19 19 15.432 19 11 C 19 6.568 15.432 3 11 3 z M 11 4 C 14.878 4 18 7.122 18 11 C 18 14.878 14.878 18 11 18 C 7.122 18 4 14.878 4 11 C 4 7.122 7.122 4 11 4 z M 10 6 L 10 8 L 12 8 L 12 6 L 10 6 z M 10 9 L 10 16 L 12 16 L 12 9 L 10 9 z";

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

		case Icon::MEDIA_OPTICAL_AUDIO:
			svg = media_optical_audio;
			break;

		case Icon::DRAW_BRUSH:
			svg = draw_brush;
			break;

		case Icon::HEADPHONES:
			svg = headphones;
			break;

		case Icon::VIEW_MEDIA_PLAYLIST:
			svg = view_media_playlist;
			break;

		case Icon::HELP_ABOUT:
			svg = help_about;
			break;

		case Icon::WINDOW:
			svg = window;
			break;
	}

	std::stringstream stream;
	stream << std::setfill('0') << std::setw(6) << std::hex << fill_color;

	return fmt::format(base, stream.str(), svg);
}

void icons::set(Fl_Widget &widget, Icon icon, int size)
{
	auto svg = new Fl_SVG_Image(nullptr, get(icon).c_str());
	if (size > 0)
		svg->resize(size, size);

	widget.image(svg);
}
