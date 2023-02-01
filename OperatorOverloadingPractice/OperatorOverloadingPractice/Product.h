#pragma once
#include<iostream>
#include <string>
class Product {
	std::string name;
	float *price;

public:
	//destuctor
	~Product();
	// default constructor
	Product();
	//parameterized constructor
	Product(std::string name, float price);

	float getPrice()const;
	void setPrice(float newPrice);
	

};