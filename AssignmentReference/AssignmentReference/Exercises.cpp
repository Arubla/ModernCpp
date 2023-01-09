/*
Implement the following functions

    void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
    void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
    void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments
*/

#include <iostream>

void Add(int a, int b, int& result) {
    result = a + b;
}

void Factorial(int a, int& result) {
    result = a;
    for (int i{ a - 1 }; i > 1; i--) {
        result *= i;
    }
}

void Swap(int& a, int& b) {
    int temp{ a };
    a = b;
    b = temp;
}