#include "Game.h"
#include <iostream>

Game::Game()
{

}

Game::~Game()
{

}

void Game::Update()
{
	std::string input;
	std::cout << "What is your name player?" << std::endl;
	std::cin >> input;
	std::cout << "Hello " << input << ", welcome to the game!" << std::endl;
}
