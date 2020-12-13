#pragma once

#include "trackrow.hpp"

class track_column
{
private:
	int column;
	int reverse;

public:
	track_column(int column, int reverse);

	bool operator()(const track_row &row1, const track_row &row2) const;
};
