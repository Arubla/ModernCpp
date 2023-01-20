#pragma once

class Car {
	//member variables - set to private by default
private:
	static int totalCount;
	float fuel;
	float speed;
	int passengers;

public:
	Car();
	Car(float startingFuel);
	~Car();

	void FillFuel(float amount);// in most cases, functions are defined in seperate source file
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard();

};