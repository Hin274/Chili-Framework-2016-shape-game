#pragma once
#include "Square.h"
#include "Graphics.h"

class RedSquare
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Draw(Graphics& gfx) const;
	void Movement(float dt);
	void collection(const Square& square);
	bool collect(const Square& square);
	bool Collected() const;
private:
	float x = 0.0f;
	float y = 0.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	bool collected = false;
};

