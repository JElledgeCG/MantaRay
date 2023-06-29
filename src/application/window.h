#ifndef WINDOW_H
#define WINDOW_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdint>

struct WindowConfig {
	uint32_t		width;
	uint32_t		height;
	const char*		name;
};

class Window {
private:
	GLFWwindow* window;
	WindowConfig properties;

public:
	void init(WindowConfig config);
	void windowCleanup();
	GLFWwindow* windowPtr();
	bool shouldClose();
};

#endif
