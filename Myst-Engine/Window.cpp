#include "Window.hpp"
#include <conio.h>

namespace mysty {
	Window::Window(std::string windowTitle, v2d windowSize, v2d windowPosition, WindowFlags windowFlags) {
		Uint32 temp;
		if ((windowFlags & WindowFlags::SHOWN) == WindowFlags::SHOWN) {
			temp = SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS | SDL_WINDOW_INPUT_GRABBED | SDL_WINDOW_MOUSE_CAPTURE | SDL_WINDOW_MOUSE_FOCUS;
			if ((windowFlags & WindowFlags::FULLSCREEN) == WindowFlags::FULLSCREEN) {
				if ((windowFlags & WindowFlags::BORDERLESS) == WindowFlags::BORDERLESS)
					temp |= SDL_WINDOW_FULLSCREEN_DESKTOP;
				else {
					temp |= SDL_WINDOW_FULLSCREEN;
				}
			}
			else {
				if ((windowFlags & WindowFlags::BORDERLESS) == WindowFlags::BORDERLESS) {
					temp |= SDL_WINDOW_BORDERLESS;
				}
				if ((windowFlags & WindowFlags::OPENGL) == WindowFlags::OPENGL) {
					temp |= SDL_WINDOW_OPENGL;
				}
			}
		} else {
			temp = SDL_WINDOW_HIDDEN;
			if ((windowFlags & WindowFlags::OPENGL) == WindowFlags::OPENGL) {
				temp |= SDL_WINDOW_OPENGL;
			}
			if ((windowFlags & WindowFlags::BORDERLESS) == WindowFlags::BORDERLESS) {
				temp |= SDL_WINDOW_BORDERLESS;
			}
		}
		_sdlWindow = SDL_CreateWindow(windowTitle.c_str(),
			windowPosition.getX() == WINDOW_CENTERED ? SDL_WINDOWPOS_CENTERED : windowPosition.getX(),
			windowPosition.getY() == WINDOW_CENTERED ? SDL_WINDOWPOS_CENTERED : windowPosition.getY(),
			windowSize.getX(), windowSize.getY(), temp);
		if (_sdlWindow == 0) {
			_cprintf("The window failed to be created. SDL Error: %s\n", SDL_GetError());
			failFlag = true;
		}
		else {
			_sdlRenderer = SDL_CreateRenderer(_sdlWindow, -1, SDL_RENDERER_ACCELERATED);
			if (_sdlRenderer == NULL) {
				_cprintf("The renderer failed to be created. SDL Error: %s\n", SDL_GetError());
				failFlag = true;
			}
		}
	}
	void Draw() {

	}
}