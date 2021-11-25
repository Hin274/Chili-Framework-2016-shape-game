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
#include "circle.h"

 //screen width is 800 screen height is x
//CTRL+SHIFT+SPACE to see the variables in the function

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
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
	circle.x = circle.x + circle.vx;
	circle.y = circle.y + circle.vy;

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		if (circle.inhibitright) {

		}
		else {
			circle.vx += 1;
			circle.inhibitright = true;
		}
	}
	else
	{
		circle.inhibitright = false;
		
	}
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		if (circle.inhibitleft)
		{

		}
		else {
			circle.vx -= 1;
			circle.inhibitleft = true;
		}
	}
	else
	{
		circle.inhibitleft = false;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		if (circle.inhibitdown) {

		}
		else
		{
			circle.vy += 1;
			circle.inhibitdown = true;
		}
	}
	else {

		circle.inhibitdown = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		if (circle.inhibitup) {

		}
		else {
			circle.vy -= 1;
			circle.inhibitup = true;
		}
	}
	else {

		circle.inhibitup = false;
	}


	if (wnd.kbd.KeyIsPressed('D'))
	{
		circle.Draw(gfx);
	}

	circle.ClampToScreen();


}

void Game::ComposeFrame()
{

	circle.Draw(gfx);

	
}
