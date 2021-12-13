#pragma once
#include "Graphics.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

class RedStar
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	bool Collide(const Circle& circle);
	bool Collide(const Square& square);
	bool Collide(const Triangle& triangle);
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 24.0f;
	static constexpr float height = 20.0f;
	
};

