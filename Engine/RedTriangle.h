#pragma once
#include "Triangle.h"
#include "Graphics.h"

class RedTriangle
{
public:
	void Init(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Movement(float dt);
	void collection(const Triangle& triangle);
	bool collect(const Triangle& triangle);
	bool Collected() const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	bool collected = false;
};

