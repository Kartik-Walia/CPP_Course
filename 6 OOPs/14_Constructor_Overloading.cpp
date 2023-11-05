// A class can have multiple constructors with different arguments
// In such case, Compiler invokes that particular constructor which matches the set of arguments 
// This is known as Constructor Overloading (Similar to Function overloading)
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()   // Default Constructor 
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)   // Parameterized Constructor 
    {
        a = x;
        b = y;
    }

    Complex(int x)  // Parameterized Constructor
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();
    
    Complex c3;
    c3.printNumber();

    return 0;
}