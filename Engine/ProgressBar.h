#pragma once
#include "Graphics.h"
class ProgressBar
{
public:
	ProgressBar(int in_x, int in_y);
	void IncreaseBar();
	int GetProgress() const;
	void Draw(Graphics& gfx) const;

private:
	static constexpr Color c = Colors::Green;
	static constexpr int girth = 12;
	static constexpr int scale = 4;
	int level = 0;
	int x;
	int y;

};

