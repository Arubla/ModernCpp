

#include <iostream>

int main()
{
    using namespace std;

    int x{ 10 };

    cout << &x << endl; //&x means memory address of x

    int* ptr{ &x }; //type of the pointer should match the type of the source (even though the memory address is not of that type)
                    //except void pointers, which point to any type
    cout << ptr << endl;

    //Dereference Operator
    *ptr = 5;
    cout << x << endl;

    int y{ *ptr };
    cout << y << endl;


}

