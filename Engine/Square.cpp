#include "Square.h"

void Square::ClampToScreen()
{
	//Keep square in screen
	const int right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = 0;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = 0;
	}

	const int bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = 0;
	}

}

void Square::Draw(Graphics& gfx) const
{

	gfx.PutPixel(x + 0, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 1, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 2, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 3, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 4, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 5, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 6, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 7, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 8, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 9, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 0, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 1, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 2, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 3, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 4, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 5, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 6, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 7, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 8, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 9, 255, 255, 0);
	gfx.PutPixel(x + 10, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 9, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 8, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 7, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 6, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 5, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 4, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 3, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 2, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 1, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 10, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 9, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 8, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 7, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 6, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 5, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 4, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 3, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 2, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 1, 255, 255, 0);
	gfx.PutPixel(x + 0, y + 0, 255, 255, 0);
}

int Square::GetX() const
{
	return x;
}

int Square::GetY() const
{
	return y;
}

int Square::GetWidth() const
{
	return width;
}

int Square::GetHeight() const
{
	return height;
}

void Square::Control(const Keyboard& kbd)
{
	//square movement speed up and slow down
	x = x + vx;
	y = y + vy;

	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		if (inhibitright) {

		}
		else {
			vx += 1;
			inhibitright = true;
		}
	}
	else
	{
		inhibitright = false;

	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		if (inhibitleft)
		{

		}
		else {
			vx -= 1;
			inhibitleft = true;
		}
	}
	else
	{
		inhibitleft = false;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		if (inhibitdown) {

		}
		else
		{
			vy += 1;
			inhibitdown = true;
		}
	}
	else {

		inhibitdown = false;
	}

	if (kbd.KeyIsPressed(VK_UP))
	{
		if (inhibitup) {

		}
		else {
			vy -= 1;
			inhibitup = true;
		}
	}
	else {

		inhibitup = false;
	}
}
