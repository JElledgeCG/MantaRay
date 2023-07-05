#ifndef DEVICE_H
#define DEVICE_H

#include "debug.h"

#include <vulkan/vulkan.h>
#include <stdexcept>
#include <vector>
#include <optional>
#include <set>

struct QueueFamilyIndices {
	std::optional<uint32_t> graphicsFamily;
	std::optional<uint32_t> presentFamily;

	bool isComplete() {
		return graphicsFamily.has_value() && presentFamily.has_value();
	}
};

class Device {
private:

	VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
	VkInstance* instanceHandle;
	VkSurfaceKHR* surfaceHandle;

	void choosePhysicalDevice();
	bool isDeviceSuitable(VkPhysicalDevice device);
	QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

	void createLogicalDevice();

public:

	VkDevice LDevice;
	VkQueue graphicsQueue;
	VkQueue presentQueue;

	void init(VkInstance* instancePtr, VkSurfaceKHR* surfacePtr);
	void cleanupDevice();

};

#endif