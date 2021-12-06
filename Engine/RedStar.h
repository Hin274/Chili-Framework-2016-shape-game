#pragma once
#include "Graphics.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

class RedStar
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	bool Collide(const Circle& circle);
	bool Collide(const Square& square);
	bool Collide(const Triangle& triangle);
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 20;
	
};

