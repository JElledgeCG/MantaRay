#include "application.h"

void RenderApplication::init(int width, int height, const char* name) {
	WindowConfig wconfig{};
	wconfig.width = width;
	wconfig.height = height;
	wconfig.name = name;

	config = wconfig;
}

void RenderApplication::run() {
	// Create GLFW Window

	window.init(config);
	// Initialize graphics engine/vulkan
	// Main Render Loop
	mainLoop();
	// Cleanup
	cleanupApplication();
}

void RenderApplication::mainLoop() {
	while (!window.shouldClose()) {
		glfwPollEvents();
	}
}

void RenderApplication::cleanupApplication() {
	window.windowCleanup();
}