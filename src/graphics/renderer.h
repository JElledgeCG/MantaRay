#ifndef RENDERER_H
#define RENDERER_H

#include "debug.h"
#include "device.h"

class Renderer {
private:
	VkDebugUtilsMessengerEXT debugMessenger;

	void createInstance();
	void setupDebugMessenger();
public:

	VkInstance instance;
	VkSurfaceKHR surface;

	Device device;

	void init();
	void setupPipeline();
	//void render(/* Geometry goes here */);
	void cleanupRenderer();
};

#endif