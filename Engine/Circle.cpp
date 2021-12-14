#include "Circle.h"

void Circle::ClampToScreen()
{
	//circle keeps in screen
	const float right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = 0;
	}
	else if (right >= float( Graphics::ScreenWidth))
	{
		x = float (Graphics::ScreenWidth - 1) - width;
		vx = 0;
	}

	const float bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = 0;
	}
	else if (bottom >= float( Graphics::ScreenHeight))
	{
		y = float (Graphics::ScreenHeight - 1) - height;
		vy = 0;
	}

}

void Circle::Draw(Graphics& gfx) const
{
	const int x_int = int(x);
	const int y_int = int(y);

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

float Circle::GetX() const
{
	return x;
}

float Circle::GetY() const
{
	return y;
}

float Circle::GetWidth() const
{
	return width;
}

float Circle::GetHeight() const
{
	return height;
}

void Circle::Control(const Keyboard& kbd)
{
	//circle movement speed up and slow down
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

