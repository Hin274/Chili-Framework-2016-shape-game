#include "ProgressBar.h"

ProgressBar::ProgressBar(int in_x, int in_y)
{
	x = in_x;
	y = in_y;

}

void ProgressBar::IncreaseBar()
{
	++level;
}

int ProgressBar::GetProgress() const
{
	return level;
}

void ProgressBar::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(x, y, level * scale, girth, c);
}