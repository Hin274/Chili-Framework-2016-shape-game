/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
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
#include "MainWindow.h"
#include "Game.h"
#include "Graphics.h"
#include <random>



 //screen width is 800 screen height is x
//CTRL+SHIFT+SPACE to see the variables in the function
//regular expressions replace variables poo([012])x with poo

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	rdc(rd()),
	rdt(rd()),
	rds(rd()),
	rdst(rd()),
	xDist(0,770),
	yDist(0,570),
	vDist(-2.5f,2.5f),
	progressbar(20,20)
	

	//generates the random placement of the redshapes
{
	for (int i = 0; i < nrc; i++) {
		redcircle[i].Init(xDist(rdc), yDist(rdc), vDist(rdc), vDist(rdc));
	}
	for (int i = 0; i < nrt; i++) {
		redtriangle[i].Init(xDist(rdt), yDist(rdt), vDist(rdt), vDist(rdt));
	}
	for (int i = 0; i < nrs; i++) {
		redsquare[i].Init(xDist(rds), yDist(rds), vDist(rds), vDist(rds));
	}
	for (int i = 0; i < nrst; i++) {
		redstar[i].Init(xDist(rdst), yDist(rdst), vDist(rdst), vDist(rdst));
	}
}



void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
		if (startGame && !gameOver) {

		circle.Control(wnd.kbd);
		circle.ClampToScreen();

		square.Control(wnd.kbd);
		square.ClampToScreen();

		triangle.Control(wnd.kbd);
		triangle.ClampToScreen();

		for (int i = 0; i < nrc; i++) {
			redcircle[i].Movement();
		}
		for (int i = 0; i < nrs; i++) {
			redsquare[i].Movement();
		}
		for (int i = 0; i < nrt; i++) {
			redtriangle[i].Movement();
		}
		for (int i = 0; i < nrst; i++) {
			redstar[i].Movement();
		}

		}
	
	else
	{
		if (wnd.kbd.KeyIsPressed(VK_RETURN))
		{
			startGame = true;
		}
	}
}

void Game::ComposeFrame()
{
	
	if (!startGame && !gameOver)
	{
		DrawGameTitles::DrawStartGame(100,100,gfx);
	}
	else {
		//draw red shapes
		for (int i = 0; i < nrc; i++)
		{
			if (!redcircle[i].Collected())
			{
				redcircle[i].Draw(gfx);
			}
		}
		for (int i = 0; i < nrt; i++)
		{
			if (!redtriangle[i].Collected())
			{
				redtriangle[i].Draw(gfx);
			}
		}
		for (int i = 0; i < nrs; i++) {
			if (!redsquare[i].Collected())
			{
				redsquare[i].Draw(gfx);
			}
		}
		for (int i = 0; i < nrst; i++) {
			redstar[i].Draw(gfx);
			redstar[i].Collide(circle);
			redstar[i].Collide(square);
			redstar[i].Collide(triangle);
			allcollide = redstar[i].Collide(circle) && redstar[i].Collide(square) && redstar[i].Collide(triangle);
			if (allcollide)
			{
				gameOver = true;
				DrawGameTitles::DrawGameOver(100,100,gfx);
			}
		}

	
		//change shape and collect shapes
		for (int i = 0; i < nrs; i++)
	{
		for (int i = 0; i < nrt; i++)
		{
			for (int i = 0; i < nrc; i++)
			{
				if (wnd.kbd.KeyIsPressed('S'))
				{
					if (redsquare[i].collect(square))
					{	
						redsquare[i].Init(xDist(rds), yDist(rds), vDist(rds), vDist(rds));
						progressbar.IncreaseBar();
						totalcollected++;
					}square.Draw(gfx);
					redsquare[i].collection(square);
				}
				else if (wnd.kbd.KeyIsPressed('T'))
				{
					if (redtriangle[i].collect(triangle))
					{	
						
						redtriangle[i].Init(xDist(rdt), yDist(rdt), vDist(rdt), vDist(rdt));
						progressbar.IncreaseBar();
						totalcollected++;
					}
					triangle.Draw(gfx);
					redtriangle[i].collection(triangle);
				}
				else
				{
					if (redcircle[i].collect(circle))
					{
						
						redcircle[i].Init(xDist(rdc), yDist(rdc), vDist(rdc), vDist(rdc));
						progressbar.IncreaseBar();
						totalcollected++;
					}
					circle.Draw(gfx);
					redcircle[i].collection(circle);
				}
			}
		}
	}
		progressbar.Draw(gfx);
		if (totalcollected == 50)
		{
			gameOver = true;
			DrawGameTitles::DrawGameFinish(100, 100,gfx);
		}

}
	
}
