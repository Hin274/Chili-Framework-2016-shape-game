#include "RedShapes.h"

void RedShapes::cDraw(Graphics& gfx) const
{
		gfx.PutPixel(rcx + 3, rcy + 0, 255, 0, 0);
		gfx.PutPixel(rcx + 4, rcy + 0, 255, 0, 0);
		gfx.PutPixel(rcx + 5, rcy + 0, 255, 0, 0);
		gfx.PutPixel(rcx + 6, rcy + 0, 255, 0, 0);
		gfx.PutPixel(rcx + 7, rcy + 0, 255, 0, 0);
		gfx.PutPixel(rcx + 8, rcy + 1, 255, 0, 0);
		gfx.PutPixel(rcx + 9, rcy + 2, 255, 0, 0);
		gfx.PutPixel(rcx + 10, rcy + 3, 255, 0, 0);
		gfx.PutPixel(rcx + 10, rcy + 4, 255, 0, 0);
		gfx.PutPixel(rcx + 10, rcy + 5, 255, 0, 0);
		gfx.PutPixel(rcx + 10, rcy + 6, 255, 0, 0);
		gfx.PutPixel(rcx + 10, rcy + 7, 255, 0, 0);
		gfx.PutPixel(rcx + 9, rcy + 8, 255, 0, 0);
		gfx.PutPixel(rcx + 8, rcy + 9, 255, 0, 0);
		gfx.PutPixel(rcx + 7, rcy + 10, 255, 0, 0);
		gfx.PutPixel(rcx + 6, rcy + 10, 255, 0, 0);
		gfx.PutPixel(rcx + 5, rcy + 10, 255, 0, 0);
		gfx.PutPixel(rcx + 4, rcy + 10, 255, 0, 0);
		gfx.PutPixel(rcx + 3, rcy + 10, 255, 0, 0);
		gfx.PutPixel(rcx + 2, rcy + 9, 255, 0, 0);
		gfx.PutPixel(rcx + 1, rcy + 8, 255, 0, 0);
		gfx.PutPixel(rcx + 0, rcy + 7, 255, 0, 0);
		gfx.PutPixel(rcx + 0, rcy + 6, 255, 0, 0);
		gfx.PutPixel(rcx + 0, rcy + 5, 255, 0, 0);
		gfx.PutPixel(rcx + 0, rcy + 4, 255, 0, 0);
		gfx.PutPixel(rcx + 0, rcy + 3, 255, 0, 0);
		gfx.PutPixel(rcx + 1, rcy + 2, 255, 0, 0);
		gfx.PutPixel(rcx + 2, rcy + 1, 255, 0, 0);

}

void RedShapes::cMovement()
{
	rcx += rcvx;
	rcy += rcvy;

	const int right = rcx + width;
	if (rcx < 0)
	{
		rcx = 0;
		rcvx = -rcvx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		rcx = (Graphics::ScreenWidth - 1) - width;
		rcvx = -rcvx;
	}

	const int bottom = rcy + height;
	if (rcy < 0)
	{
		rcy = 0;
		rcvy = -rcvy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		rcy = (Graphics::ScreenHeight - 1) - height;
		rcvy = -rcvy;
	}

}

void RedShapes::sDraw(Graphics& gfx) const
{
	gfx.PutPixel(rsx + 0, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 1, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 2, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 3, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 4, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 5, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 6, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 7, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 8, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 9, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 0, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 1, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 2, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 3, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 4, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 5, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 6, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 7, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 8, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 9, 255, 0, 0);
	gfx.PutPixel(rsx + 10, rsy + 10, 255, 0, 0);
	gfx.PutPixel(rsx + 9, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 8, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 7, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 6, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 5, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 4, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 3, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 2, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 1, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 0, rsy + 10, 255,0, 0);
	gfx.PutPixel(rsx + 0, rsy + 9, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 8, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 7, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 6, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 5, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 4, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 3, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 2, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 1, 255, 0, 0);
	gfx.PutPixel(rsx + 0, rsy + 0, 255, 0, 0);
}

