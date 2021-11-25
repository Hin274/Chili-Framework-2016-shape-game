#pragma once
#include "Graphics.h"
class Car
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	int x = 400;
	int y = 550;
	int width = 29;
	int height = 66;
	int vx = 0;
	int vy = 0;
	bool inhibitup = false;
	bool inhibitdown = false;
	bool inhibitright = false;
	bool inhibitleft = false;
};

