#pragma once

enum class Icon
{
	APPLICATION_MENU,
	EDIT_FIND
};

class icons
{
public:
	static const char *get(Icon icon);
};
