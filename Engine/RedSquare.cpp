#include "RedSquare.h"

void RedSquare::Init(float in_x, float in_y, float in_vx, float in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void RedSquare::Draw(Graphics& gfx) const
{
	const int x_int = int(x);
	const int y_int = int(y);

	gfx.PutPixel(x_int + 0, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 0, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 1, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 2, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 3, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 4, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 5, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 6, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 7, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 8, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 9, 255, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 10, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 9, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 8, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 7, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 6, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 5, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 4, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 3, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 2, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 1, 255, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 0, 255, 0, 0);
}

void RedSquare::Movement(float dt)
{
	x += vx*dt;
	y += vy*dt;

	const float right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= float(Graphics::ScreenWidth))
	{
		x = float(Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= float( Graphics::ScreenHeight))
	{
		y = float (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}

}

void RedSquare::collection(const Square& square)
{
	const float squareright = square.GetX() + square.GetWidth();
	const float squarebottom = square.GetY() + square.GetHeight();
	const float redsquareright = x + width;
	const float redsquarebottom = y + height;

	if (
		squareright >= x &&
		square.GetX() <= redsquareright &&
		squarebottom >= y &&
		square.GetY() <= redsquarebottom
		)
	{
		collected = true;
	}
}

bool RedSquare::collect(const Square& square)
{
	const float squareright = square.GetX() + square.GetWidth();
	const float squarebottom = square.GetY() + square.GetHeight();
	const float redsquareright = x + width;
	const float redsquarebottom = y + height;

	return
		squareright >= x &&
		square.GetX() <= redsquareright &&
		squarebottom >= y &&
		square.GetY() <= redsquarebottom;
}

bool RedSquare::Collected() const
{
	return collected;
}
