#include "Car.h"
#include <iostream>

Car::Car()
{
	fuel = 0;
	speed = 0;
	passengers = 0;
	std::cout << "Car was created";
}

Car::Car(float startingFuel)
{
	fuel = startingFuel;
	speed = 0;
	passengers = 0;
}

Car::~Car()
{
	std::cout << "Car was destroyed";
}

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed++;
	fuel -= 0.5f;
}

void Car::Brake()
{
	speed = 0;
}

void Car::AddPassengers(int count)
{
	passengers = count;
}

void Car::Dashboard()
{
	//std::cout all the variables
}
