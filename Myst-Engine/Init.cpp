#include "Init.hpp"

namespace mysty {
	Window Init::mainWindow;

	int Init::Initialize() {
		if (SDL_Init(SDL_INIT_EVERYTHING)) {
			_cprintf("An error occured while initializing SDL\n\t-SDL Error: %s", SDL_GetError());
			return -1;
		}
		mainWindow = Window();
		if (mainWindow.CreateWindowFailed()) {
			_cputs("Failed to create window!");
			return -1;
		}
		return 0;
	}
}