#include "RedTriangle.h"

void RedTriangle::Init(int in_x, int in_y, int in_vx, int in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void RedTriangle::Draw(Graphics& gfx) const
{

	gfx.PutPixel(x + 0, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 1, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 2, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 3, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 4, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 5, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 6, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 7, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 8, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 9, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 5, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 4.5, y + 1, 255, 0, 0);
	gfx.PutPixel(x + 4, y + 2, 255, 0, 0);
	gfx.PutPixel(x + 3.5, y + 3, 255, 0, 0);
	gfx.PutPixel(x + 3, y + 4, 255, 0, 0);
	gfx.PutPixel(x + 2.5, y + 5, 255, 0, 0);
	gfx.PutPixel(x + 2, y + 6, 255, 0, 0);
	gfx.PutPixel(x + 1.5, y + 7, 255, 0, 0);
	gfx.PutPixel(x + 1, y + 8, 255, 0, 0);
	gfx.PutPixel(x + 0.5, y + 9, 255, 0, 0);
	gfx.PutPixel(x + 9.5, y + 9, 255, 0, 0);
	gfx.PutPixel(x + 9, y + 8, 255, 0, 0);
	gfx.PutPixel(x + 8.5, y + 7, 255, 0, 0);
	gfx.PutPixel(x + 8, y + 6, 255, 0, 0);
	gfx.PutPixel(x + 7.5, y + 5, 255, 0, 0);
	gfx.PutPixel(x + 7, y + 4, 255, 0, 0);
	gfx.PutPixel(x + 6.5, y + 3, 255, 0, 0);
	gfx.PutPixel(x + 6, y + 2, 255, 0, 0);
	gfx.PutPixel(x + 5.5, y + 1, 255, 0, 0);
}

void RedTriangle::Movement()
{
	x += vx;
	y += vy;

	const int right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}

}

bool RedTriangle::collect(const Triangle& triangle)
{
	const int triangleright = triangle.GetX() + triangle.GetWidth();
	const int trianglebottom = triangle.GetY() + triangle.GetHeight();
	const int redtriangleright = x + width;
	const int redtrianglebottom = y + height;

	return
		triangleright >= x &&
		triangle.GetX() <= redtriangleright &&
		trianglebottom >= y &&
		triangle.GetY() <= redtrianglebottom;
}

bool RedTriangle::Collected() const
{
	return collected;
}
