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

}

void Game::AskPlayerName()
{
	std::string input;
	std::cout << "What is your name player?" << std::endl;
	std::cin >> input;
	std::cout << "Hello " << input << ", welcome to the game!" << std::endl;

	player = new Player(input);
}
