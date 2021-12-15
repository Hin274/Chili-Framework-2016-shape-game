#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"

class Square
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
	void Control(const Keyboard& kbd);

private:
	Vec2 pos = Vec2 (400.0f, 300.0f);
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	bool inhibitup = false;
	bool inhibitdown = false;
	bool inhibitright = false;
	bool inhibitleft = false;
};

