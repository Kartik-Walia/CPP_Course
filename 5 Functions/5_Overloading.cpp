// When same function is used to do diff works by changing it's type or no. of arguments -> Function Overloading

#include <iostream>
using namespace std;

int sum(float a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

// Calculate volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate volume of cube
int volume(int a)
{
    return (a * a * a);
}

// Calculate volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl; // Automatically changes 3 to int to return int
    cout << "The sum of 3, 7 and 6 is " << sum(3, 7, 6) << endl;
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;

    return 0;
}