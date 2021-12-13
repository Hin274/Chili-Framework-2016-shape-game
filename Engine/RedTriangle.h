#pragma once
#include "Triangle.h"
#include "Graphics.h"

class RedTriangle
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	void collection(const Triangle& triangle);
	bool collect(const Triangle& triangle);
	bool Collected() const;
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	bool collected = false;
};

