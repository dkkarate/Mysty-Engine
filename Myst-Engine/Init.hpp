#pragma once

#include <SDL/SDL.h>
#include <conio.h>
#include "Window.hpp"

namespace mysty {
	class Init {
	public:
		/*
		* Initializes all components neccessary for the engine to run
		returns 0 on success and -1 on failure
		*/
		static int Initialize();
		static Window mainWindow;
	};
}