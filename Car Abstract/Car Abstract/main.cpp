#include "Car.h"

int main() {
	Car::ShowCount();

	Car car(4);
	car.FillFuel(5);
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();

	Car c1, c2;

	Car::ShowCount();

}