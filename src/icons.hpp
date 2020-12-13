#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "lib/format.hpp"

enum class Icon
{
	APPLICATION_MENU,
	EDIT_FIND
};

class icons
{
public:
	static std::string get(Icon icon);

private:
	static unsigned int fill_color;
};
