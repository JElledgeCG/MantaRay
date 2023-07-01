#ifndef RENDERER_H
#define RENDERER_H

#include "debug.h"

class Renderer {
private:

	VkInstance instance;
	VkDebugUtilsMessengerEXT debugMessenger;

	void createInstance();
	void setupDebugMessenger();
public:
	void init();
	//void render(/* Geometry goes here */);
	void cleanupRenderer();
};

#endif