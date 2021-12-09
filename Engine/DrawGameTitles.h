#pragma once
#include "Graphics.h"
class DrawGameTitles
{
public:
	static void DrawStartGame(int x, int y,Graphics& gfx);
	static void DrawGameOver(int x, int y, Graphics& gfx);
	static void DrawGameFinish(int x, int y, Graphics& gfx);
};

