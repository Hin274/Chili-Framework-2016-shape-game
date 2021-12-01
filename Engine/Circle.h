#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Circle
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
	void Control(const Keyboard& kbd);

private:
	int x = 400;
	int y = 300;
	static constexpr int width = 10;
	static constexpr int height = 10;
	int vx = 0;
	int vy = 0;
	bool inhibitup = false;
	bool inhibitdown = false;
	bool inhibitright = false;
	bool inhibitleft = false;
};

