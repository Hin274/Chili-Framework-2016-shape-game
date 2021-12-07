#pragma once
#include "Square.h"
#include "Graphics.h"

class RedSquare
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	bool collect(const Square& square);
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

