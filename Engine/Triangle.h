#pragma once
#include "Graphics.h"
class Triangle
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	int x = 400;
	int y = 300;
	int width = 10;
	int height = 10;
	int vx = 0;
	int vy = 0;
	bool inhibitup = false;
	bool inhibitdown = false;
	bool inhibitright = false;
	bool inhibitleft = false;
};