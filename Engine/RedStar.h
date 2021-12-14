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
	void Movement(float dt);
	bool Collide(const Circle& circle);
	bool Collide(const Square& square);
	bool Collide(const Triangle& triangle);
private:
	float x = 0.0f;
	float y = 0.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	static constexpr float width = 24.0f;
	static constexpr float height = 20.0f;
	
};

