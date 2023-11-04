#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;

    cout << "Operators in C++" << endl; // endl is used to jump to newline

    cout << endl;

    // Arithmetic Operators
    cout << "Following are the arithmetic operators in C++" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl; // int divided by int gives us integer
    cout << "The value of a % b is " << a % b << endl; // Modulus gives us remainder when a is divided by b
    cout << "The value of a++ is " << a++ << endl;     // print a, then add 1 to it
    cout << "The value of a-- is " << a-- << endl;     // print a, then substract 1 from it
    cout << "The value of ++a is " << ++a << endl;     // add 1 to a, then print it
    cout << "The value of --a is " << --a << endl;     // substract 1 from a, then print it

    cout << endl;

    // Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // Comparison Operators
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    cout << endl;

    // Logical Operators
    cout << "Following are the logical operators in C++" << endl;
    // Logical AND -> True only when all conditions are True
    cout << "The value of this Logical AND operator ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << endl;
    // Logical OR -> True when atleast one of condition is True
    cout << "The value of this Logical OR operator ((a==b) || (a<b)) is " << ((a == b) || (a < b)) << endl;
    // Logical NOT -> Reverses the final result
    cout << "The value of this Logical NOT operator (!(a==b)) is " << (!(a == b)) << endl;

    return 0;
}