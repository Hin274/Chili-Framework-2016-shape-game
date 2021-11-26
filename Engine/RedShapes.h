#pragma once
#include "Graphics.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
class RedShapes
{
public:
	void cDraw(Graphics& gfx) const;
	void sDraw(Graphics& gfx) const;
	void tDraw(Graphics& gfx) const;
	void collectC(const Circle& circle);
	int x;
	int y;
	int vx;
	int vy;
	int width = 10;
	int height = 10;
	bool collected = false;
};

