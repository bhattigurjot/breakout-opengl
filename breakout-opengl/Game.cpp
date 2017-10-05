#include "game.h"

#include <iostream>

Game::Game(GLuint width, GLuint height)
	: State(GAME_ACTIVE), Keys(), Width(width), Height(height)
{

}

Game::~Game()
{

}

void Game::Init()
{

}

void Game::ProcessInput(GLfloat dt)
{

}

void Game::Update(GLfloat dt)
{

}

void Game::Render()
{

}

int main(int *argc, char **argv[])
{
	std::cout << "hello" << std::endl;
	return 0;
}