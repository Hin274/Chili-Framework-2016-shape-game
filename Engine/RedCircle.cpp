#include "RedCircle.h"

void RedCircle::Init(int in_x, int in_y, int in_vx, int in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;

}

void RedCircle::Draw(Graphics& gfx) const
{
		gfx.PutPixel(x + 3, y + 0, 255, 0, 0);
		gfx.PutPixel(x + 4, y + 0, 255, 0, 0);
		gfx.PutPixel(x + 5, y + 0, 255, 0, 0);
		gfx.PutPixel(x + 6, y + 0, 255, 0, 0);
		gfx.PutPixel(x + 7, y + 0, 255, 0, 0);
		gfx.PutPixel(x + 8, y + 1, 255, 0, 0);
		gfx.PutPixel(x + 9, y + 2, 255, 0, 0);
		gfx.PutPixel(x + 10,y + 3, 255, 0, 0);
		gfx.PutPixel(x + 10,y + 4, 255, 0, 0);
		gfx.PutPixel(x + 10,y + 5, 255, 0, 0);
		gfx.PutPixel(x + 10,y + 6, 255, 0, 0);
		gfx.PutPixel(x + 10,y + 7, 255, 0, 0);
		gfx.PutPixel(x + 9, y + 8, 255, 0, 0);
		gfx.PutPixel(x + 8, y + 9, 255, 0, 0);
		gfx.PutPixel(x + 7, y + 10, 255, 0, 0);
		gfx.PutPixel(x + 6, y + 10, 255, 0, 0);
		gfx.PutPixel(x + 5, y + 10, 255, 0, 0);
		gfx.PutPixel(x + 4, y + 10, 255, 0, 0);
		gfx.PutPixel(x + 3, y + 10, 255, 0, 0);
		gfx.PutPixel(x + 2, y + 9, 255, 0, 0);
		gfx.PutPixel(x + 1, y + 8, 255, 0, 0);
		gfx.PutPixel(x + 0, y + 7, 255, 0, 0);
		gfx.PutPixel(x + 0, y + 6, 255, 0, 0);
		gfx.PutPixel(x + 0, y + 5, 255, 0, 0);
		gfx.PutPixel(x + 0, y + 4, 255, 0, 0);
		gfx.PutPixel(x + 0, y + 3, 255, 0, 0);
		gfx.PutPixel(x + 1, y + 2, 255, 0, 0);
		gfx.PutPixel(x + 2, y + 1, 255, 0, 0);

}

void RedCircle::Movement()
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

//void RedCircle::collect(const Circle&circle)
//{
//	const int circleright = circle.GetX() + circle.GetWidth();
//	const int circlebottom = circle.GetY() + circle.GetHeight();
//	const int redcircleright = x + width;
//	const int redcirclebottom = y + height;
//
//	if (
//		circleright >= x &&
//		circle.GetX() <= redcircleright &&
//		circlebottom >= y &&
//		circle.GetY() <= redcirclebottom)
//	{
//		collected = true;
//	}
//
//}

bool RedCircle::collect(const Circle& circle)
{
	const int circleright = circle.GetX() + circle.GetWidth();
	const int circlebottom = circle.GetY() + circle.GetHeight();
	const int redcircleright = x + width;
	const int redcirclebottom = y + height;

	return
		circleright >= x &&
		circle.GetX() <= redcircleright &&
		circlebottom >= y &&
		circle.GetY() <= redcirclebottom;
}

bool RedCircle::Collected() const
{
	return collected;
}


