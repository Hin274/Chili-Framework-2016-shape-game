#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Triangle
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	float GetX() const;
	float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
	void Control(const Keyboard& kbd);
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	bool inhibitup = false;
	bool inhibitdown = false;
	bool inhibitright = false;
	bool inhibitleft = false;
};