#include<string>
#include<iostream>

int main() {

	int a1; //uninitialized variable

	int a2 = 0; //initialized w/ assignment operator - Copy Initialization

	int a3(5); //Direct Initialization

	std::string s1;
	std::string s2("Hello World");

	char d1[8]; // uninitialized array
	char d2[8] = { '\0' }; //initialized with null terminating character
	char d3[8] = { 'a', 'b', 'c', 'd' }; //Aggregate Initialization
	char d4[8] = { "abcd" }; //this does the same as above!!
	std::cout << d4[0]; //just to see that it's true

	//Now let's initialize variables with Uniform Initialization

	int b1{}; //automatically initialized to default value (0 for all primitive types) Value Initialization
	int b3{ 5 }; //Direct Initialization - same as b3 = 5;

	char e1[8]{}; //initializes array elements to default values
	char e2[8]{ "helllo" };

	//initializing arrays on the heap
	int *p1 = new int{};
	char *p2 = new char[8] {"hello"};

}