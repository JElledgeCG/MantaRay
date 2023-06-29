#ifndef APPLICATION_H
#define APPLICATION_H

#include "window.h"
#include "renderer.h"

class RenderApplication {
private:
	WindowConfig config;
	Window window;
	Renderer renderer;
public:
	void init(int width, int height, const char* name);
	void run();
	void mainLoop();
	void cleanupApplication();
};

#endif