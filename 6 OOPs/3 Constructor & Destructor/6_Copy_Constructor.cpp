// Copy Constructor ek aisa constructor hai joki dusre object ki copy bna deta hai 

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // NOTE : When no copy constructor is found, compiler supplies its own copy constructor
    // Thatswhy even if below part of code (Copy Constructor) isn't written, compiler won't give any error 
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z, then i'll create z1 using copy constructor & passing z in it 
    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called (Pehle se bne hue ko z assign krdiya) (Abhi nhi bnaya)
    // When only assignment is done, then copy constructor isn't invoked 
    z2.display();

    Number z3 = z; // Copy constructor invoked (Abhi he bnaya hai)
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
