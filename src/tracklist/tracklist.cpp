#include "tracklist.hpp"

track_list::track_list(Fl_Widget &parent)
	: sort_reverse(0),
	sort_last_column(-1),
	headers({
		"#", "Title", "Artist",
		"Album", "Length", "Added"
	}),
	Fl_Table_Row(parent.x() + 250, parent.y(), parent.w() - 570, parent.h())
{
	// #
	col_width(0, 50);
	// Length
	col_width(4, 70);

	cols(headers.size());
	col_header(true);
	col_resize(false);
	when(FL_WHEN_RELEASE);

	end();
}

void track_list::draw_cell(Fl_Table::TableContext context, int r, int c, int x, int y, int w, int h)
{
	auto str = r < row_data.size() && c < row_data[r].columns.size()
		? row_data[r].columns[c]
		: std::string("(no data)");

	switch (context)
	{
		case Fl_Table::CONTEXT_COL_HEADER:
			fl_push_clip(x, y, w, h);
			{
				fl_draw_box(CUSTOM_BOX, x, y, w, h, FL_BACKGROUND2_COLOR);
				if (c < 9 || true)
				{
					fl_font(labelfont(), labelsize());
					fl_color(labelcolor());
					fl_draw(headers[c].c_str(), x + 2, y, w, h, FL_ALIGN_LEFT);
					if (c == sort_last_column)
						draw_sort_arrow(x, y, w, h);
				}
			}
			fl_pop_clip();
			return;

		case Fl_Table::CONTEXT_CELL:
			fl_push_clip(x, y, w, h);
			{
				// Background
				auto bg_color = row_selected(r)
					? selection_color()
					: c == 0
						? FL_BACKGROUND2_COLOR
						: color();
				fl_color(bg_color);
				fl_rectf(x, y, w, h);

				fl_font(labelfont(), labelsize());
				fl_color(labelcolor());
				fl_draw(str.c_str(), x + 2, y, w, h, FL_ALIGN_LEFT);
			}
			fl_pop_clip();
			return;

		default:
			return;
	}
}

void track_list::sort_column(int column, int reverse)
{
	std::sort(row_data.begin(), row_data.end(), track_column(column, reverse));
	redraw();
}

void track_list::draw_sort_arrow(int x, int y, int w, int h) const
{
	int xlft = x + (w - 6) - 8;
	int xctr = x + (w - 6) - 4;
	int xrit = x + (w - 6) - 0;
	int ytop = y + (h / 2) - 4;
	int ybot = y + (h / 2) + 4;

	if (sort_reverse)
	{
		// Down arrow
		fl_color(FL_WHITE);
		fl_line(xrit, ytop, xctr, ybot);
		fl_color(41);
		fl_line(xlft, ytop, xrit, ytop);
		fl_line(xlft, ytop, xctr, ybot);
	}
	else
	{
		// Up arrow
		fl_color(FL_WHITE);
		fl_line(xrit, ybot, xctr, ytop);
		fl_line(xrit, ybot, xlft, ybot);
		fl_color(41);
		fl_line(xlft, ybot, xctr, ytop);
	}
}

void track_list::add(const std::array<std::string, 5> &cells)
{
	track_row new_row;

	new_row.columns.push_back(std::to_string(row_data.size() + 1));
	for (auto &cell : cells)
		new_row.columns.push_back(cell);

	row_data.push_back(new_row);

	rows(row_data.size());
}

void track_list::resize(int x, int y, int w, int h)
{
	Fl_Table::resize(x, y, w, h);

	auto p = (w - col_width(0) - col_width(4) - 15) / 4;

	// Title
	col_width(1, p);
	// Artist
	col_width(2, p);
	// Album
	col_width(3, p);
	// Added
	col_width(5, p);
}
