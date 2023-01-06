/*
Implement the following functions using pointer arguments only

    int Add(int *a, int *b) ;    //Add two numbers and return the sum
    void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
    void Swap(int *a, int *b) ;  //Swap the value of two integers
    void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument
*/
#include<iostream>

int Add(int* a, int* b) {
    std::cout << *a << " + " << *b << " = " << *a + *b << std::endl;
    return *a + *b;

}

void AddVal(int* a, int* b, int* result) {
    *result = *a + *b;
}

void Swap(int* a, int* b) {
    int temp{ *b };
    *b = *a;
    *a = temp;
    std::cout << "a and b = " << *a << " and " << *b << std::endl;
}

void Factorial(int* a, int* result) {
    int fact{ *a };

    for (int i{ *a - 1 }; i > 1; i--) {
        fact *= i;
    }

    *result = fact;
    std::cout << "from " << *a << ", " << *result << std::endl;

}