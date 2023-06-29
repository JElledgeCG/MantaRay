#include "window.h"

void Window::init(WindowConfig config) {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	properties = config;

	window = glfwCreateWindow(properties.width, properties.height, properties.name, nullptr, nullptr);
}

void Window::windowCleanup() {
	glfwDestroyWindow(window);
	glfwTerminate();
}

bool Window::shouldClose() {
	return glfwWindowShouldClose(window);
}

GLFWwindow* Window::windowPtr() {
	return window;
}