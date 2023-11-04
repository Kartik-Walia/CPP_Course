// WHAT IS POINTER ?
// Pointer is a Derived datatype which holds the address of other datatypes
// & -> (Adress of) operator (to get the address)
// * -> (Value at) dereferncing operator (to get value at address)
// SYNTAX:
// int* a = &b; // create a pointer variable 'a' which stores address of int variable b

#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b; // Creating a pointer variable b which stores address of some int variable
    b = &a; // Storing address of int variable a in pointer variable b
    // & -> (Adress of) operator
    cout << "Address of a is " << &a << endl;
    cout << "Address of a is " << b << endl;

    // * -> dereferncing operator
    cout << "Value at address of b is " << *b << endl;

    // Pointer to Pointer
    int **c; // Creating a pointer to pointer variable c which stores address of some int pointer variable
    c = &b;  // Storing adddress of int pointer variable b in pointer to pointer variable c
    cout << "Address of b is " << &b << endl;
    cout << "Address of b is " << c << endl;
    cout << "Value at address of c is " << *c << endl;                // Single dereferencing -> value at b
    cout << "Value at address value of address c is " << **c << endl; // Double dereferencing -> value at a

    return 0;
}