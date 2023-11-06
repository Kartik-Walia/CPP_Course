#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imagianry part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    c1.setData(1, 54);
    c1.getData();

    // Creating pointer which points to this object
    Complex *ptr = &c1;
    (*ptr).setData(1, 54); // Accessing public memebrs of object through pointer via dereferencing operator
    (*ptr).getData();      // Bracket is compulsary bcoz . operator has higher precedence than * operator

    // We can also directly create object
    Complex *ptr1 = new Complex;
    (*ptr1).setData(1, 54);
    // (*ptr1).getData();
    ptr1->getData(); // Exactly same as above (ptr jis object ko point kr rha hai uska setData function run)
    // Arrow operator is used to run function of pointer by directly dereferencing the pointer

    // Array of Objects
    Complex *ptr2 = new Complex[4];
    ptr2->setData(1, 4);
    ptr2->getData();
    // ptr2 points to 1st object
    // ptr2 + 1 points to 2nd object

    return 0;
}