// DataTypes define the type of data a variable can hold.
// In C++, they're organised in 3 groups:
// 1. Built-in
// 2. User-defined
// 3. Derived

// Built-in datatypes (int, float (low precision), char, double (high precision), bool)

// User defined datatypes (Struct, Union, Enum)

// Derived datatypes (Array, Function, Pointer)

#include <iostream>

using namespace std;
int glo = 6;

void sum()
{
    int a;
    cout << glo; // Pehle dhundega sum ke andar local glo ko, nahi hai toh global glo ko consider krlo
}

int main()
{
    // int a=14;
    // int b=15;

    int a = 14, b = 15; // Equivalent to above expression
    float pi = 3.14;
    char c = 'u'; // char can store only single character at a time
    // cout << "Here value of a is " << a << "and value of b is" << b;
    // cout << "\n Value of pi is" << pi; // \n is used a line break
    // cout << "\n Value of c is" << c;
    cout << glo;
    int glo = 9;
    cout << glo; // prints 9, that means LOCAL TAKES PRECEDEANCE OVER GLOBAL VARIABLE
    glo = 78;    // Updates local variable
    cout << glo;

    cout << "glo from sum function";
    sum(); // Since considered global glo bcoz no local glo is there, so prints 6

    bool is_true = true;
    cout << is_true; // Prints 1 bcoz boolean has values 1(true) and 0(false)

    return 0;
}

// Hence, Local and global variable can be made with same name, but precedence would always be given to local