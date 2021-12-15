#include "RedCircle.h"

void RedCircle::Init(const Vec2& pos_in, const Vec2& vel_in)
{
	pos = pos_in;
	vel = vel_in;

}

void RedCircle::Draw(Graphics& gfx) const
{
	const int x_int = int(pos.x);
	const int y_int = int(pos.y);

		gfx.PutPixel(x_int + 3, y_int + 0, 255, 0, 0);
		gfx.PutPixel(x_int + 4, y_int + 0, 255, 0, 0);
		gfx.PutPixel(x_int + 5, y_int + 0, 255, 0, 0);
		gfx.PutPixel(x_int + 6, y_int + 0, 255, 0, 0);
		gfx.PutPixel(x_int + 7, y_int + 0, 255, 0, 0);
		gfx.PutPixel(x_int + 8, y_int + 1, 255, 0, 0);
		gfx.PutPixel(x_int + 9, y_int + 2, 255, 0, 0);
		gfx.PutPixel(x_int + 10,y_int + 3, 255, 0, 0);
		gfx.PutPixel(x_int + 10,y_int + 4, 255, 0, 0);
		gfx.PutPixel(x_int + 10,y_int + 5, 255, 0, 0);
		gfx.PutPixel(x_int + 10,y_int + 6, 255, 0, 0);
		gfx.PutPixel(x_int + 10,y_int + 7, 255, 0, 0);
		gfx.PutPixel(x_int + 9, y_int + 8, 255, 0, 0);
		gfx.PutPixel(x_int + 8, y_int + 9, 255, 0, 0);
		gfx.PutPixel(x_int + 7, y_int + 10, 255, 0, 0);
		gfx.PutPixel(x_int + 6, y_int + 10, 255, 0, 0);
		gfx.PutPixel(x_int + 5, y_int + 10, 255, 0, 0);
		gfx.PutPixel(x_int + 4, y_int + 10, 255, 0, 0);
		gfx.PutPixel(x_int + 3, y_int + 10, 255, 0, 0);
		gfx.PutPixel(x_int + 2, y_int + 9, 255, 0, 0);
		gfx.PutPixel(x_int + 1, y_int + 8, 255, 0, 0);
		gfx.PutPixel(x_int + 0, y_int + 7, 255, 0, 0);
		gfx.PutPixel(x_int + 0, y_int + 6, 255, 0, 0);
		gfx.PutPixel(x_int + 0, y_int + 5, 255, 0, 0);
		gfx.PutPixel(x_int + 0, y_int + 4, 255, 0, 0);
		gfx.PutPixel(x_int + 0, y_int + 3, 255, 0, 0);
		gfx.PutPixel(x_int + 1, y_int + 2, 255, 0, 0);
		gfx.PutPixel(x_int + 2, y_int + 1, 255, 0, 0);

}

void RedCircle::Movement(float dt)
{
	pos.x += vel.x*dt;
	pos.y += vel.y*dt;

	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
		vel.x = -vel.x;
	}
	else if (right >= float(Graphics::ScreenWidth))
	{
		pos.x = float (Graphics::ScreenWidth - 1) - width;
		vel.x = -vel.x;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
		vel.y = -vel.y;
	}
	else if (bottom >= float(Graphics::ScreenHeight))
	{
		pos.y = float(Graphics::ScreenHeight - 1) - height;
		vel.y = -vel.y;
	}

}

void RedCircle::collection(const Circle&circle)
{
	const float circleright = circle.GetPos().x + circle.GetWidth();
	const float circlebottom = circle.GetPos().y + circle.GetHeight();
	const float redcircleright = pos.x + width;
	const float redcirclebottom = pos.y + height;

	if (
		circleright >= pos.x &&
		circle.GetPos().x <= redcircleright &&
		circlebottom >= pos.y &&
		circle.GetPos().y <= redcirclebottom)
	{
		collected = true;
	}

}

bool RedCircle::collect(const Circle& circle)
{
	const float circleright = circle.GetPos().x + circle.GetWidth();
	const float circlebottom = circle.GetPos().y + circle.GetHeight();
	const float redcircleright = pos.x + width;
	const float redcirclebottom = pos.y + height;

	return
		circleright >= pos.x &&
		circle.GetPos().x <= redcircleright &&
		circlebottom >= pos.y &&
		circle.GetPos().y <= redcirclebottom;
}

bool RedCircle::Collected() const
{
	return collected;
}


