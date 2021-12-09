/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "RedCircle.h"
#include "RedSquare.h"
#include "RedTriangle.h"
#include <random>
#include "RedStar.h"
#include "ProgressBar.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawStartGame(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawGameFinish(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	std::random_device rd;
	std::mt19937 rdc;
	std::mt19937 rdt;
	std::mt19937 rds;
	std::mt19937 rdst;
	std::uniform_int_distribution<int>xDist;
	std::uniform_int_distribution<int>yDist;
	std::uniform_int_distribution<int>vDist;
	Circle circle;
	Square square;
	Triangle triangle;
	static constexpr int nrc = 3;
	RedCircle redcircle[nrc];
	static constexpr int nrt = 3;
	RedTriangle redtriangle[nrt];
	static constexpr int nrs = 3;
	RedSquare redsquare[nrs];
	static constexpr int nrst = 10;
	RedStar redstar[nrst];
	ProgressBar progressbar;
	bool startGame = false;
	bool gameOver = false;
	bool allcollide = true;
	int totalcollected = 0;
	/********************************/
};