#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"
#include "Mouse.h"

class Triangle
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
	void Control(const Keyboard& kbd,float dt);
	void Control(const Mouse& mouse, float dt);
private:
	Vec2 pos = Vec2(400.0f, 300.0f);
	static constexpr float speed = 1.0f * 60.0f;
	static constexpr float width = 10.0f;
	static constexpr float height = 10.0f;
};