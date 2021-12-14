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
	const int x_int = int(x);
	const int y_int = int(y);

	gfx.PutPixel(x_int + 0, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 0, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 0, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 1, y_int + 9, 236, 28, 36);
	gfx.PutPixel(x_int + 1, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 1, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 2, y_int + 9, 236, 28, 36);
	gfx.PutPixel(x_int + 2, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 2, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 2, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 3, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 3, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 3, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 4, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 4, y_int + 11, 236, 28, 36);
	gfx.PutPixel(x_int + 4, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 4, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 4, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 11, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 5, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 17, 235, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 5, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 14, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 15, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 6, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 6, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 13, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 14, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 7, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 7, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 8, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 8, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 8, y_int + 19, 235, 28, 36);
	gfx.PutPixel(x_int + 8, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 6, 235, 28, 36);
	gfx.PutPixel(x_int + 9, y_int + 7, 236, 28, 36);
	gfx.PutPixel(x_int + 9, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 9, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 9, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 9, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 9, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 3, 236, 28, 36);
	gfx.PutPixel(x_int + 10, y_int + 4, 236, 28, 36);
	gfx.PutPixel(x_int + 10, y_int + 5, 236, 28, 36);
	gfx.PutPixel(x_int + 10, y_int + 6, 236, 28, 36);
	gfx.PutPixel(x_int + 10, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 8, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 10, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 10, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 1, 236, 28, 36);
	gfx.PutPixel(x_int + 11, y_int + 2, 236, 28, 36);
	gfx.PutPixel(x_int + 11, y_int + 3, 236, 28, 36);
	gfx.PutPixel(x_int + 11, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 8, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 11, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 11, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 11, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 0, 236, 28, 36);
	gfx.PutPixel(x_int + 12, y_int + 1, 236, 28, 36);
	gfx.PutPixel(x_int + 12, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 8, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 12, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 12, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 1, 236, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 2, 236, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 3, 236, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 4, 235, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 8, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 13, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 13, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 4, 236, 28, 36);
	gfx.PutPixel(x_int + 14, y_int + 5, 236, 28, 36);
	gfx.PutPixel(x_int + 14, y_int + 6, 236, 28, 36);
	gfx.PutPixel(x_int + 14, y_int + 7, 236, 28, 36);
	gfx.PutPixel(x_int + 14, y_int + 8, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 14, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 14, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 6, 236, 28, 36);
	gfx.PutPixel(x_int + 15, y_int + 7, 236, 28, 36);
	gfx.PutPixel(x_int + 15, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 15, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 15, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 15, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 15, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 16, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 16, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 16, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 16, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 17, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 17, y_int + 13, 236, 28, 36);
	gfx.PutPixel(x_int + 17, y_int + 14, 236, 28, 36);
	gfx.PutPixel(x_int + 17, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 17, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 17, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 11, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 14, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 15, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 16, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 18, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 18, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 11, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 12, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 19, y_int + 17, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 18, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 19, 236, 28, 36);
	gfx.PutPixel(x_int + 19, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 20, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 20, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 20, y_int + 11, 236, 28, 36);
	gfx.PutPixel(x_int + 20, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 20, y_int + 20, 236, 28, 36);
	gfx.PutPixel(x_int + 21, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 21, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 21, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 21, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 22, y_int + 9, 236, 28, 36);
	gfx.PutPixel(x_int + 22, y_int + 10, 236, 28, 36);
	gfx.PutPixel(x_int + 22, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 22, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 23, y_int + 9, 236, 28, 36);
	gfx.PutPixel(x_int + 23, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 23, y_int + 20, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 0, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 1, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 2, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 3, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 4, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 5, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 6, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 7, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 8, 236, 28, 36);
	gfx.PutPixel(x_int + 24, y_int + 9, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 10, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 11, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 12, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 13, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 14, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 15, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 16, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 17, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 18, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 19, 0, 0, 0);
	gfx.PutPixel(x_int + 24, y_int + 20, 0, 0, 0);

}

void RedStar::Movement(float dt)
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
