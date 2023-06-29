#include <iostream>

#include "application/application.h"

int main() {
	try {
		RenderApplication MantaRay;
		MantaRay.init(800, 600, "MantaRay");
		MantaRay.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}