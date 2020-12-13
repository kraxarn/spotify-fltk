#include "trackcolumn.hpp"

track_column::track_column(int column, int reverse)
	: column(column), reverse(reverse)
{
}

bool track_column::operator()(const track_row &row1, const track_row &row2) const
{
	auto str1 = column < row1.columns.size()
		? row1.columns[column]
		: std::string();

	auto str2 = column < row2.columns.size()
		? row2.columns[column]
		: std::string();

	// Alphabetical sort
	return reverse
		? str1 > str2
		: str1 < str2;
}
