#pragma once
#include "Graphics.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "RedStar.h"

class RedStar
{
public:
	void Init(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Movement(float dt);
	bool Collide(const Circle& circle);
	bool Collide(const Square& square);
	bool Collide(const Triangle& triangle);
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 20.0f;
	
};

