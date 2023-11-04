#include <iostream>
using namespace std;

int c = 45; // Global

int main()
{
    // ========================================= BUILT IN DATATYPES =========================================
    int a, b, c;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;

    // Let's say for some reason i wanna print global c here, so we can use scopre resolution operator for this
    // So by using scope resolution operator you can access global variables value
    cout << "The global c is " << ::c << endl;

    // ================================= FLOAT, DOUBLE & LONG DOUBLE LITERALS =================================
    float d = 34.4;
    long double e = 34.4;
    // By default decimal literal is double , if you want to specify it as float number, then write it as 34.4f
    // So, now i pass this 34.4f as value then it's passed as float not double (by default passed as double)

    // In similar way, long double is wriiten as 34.4l
    d = 34.4f;
    e = 34.4l;
    // L and F can be capital/small
    d = 34.4F;
    e = 34.4L;
    // This won't change output by mentioning types with passing values
    // But this would affect function overloading (discussed later)
    cout << "The value of d is " << d << endl
         << "The value of e is " << e << endl;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    // ========================================= REFERENCE VARIABLES =========================================
    // When we want i=that value in our program should be called with 2 diffferent references, then we use
    // reference variable
    float x = 455;
    float &y = x; // Mai y ko ek reference variable bna na chahta hun joki x ko point krta hai
    cout << x << endl;
    cout << y << endl; // y kahu ya x kahu, rhega toh x he, lekin original variable x he hai
    // Variables is one, we just created different names for calling it

    // ============================================ TYPE CASTING ============================================
    // Converting datatypes of variables is known as TypeCasting
    int p = 45;
    float q = 45.46;
    cout << "Value of p is " << p << endl;
    cout << "Value of p is " << (float)p << endl; // int a is typecasted to float
    cout << "Value of p is " << float(p) << endl; // This is just another way to represent above line

    cout << "Value of q is " << (int)q << endl; // float b is typecasted to int
    cout << "Value of q is " << int(q) << endl; // This is just another way to represent above line

    c = int(q); // c is used to store integer value of b
    cout << "Value of c is " << c << endl;

    cout << "The expression p + q is " << p + q << endl;
    cout << "The expression p + int(q) is " << p + int(q) << endl;
    cout << "The expression p + (int)q is " << p + (int)q << endl;

    return 0;
}