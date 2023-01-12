#include <iostream>
#include "Header.h"
inline int Square(int x) {
	return x * x;
}//this replaces the call with the function itself at compilation, saving memory
//#define Square(x) x*x
//macro works through text substitution
int main() {
	using namespace std;
	int val{ 5 };
	cout << Square(val + 1) << endl;
	return 0;
}