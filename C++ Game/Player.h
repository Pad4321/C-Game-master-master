#pragma once

#include <SDL.h>
#include <SDL_image.h>

class Player {
public:

	//called when new player object is constructed
	Player(SDL_Renderer*);
	//Called at the start of the program
	void init();
	//Called for each input event which occurs in a frame
	void processInput(SDL_Event e);
	//called every frame
	void update();
	//called every frame
	void draw();
	//Called once on program shutdown
	void clean();

private:
	SDL_Texture * texture; //This is the sprite
	SDL_Renderer * renderer; //allows rendering from this class
};