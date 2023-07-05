#include "application.h"

void RenderApplication::init(int width, int height, const char* name) {
	WindowConfig wconfig{};
	wconfig.width = width;
	wconfig.height = height;
	wconfig.name = name;

	config = wconfig;
}

void RenderApplication::createSurface() {
	if (glfwCreateWindowSurface(renderer.instance, window.window, nullptr, &renderer.surface) != VK_SUCCESS) {
		throw std::runtime_error("failed to create window surface!");
	}
}

void RenderApplication::run() {
	// Create GLFW Window
	window.init(config);
	// Initialize graphics engine/vulkan
	renderer.init();
	createSurface();
	renderer.setupPipeline();

	createSurface();

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
	renderer.cleanupRenderer();
	window.windowCleanup();
}
