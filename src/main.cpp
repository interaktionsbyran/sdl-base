#include <iostream>
#include <SDL2/SDL.h>

/*
 * Lesson 0: Test to make sure SDL is setup properly
 */
int main(int, char**){
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	} 

	SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == nullptr){
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}

	SDL_Event e;
	//Handle events on queue
	while( SDL_PollEvent( &e ) != 0  || true)
	{
		//User requests quit
		if( e.type == SDL_QUIT )
		{
			break;
		}
	}

	SDL_Quit();
	return 0;
}
