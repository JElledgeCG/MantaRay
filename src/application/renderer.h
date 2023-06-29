#ifndef RENDERER_H
#define RENDERER_H

#include "window.h"

class Renderer {
private:

	VkInstance instance;

	void createInstance();
public:
	void init();
	//void render(/* Geometry goes here */);
	void cleanupRenderer();
};

#endif