void RedShapes::sMovement()
{
	rsx += rsvx;
	rsy += rsvy;

	const int right = rsx + width;
	if (rsx < 0)
	{
		rsx = 0;
		rsvx = -rsvx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		rsx = (Graphics::ScreenWidth - 1) - width;
		rsvx = -rsvx;
	}

	const int bottom = rsy + height;
	if (rsy < 0)
	{
		rsy = 0;
		rsvy = -rsvy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		rsy = (Graphics::ScreenHeight - 1) - height;
		rsvy = -rsvy;
	}

}

void RedShapes::tDraw(Graphics& gfx) const
{

	gfx.PutPixel(rtx + 0, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 1, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 2, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 3, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 4, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 5, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 6, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 7, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 8, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 9, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 10, rty + 10, 255, 0, 0);
	gfx.PutPixel(rtx + 5, rty + 0, 255, 0, 0);
	gfx.PutPixel(rtx + 4.5, rty + 1, 255, 0, 0);
	gfx.PutPixel(rtx + 4, rty + 2, 255, 0, 0);
	gfx.PutPixel(rtx + 3.5, rty + 3, 255, 0, 0);
	gfx.PutPixel(rtx + 3, rty + 4, 255, 0, 0);
	gfx.PutPixel(rtx + 2.5, rty + 5, 255, 0, 0);
	gfx.PutPixel(rtx + 2, rty + 6, 255, 0, 0);
	gfx.PutPixel(rtx + 1.5, rty + 7, 255, 0, 0);
	gfx.PutPixel(rtx + 1, rty + 8, 255, 0, 0);
	gfx.PutPixel(rtx + 0.5, rty + 9, 255, 0, 0);
	gfx.PutPixel(rtx + 9.5, rty + 9, 255, 0, 0);
	gfx.PutPixel(rtx + 9, rty + 8, 255, 0, 0);
	gfx.PutPixel(rtx + 8.5, rty + 7, 255, 0, 0);
	gfx.PutPixel(rtx + 8, rty + 6, 255, 0, 0);
	gfx.PutPixel(rtx + 7.5, rty + 5, 255, 0, 0);
	gfx.PutPixel(rtx + 7, rty + 4, 255, 0, 0);
	gfx.PutPixel(rtx + 6.5, rty + 3, 255, 0, 0);
	gfx.PutPixel(rtx + 6, rty + 2, 255, 0, 0);
	gfx.PutPixel(rtx + 5.5, rty + 1, 255, 0, 0);
}

void RedShapes::tMovement()
{
	rtx += rtvx;
	rty += rtvy;

	const int right = rtx + width;
	if (rtx < 0)
	{
		rtx = 0;
		rtvx = -rtvx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		rtx = (Graphics::ScreenWidth - 1) - width;
		rtvx = -rtvx;
	}

	const int bottom = rty + height;
	if (rty < 0)
	{
		rty = 0;
		rtvy = -rtvy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		rty = (Graphics::ScreenHeight - 1) - height;
		rtvy = -rtvy;
	}

}

void RedShapes::collectC(const Circle&circle)
{
	const int circleright = circle.x + circle.width;
	const int circlebottom = circle.y + circle.height;
	const int redcircleright = rcx + width;
	const int redcirclebottom = rcy + height;

	if (
		circleright >= rcx &&
		circle.x <= redcircleright &&
		circlebottom >= rcy &&
		circle.y <= redcirclebottom)
	{
		collected = true;
	}

}

void RedShapes::collectS(const Square& square)
{
	const int squareright = square.x + square.width;
	const int squarebottom = square.y + square.height;
	const int redsquareright = rsx + width;
	const int redsquarebottom = rsy + height;

	if (
		squareright >= rsx &&
		square.x <= redsquareright &&
		squarebottom >= rsy &&
		square.y <= redsquarebottom)
	{
		collected = true;
	}

}

void RedShapes::collectT(const Triangle& triangle)
{
	const int triangleright = triangle.x + triangle.width;
	const int trianglebottom = triangle.y + triangle.height;
	const int redtriangleright = rtx + width;
	const int redtrianglebottom = rty + height;

	if (
		triangleright >= rtx &&
		triangle.x <= redtriangleright &&
		trianglebottom >= rty &&
		triangle.y <= redtrianglebottom)
	{
		collected = true;
	}
}
