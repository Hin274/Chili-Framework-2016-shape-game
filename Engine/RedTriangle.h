#pragma once
#include "Triangle.h"
#include "Graphics.h"

class RedTriangle
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Draw(Graphics& gfx) const;
	void Movement();
	void collection(const Triangle& triangle);
	bool collect(const Triangle& triangle);
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

