#include <iostream>
#include "header.h"

int main() {
	using namespace std;
	int result = Add(3, 5);
	cout << result << endl;
	double result2 = Add(3.1, 6.2);//without overloading, the casting loses data, like java
	cout << result2 << endl;
	int x{ 1 };
	Print(&x);
	return 0;
}