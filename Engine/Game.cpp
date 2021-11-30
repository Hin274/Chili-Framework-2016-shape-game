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
#include <random>



 //screen width is 800 screen height is x
//CTRL+SHIFT+SPACE to see the variables in the function
//regular expressions replace variables poo([012])x with poo

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{//generates the random placement of the redshapes
	std::random_device rd;
	std::mt19937 rdc(rd());
	std::mt19937 rdt(rd());
	std::mt19937 rds(rd());
	std::uniform_int_distribution<int>xDist(0, 770);
	std::uniform_int_distribution<int>yDist(0, 570);
	redcircle.rcx = xDist(rdc);
	redcircle.rcy = yDist(rdc);
	redsquare.rsx = xDist(rds);
	redsquare.rsy = yDist(rds);
	redtriangle.rtx = xDist(rdt);
	redtriangle.rty = yDist(rdt);
	redcircle.rcvx = 1;
	redcircle.rcvy = 1;
	redsquare.rsvx = 1;
	redsquare.rsvy = 1;
	redtriangle.rtvx = -1;
	redtriangle.rtvy = -1;

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

	//circle movement speed up and slow down
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
	//circle keeps in screen
	circle.ClampToScreen();

	//square movement speed up and slow down
	square.x = square.x + square.vx;
	square.y = square.y + square.vy;

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		if (square.inhibitright) {

		}
		else {
			square.vx += 1;
			square.inhibitright = true;
		}
	}
	else
	{
		square.inhibitright = false;

	}
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		if (square.inhibitleft)
		{

		}
		else {
			square.vx -= 1;
			square.inhibitleft = true;
		}
	}
	else
	{
		square.inhibitleft = false;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		if (square.inhibitdown) {

		}
		else
		{
			square.vy += 1;
			square.inhibitdown = true;
		}
	}
	else {

		square.inhibitdown = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		if (square.inhibitup) {

		}
		else {
			square.vy -= 1;
			square.inhibitup = true;
		}
	}
	else {

		square.inhibitup = false;
	}
	//Keep square in screen
	square.ClampToScreen();

	//triangle movement speed up and slow down

	triangle.x = triangle.x + triangle.vx;
	triangle.y = triangle.y + triangle.vy;

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		if (triangle.inhibitright) {

		}
		else {
			triangle.vx += 1;
			triangle.inhibitright = true;
		}
	}
	else
	{
		triangle.inhibitright = false;

	}
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		if (triangle.inhibitleft)
		{

		}
		else {
			triangle.vx -= 1;
			triangle.inhibitleft = true;
		}
	}
	else
	{
		triangle.inhibitleft = false;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		if (triangle.inhibitdown) {

		}
		else
		{
			triangle.vy += 1;
			triangle.inhibitdown = true;
		}
	}
	else {

		triangle.inhibitdown = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		if (triangle.inhibitup) {

		}
		else {
			triangle.vy -= 1;
			triangle.inhibitup = true;
		}
	}
	else {

		triangle.inhibitup = false;
	}
	//keep triangle in screen
	triangle.ClampToScreen();

	
	redcircle.cMovement();
	redsquare.sMovement();
	redtriangle.tMovement();

	}


void Game::ComposeFrame()
{
	//change shape and collect square
	if (wnd.kbd.KeyIsPressed('S'))
	{
		square.Draw(gfx);
		redsquare.collectS(square);
	}
	//change shape and collect triangle
	else if (wnd.kbd.KeyIsPressed('T')) 
	{
		triangle.Draw(gfx);
		redtriangle.collectT(triangle);
	}
	//stay in circle shape and collect
	else
	{
		circle.Draw(gfx);
		redcircle.collectC(circle);
	}
	
	//Draws the red circle, square and triangle until its collected
	if (!redcircle.collected) {
		redcircle.cDraw(gfx);
	}
		
	if (!redtriangle.collected) {
		redtriangle.tDraw(gfx);
	}

	if (!redsquare.collected) {
		redsquare.sDraw(gfx);
	}

}
