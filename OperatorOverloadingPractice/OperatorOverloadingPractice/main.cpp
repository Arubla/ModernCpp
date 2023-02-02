#include "Product.h"
#include <iostream>
#include <memory>

int main() {
	Product first = Product();
	
	Product second = Product("Eggs", 4.5);
	Product third = Product("Bacon", 8.0);
	
	std::cout << second.getPrice() + third.getPrice() << std::endl;

	Product thirdCopy = Product(third);
	Product secondCopy = second;
	/*Product secondMoved = std::move(second);*/

	Product fourth = Product("Bacon", 8.0);
	/*if (fourth == third) {
		std::cout << "fourth and secondMoved products are the same!" << std::endl;
	}
	else {
		std::cout << "Not the same";
	}*/

	return 0;
}