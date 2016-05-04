#pragma once

#include <SDL/SDL.h>
#include <string>
#include "Vector2D.hpp"

#define WINDOW_CENTERED -1

enum WindowFlags : uint32_t {
	SHOWN = 0x1,
	HIDDEN = 0x2,
	FULLSCREEN = 0x4,
	BORDERLESS = 0x8,
	OPENGL = 0x10
};

namespace mysty {
	class Window {
	public:
		Window(std::string windowTitle = "Mysty Engine", v2d windowSize = v2d(800, 450),
			v2d windowPosition = v2d(-1, -1), WindowFlags windowFlags = WindowFlags::SHOWN);
		bool CreateWindowFailed() { return failFlag; }
		void Draw();
	private:
		SDL_Window* _sdlWindow;
		SDL_Renderer* _sdlRenderer;
		bool failFlag = false;
	};
}