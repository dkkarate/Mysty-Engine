#include "Init.hpp"

int SDL_main(int arc, char** argv) {
	bool quit = false;
	SDL_Event e;
	if (!mysty::Init::Initialize()) {
		_cputs("Failed to initialize mysty engine");
		quit = true;
	}
	while (!quit) {
		while (SDL_PollEvent(&e)) {
			switch (e.type) {
			case SDL_QUIT:
				quit = true;
				break;
			case SDL_KEYDOWN:
				switch (e.key.keysym.sym) {
				case SDLK_ESCAPE:
					quit = true;
					break;
				}
			}
		}
	}
	return 0;
}