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
	Product secondMoved = std::move(second);
	return 0;
}