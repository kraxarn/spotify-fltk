#pragma once

#include "../colors.hpp"
#include "trackcolumn.hpp"
#include "trackrow.hpp"
#include "../custombox.hpp"

#include <algorithm>
#include <array>
#include <string>
#include <vector>
#include <iostream>

#include "FL/Fl_Table_Row.H"
#include "FL/fl_draw.H"

class track_list: public Fl_Table_Row
{
private:
	std::vector<track_row> row_data;
	std::array<std::string, 6> headers;

	int sort_reverse;
	int sort_last_column;

protected:
	void draw_cell(TableContext context, int r, int c, int x, int y, int w, int h) override;
	void sort_column(int column, int reverse = 0);
	void draw_sort_arrow(int x, int y, int w, int h) const;

	void resize(int x, int y, int w, int h) override;

public:
	explicit track_list(Fl_Widget &parent);

	void add(const std::array<std::string, 5> &cells);
};
