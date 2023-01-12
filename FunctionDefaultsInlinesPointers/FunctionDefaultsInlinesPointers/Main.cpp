#include <iostream>
#include "Header.h"

void Print(int count, char ch) {
	for (int i = 0; i < count; i++) {
		std::cout << ch;
	}
	std::cout << std::endl;
}

void EndMessage() {
	std::cout << "Goodbye";
}

inline int Square(int x) {
	return x * x;
}//this replaces the call with the function itself at compilation, saving memory
//#define Square(x) x*x
//macro works through text substitution
int main() {
	using namespace std;
	int val{ 5 };
	cout << Square(val + 1) << endl;

	Print(5, '#');
	void(*pfn) (int, char) = &Print;//function pointer init
	(*pfn)(8, '@');//examples of calling function pointers
	pfn(5, '+');

	atexit(EndMessage);//internal pointer

	return 0;
}