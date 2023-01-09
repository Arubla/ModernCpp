#include "Exercises.h"
#include <iostream>
int main() {
	int a{ 5 };
	int b{ 10 };
	int c{ 0 };
	int& d{ c };
	int& e{ a };
	int& f{ b };
	using namespace std;
	
	Add(a, b, d);
	cout << d << endl;

	Factorial(a, d);
	cout << d << endl;

	Swap(e, f);
	cout << a << endl;
}