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
	void collectS(const Square& square);
	void collectT(const Triangle& triangle);
	int rcx;
	int rcy;
	int rcvx;
	int rcvy;
	int rsx;
	int rsy;
	int rsvx;
	int rsvy;
	int rtx;
	int rty;
	int rtvx;
	int rtvy;
	static constexpr int width = 10;
	static constexpr int height = 10;
	bool collected = false;
};

