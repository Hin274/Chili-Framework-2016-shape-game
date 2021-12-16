#include "Circle.h"

void Circle::ClampToScreen()
{
	//circle keeps in screen
	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
	
	}
	else if (right >= float( Graphics::ScreenWidth))
	{
		pos.x = float (Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
	}
	else if (bottom >= float( Graphics::ScreenHeight))
	{
		pos.y = float (Graphics::ScreenHeight - 1) - height;
	}

}

void Circle::Draw(Graphics& gfx) const
{
	const int x_int = int(pos.x);
	const int y_int = int(pos.y);

	gfx.PutPixel(x_int + 3, y_int + 0, 255, 255, 0);
	gfx.PutPixel(x_int + 4, y_int + 0, 255, 255, 0);
	gfx.PutPixel(x_int + 5, y_int + 0, 255, 255, 0);
	gfx.PutPixel(x_int + 6, y_int + 0, 255, 255, 0);
	gfx.PutPixel(x_int + 7, y_int + 0, 255, 255, 0);
	gfx.PutPixel(x_int + 8, y_int + 1, 255, 255, 0);
	gfx.PutPixel(x_int + 9, y_int + 2, 255, 255, 0);
	gfx.PutPixel(x_int + 10, y_int + 3, 255, 255, 0);
	gfx.PutPixel(x_int + 10, y_int + 4, 255, 255, 0);
	gfx.PutPixel(x_int + 10, y_int + 5, 255, 255, 0);
	gfx.PutPixel(x_int + 10, y_int + 6, 255, 255, 0);
	gfx.PutPixel(x_int + 10, y_int + 7, 255, 255, 0);
	gfx.PutPixel(x_int + 9, y_int + 8, 255, 255, 0);
	gfx.PutPixel(x_int + 8, y_int + 9, 255, 255, 0);
	gfx.PutPixel(x_int + 7, y_int + 10, 255, 255, 0);
	gfx.PutPixel(x_int + 6, y_int + 10, 255, 255, 0);
	gfx.PutPixel(x_int + 5, y_int + 10, 255, 255, 0);
	gfx.PutPixel(x_int + 4, y_int + 10, 255, 255, 0);
	gfx.PutPixel(x_int + 3, y_int + 10, 255, 255, 0);
	gfx.PutPixel(x_int + 2, y_int + 9, 255, 255, 0);
	gfx.PutPixel(x_int + 1, y_int + 8, 255, 255, 0);
	gfx.PutPixel(x_int + 0, y_int + 7, 255, 255, 0);
	gfx.PutPixel(x_int + 0, y_int + 6, 255, 255, 0);
	gfx.PutPixel(x_int + 0, y_int + 5, 255, 255, 0);
	gfx.PutPixel(x_int + 0, y_int + 4, 255, 255, 0);
	gfx.PutPixel(x_int + 0, y_int + 3, 255, 255, 0);
	gfx.PutPixel(x_int + 1, y_int + 2, 255, 255, 0);
	gfx.PutPixel(x_int + 2, y_int + 1, 255, 255, 0);
		
}

Vec2 Circle::GetPos() const
{
	return pos;
}


float Circle::GetWidth() const
{
	return width;
}

float Circle::GetHeight() const
{
	return height;
}

void Circle::Control(const Keyboard& kbd,float dt)
{
	Vec2 vel(0.0f, 0.0f);
	pos.x = pos.x + vel.x;
	pos.y = pos.y + vel.y;

	if (kbd.KeyIsPressed(VK_RIGHT))
	{
			vel.x += 1.0f;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
			vel.x -= 1.0f;
	}
	
	if (kbd.KeyIsPressed(VK_DOWN))
	{

			vel.y += 1;
	}

	if (kbd.KeyIsPressed(VK_UP))
	{
		
			vel.y -= 1;

	}
	pos += vel.GetNormalized() * speed * dt;

}

void Circle::Control(const Mouse& mouse, float dt)
{
	if (mouse.LeftIsPressed())
	{
		const Vec2 center = pos + Vec2(float(width) / 2.0f, float(height) / 2.0f);
		const Vec2 toPointer = Vec2(float(mouse.GetPosX()), float(mouse.GetPosY()))-center;
		if (toPointer.GetLengthsq()>2.0f)
		{
			pos += toPointer.GetNormalized() * speed * dt;
		}
	}

}

