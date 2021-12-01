#include "RedSquare.h"

RedSquare::RedSquare(int m_x, int m_y, int m_vx, int m_vy)
{
	x = m_x;
	y = m_y;
	vx = m_vx;
	vy = m_vy;
}

void RedSquare::Draw(Graphics& gfx) const
{
	gfx.PutPixel(x + 0, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 1, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 2, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 3, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 4, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 5, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 6, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 7, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 8, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 9, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 0, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 1, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 2, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 3, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 4, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 5, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 6, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 7, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 8, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 9, 255, 0, 0);
	gfx.PutPixel(x + 10, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 9, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 8, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 7, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 6, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 5, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 4, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 3, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 2, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 1, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 10, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 9, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 8, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 7, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 6, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 5, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 4, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 3, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 2, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 1, 255, 0, 0);
	gfx.PutPixel(x + 0, y + 0, 255, 0, 0);
}

void RedSquare::Movement()
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

void RedSquare::collect(const Square& square)
{
	const int squareright = square.x + square.width;
	const int squarebottom = square.y + square.height;
	const int redsquareright = x + width;
	const int redsquarebottom = y + height;

	if (
		squareright >= x &&
		square.x <= redsquareright &&
		squarebottom >= y &&
		square.y <= redsquarebottom)
	{
		collected = true;
	}

}

bool RedSquare::Collected() const
{
	return collected;
}
