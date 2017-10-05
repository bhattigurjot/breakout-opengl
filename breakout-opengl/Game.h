#pragma once

//#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Represents the current state of the game
enum GameState
{
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:
	// Game State
	GameState	State;
	GLboolean	Keys[1024];
	GLuint		Width, Height;
	// Constructor and Destructor
	Game(GLuint width, GLuint height);
	~Game();
	// Intialize game state and load all shaders, textures, levels, etc
	void Init();
	// Game Loop
	void ProcessInput(GLfloat dt);
	void Update(GLfloat dt);
	void Render();
};