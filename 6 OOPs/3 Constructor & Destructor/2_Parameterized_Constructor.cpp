#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor Declaration
    Complex(int, int);

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor Definition
Complex::Complex(void) // Default Constructor as it accepts no parameters
{
    a = 0;
    b = 0;
}

Complex::Complex(int x, int y) // Paramterized Constructor as it accepts 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex a(4, 6);
    a.printNumber();

    // Explicit Call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}