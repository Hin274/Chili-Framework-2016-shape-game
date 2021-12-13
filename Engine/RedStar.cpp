#include "RedStar.h"
#include "Circle.h"

void RedStar::Init(float in_x, float in_y, float in_vx, float in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void RedStar::Draw(Graphics& gfx) const 
{
	gfx.PutPixel(x + 0, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 0, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 0, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 1, y + 9, 236, 28, 36);
	gfx.PutPixel(x + 1, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 1, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 2, y + 9, 236, 28, 36);
	gfx.PutPixel(x + 2, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 2, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 2, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 3, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 3, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 3, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 4, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 4, y + 11, 236, 28, 36);
	gfx.PutPixel(x + 4, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 4, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 4, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 11, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 5, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 17, 235, 28, 36);
	gfx.PutPixel(x + 5, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 5, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 14, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 15, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 6, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 6, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 13, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 14, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 7, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 7, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 8, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 8, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 8, y + 19, 235, 28, 36);
	gfx.PutPixel(x + 8, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 6, 235, 28, 36);
	gfx.PutPixel(x + 9, y + 7, 236, 28, 36);
	gfx.PutPixel(x + 9, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 9, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 9, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 9, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 9, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 3, 236, 28, 36);
	gfx.PutPixel(x + 10, y + 4, 236, 28, 36);
	gfx.PutPixel(x + 10, y + 5, 236, 28, 36);
	gfx.PutPixel(x + 10, y + 6, 236, 28, 36);
	gfx.PutPixel(x + 10, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 8, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 10, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 10, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 1, 236, 28, 36);
	gfx.PutPixel(x + 11, y + 2, 236, 28, 36);
	gfx.PutPixel(x + 11, y + 3, 236, 28, 36);
	gfx.PutPixel(x + 11, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 8, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 11, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 11, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 11, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 0, 236, 28, 36);
	gfx.PutPixel(x + 12, y + 1, 236, 28, 36);
	gfx.PutPixel(x + 12, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 8, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 12, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 12, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 1, 236, 28, 36);
	gfx.PutPixel(x + 13, y + 2, 236, 28, 36);
	gfx.PutPixel(x + 13, y + 3, 236, 28, 36);
	gfx.PutPixel(x + 13, y + 4, 235, 28, 36);
	gfx.PutPixel(x + 13, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 8, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 13, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 13, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 13, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 4, 236, 28, 36);
	gfx.PutPixel(x + 14, y + 5, 236, 28, 36);
	gfx.PutPixel(x + 14, y + 6, 236, 28, 36);
	gfx.PutPixel(x + 14, y + 7, 236, 28, 36);
	gfx.PutPixel(x + 14, y + 8, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 14, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 14, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 6, 236, 28, 36);
	gfx.PutPixel(x + 15, y + 7, 236, 28, 36);
	gfx.PutPixel(x + 15, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 15, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 15, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 15, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 15, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 16, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 16, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 16, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 16, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 17, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 17, y + 13, 236, 28, 36);
	gfx.PutPixel(x + 17, y + 14, 236, 28, 36);
	gfx.PutPixel(x + 17, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 17, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 17, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 11, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 14, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 15, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 16, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 18, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 18, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 11, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 12, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 19, y + 17, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 18, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 19, 236, 28, 36);
	gfx.PutPixel(x + 19, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 20, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 20, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 20, y + 11, 236, 28, 36);
	gfx.PutPixel(x + 20, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 20, y + 20, 236, 28, 36);
	gfx.PutPixel(x + 21, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 21, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 21, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 21, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 22, y + 9, 236, 28, 36);
	gfx.PutPixel(x + 22, y + 10, 236, 28, 36);
	gfx.PutPixel(x + 22, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 22, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 23, y + 9, 236, 28, 36);
	gfx.PutPixel(x + 23, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 23, y + 20, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 0, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 1, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 2, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 3, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 4, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 5, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 6, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 7, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 8, 236, 28, 36);
	gfx.PutPixel(x + 24, y + 9, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 10, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 11, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 12, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 13, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 14, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 15, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 16, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 17, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 18, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 19, 0, 0, 0);
	gfx.PutPixel(x + 24, y + 20, 0, 0, 0);

}

void RedStar::Movement()
{
	x += vx;
	y += vy;

	const float right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= float( Graphics::ScreenWidth))
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

bool RedStar::Collide(const Circle& circle)
{
	const float circleright = circle.GetX() + circle.GetWidth();
	const float circlebottom = circle.GetY() + circle.GetHeight();
	const float redstarright = x + width;
	const float redstarbottom = y + height;

	return
		circleright >= x &&
		circle.GetX() <= redstarright &&
		circlebottom >= y &&
		circle.GetY() <= redstarbottom;
}

bool RedStar::Collide(const Square& square)
{
	const float squareright = square.GetX() + square.GetWidth();
	const float squarebottom = square.GetY() + square.GetHeight();
	const float redstarright = x + width;
	const float redstarbottom = y + height;

	return
		squareright >= x &&
		square.GetX() <= redstarright &&
		squarebottom >= y &&
		square.GetY() <= redstarbottom;
}

bool RedStar::Collide(const Triangle& triangle)
{
	const float triangleright = triangle.GetX() + triangle.GetWidth();
	const float trianglebottom = triangle.GetY() + triangle.GetHeight();
	const float redstarright = x + width;
	const float redstarbottom = y + height;

	return
		triangleright >= x &&
		triangle.GetX() <= redstarright &&
		trianglebottom >= y &&
		triangle.GetY() <= redstarbottom;
}
