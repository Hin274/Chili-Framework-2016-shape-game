#pragma once
#include "Graphics.h"
#include "Circle.h"
#include "Vec2.h"


class RedCircle
{
public:
	void Init(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Movement(float dt);
	void collection(const Circle& circle);
	bool collect(const Circle& circle);
	bool Collected() const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	bool collected = false;
};

