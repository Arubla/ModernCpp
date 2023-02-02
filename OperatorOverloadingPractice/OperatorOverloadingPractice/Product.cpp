#include "Product.h"
#include <iostream>
#include <string>

Product::Product()
{
	std::cout << "New Product Created" << std::endl;
	name.assign("untitled");
	price = new float{ 0.0 };

}

Product::~Product()
{
	std::cout << "Product Deleted" << std::endl;
	delete price;
}

Product::Product(std::string newName, float newPrice)
{
	name.assign(newName);
	price = new float(newPrice);
	std::cout << "New Product Created" << std::endl;
	std::cout << "Name: " << name << " Price: " << *price << std::endl;

}

float Product::getPrice()const
{
	return *price;
}

Product::Product(const Product& product)
{
	std::cout << "Product Object Copied: " << &product << std::endl;
	name.assign(product.name);
	price = new float(*product.price);
}

void Product::setPrice(float newPrice)
{
	*price = newPrice;
}

std::string Product::getName() const
{
	return name;
}
