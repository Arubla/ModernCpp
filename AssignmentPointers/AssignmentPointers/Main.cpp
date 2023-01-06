#include "Exercises.h"
#include<iostream>


int main() {
	int a{ 5 };
	int b{ 10 };
	int result{ 0 };
	int* aPtr{ &a };
	int* bPtr{ &b };
	int* resPtr{ &result };

	Add(aPtr, bPtr);
	AddVal(aPtr, bPtr, resPtr);
	std::cout << "result = " << result << std::endl;
	result = 0;
	
	Swap(aPtr, bPtr);
	a = 5;
	b = 10;

	Factorial(aPtr, resPtr);

}