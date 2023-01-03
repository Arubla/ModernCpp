// PrimitiveTypesAndVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Scaler Types
    int i = 42;
    std::cout << i << std::endl; //<< is called insertion operator
    char ch = 'a';
    bool flag = false;

    float f = 1.283f;
    double d = 525.342;

    //Vector Types
    int arr[5];
    int arr1[5] = { 1,2,3,4,5 };

    //OR uniform initialization

    int j{ 5 };
    int arr3[3]{ 2,4,6 };
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
