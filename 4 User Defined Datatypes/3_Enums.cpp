// WHAT IS ENUM ?

#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl; // prints 0
    cout << lunch << endl;     // prints 1
    cout << dinner << endl;    // prints 2
    // This way i can give a integer number to breakfast, lunch, dinner like 0, 1, 2, etc.
    // Program will become more readable
    // Now Meal had became a datatype

    Meal m1 = breakfast;
    Meal m2 = lunch;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << (m2 == 1) << endl;
    cout << (m2 == 2) << endl;
    // m2 is 1  (kyuki lunch hai 1) but i used enum to increase readability of program usne breakfast ko 0,
    // lunch ko 1 and dinner ko 2 allocate krdiya
    return 0;
}