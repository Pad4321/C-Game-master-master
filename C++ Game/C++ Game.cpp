#include <iostream>
#include<string>
//include SDL libraries
#include <SDL.h>
#include <stdio.h>

using namespace std;

bool shutdownCondition = false;
string e;

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





int initialise() {
	return 0;
}

void input() {
	cin >> e;
}

void update() {

	if (e == "e") {
		shutdownCondition = true;
	}

}

void render() {

}

int shutdown() {
	return 0;
}


int SDL_main(int argc, char* argv[])
{
	initialise();

	while (!shutdownCondition) {
		input();
		update();
		render();
	}

	return(shutdown());

}