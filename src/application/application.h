#ifndef APPLICATION_H
#define APPLICATION_H

#include "window.h"

#include "../graphics/renderer.h"

#include <vector>

class RenderApplication {
private:
	WindowConfig config;
	Window window;
	Renderer renderer;

	void createSurface();

public:
	void init(int width, int height, const char* name);
	void run();
	void mainLoop();
	void cleanupApplication();
};

#endif