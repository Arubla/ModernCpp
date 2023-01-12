#include <iostream>

int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
//overloading can be done with types and with qualifiers
extern "C" void Print(int* x) { //this function can be invoked in other languages
	std::cout << *x << std::endl;
}
void Print(const int* x) {

}