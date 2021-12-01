#pragma once
#include "Graphics.h"
#include "Circle.h"


class RedCircle
{
public:
	RedCircle(int m_x, int m_y, int m_vx, int m_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	void collect(const Circle& circle);
	bool Collected() const;
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 10;
	static constexpr int height = 10;
	bool collected = false;
};

