// Constructors are used to initialize objects at the time of declaration itself
// No need to use setData, setValue & other functions for it

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class
    // It is used to initialize the objects of it's class
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor Declaration
    // Constructor which do not accepts any parameter is called Default Constructor

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor Definition
Complex::Complex(void)
{ // This is a Default constructor as it accepts no parameter
    a = 0;
    b = 0;
    // cout << "Hello World" << endl;

    // This is done to prevent allocation of garbage values to a & b
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// ===================================== CHARACTERISTICS OF CONSTRUCTORS =====================================
// 1. It should be declared in public section of class
// 2. They're automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to their address