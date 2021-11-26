#include "Triangle.h"

void Triangle::ClampToScreen()
{
	const int right = x + width;
	if (x < 0)
	{
		x = 0;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	const int bottom = y + height;
	if (y < 0)
	{
		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}
}

void Triangle::Draw(Graphics& gfx) const
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
	gfx.PutPixel(x + 0.5, y - 1, 255, 255, 0);
	gfx.PutPixel(x + 1, y - 2, 255, 255, 0);
	gfx.PutPixel(x + 1.5, y - 3, 255, 255, 0);
	gfx.PutPixel(x + 2, y - 4, 255, 255, 0);
	gfx.PutPixel(x + 2.5, y - 5, 255, 255, 0);
	gfx.PutPixel(x + 3, y - 6, 255, 255, 0);
	gfx.PutPixel(x + 3.5, y - 7, 255, 255, 0);
	gfx.PutPixel(x + 4, y - 8, 255, 255, 0);
	gfx.PutPixel(x + 4.5, y - 9, 255, 255, 0);
	gfx.PutPixel(x + 5, y - 10, 255, 255, 0);
	gfx.PutPixel(x + 5.5, y - 9, 255, 255, 0);
	gfx.PutPixel(x + 6, y - 8, 255, 255, 0);
	gfx.PutPixel(x + 6.5, y - 7, 255, 255, 0);
	gfx.PutPixel(x + 7, y - 6, 255, 255, 0);
	gfx.PutPixel(x + 7.5, y - 5, 255, 255, 0);
	gfx.PutPixel(x + 8, y - 4, 255, 255, 0);
	gfx.PutPixel(x + 8.5, y - 3, 255, 255, 0);
	gfx.PutPixel(x + 9, y - 2, 255, 255, 0);
	gfx.PutPixel(x + 9.5, y - 1, 255, 255, 0);
}
