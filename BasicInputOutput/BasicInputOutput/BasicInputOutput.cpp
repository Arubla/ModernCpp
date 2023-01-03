// BasicInputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    using namespace std;
    /*cout << "Please type your age below." << endl;

    int age;
    cin >> age;
    cout << "Your age is: " << age << endl;*/

    //Note that with the above uncommented, the below does not wait for input

    char buff[512];
    cout << "What is your name?" << endl;
    /*cin >> buff;*/
    cin.getline(buff, 64, '\n');
     //cin stops reading from the keyboard at " "
    cout << "Your name is " << buff << endl;
    
    return 0;
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
