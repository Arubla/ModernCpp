#pragma once

int Add(int a, int b);
double Add(double a, double b);
//overloading can be done with types and with qualifiers
extern "C" void Print(int* x); //this function can be invoked in other languages - remember name mangling

//void Print(const int* x);

//you can wrap multiple functions in extern "C" declarations with
//extern "C" {<function>}