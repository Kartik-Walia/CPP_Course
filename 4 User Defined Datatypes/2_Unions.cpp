// WHAT IS UNION ?
// Union is similar to structure but union provide better memory management

#include <iostream>
using namespace std;

union money
{
    /* data */
    // Here, at a single time i can use only 1 way among these 3 to exchange money. In such cases, we use union
    // C++ says if you want to use 1 way at single time, then let me make memory shared between these 3 ways
    int rice;
    char car;
    float pounds;
    // Let say int takes 4 bytes, char takes 1 bytes, float takes 4 bytes, then in case of structure the memory
    // allocated to it would be 9 bytes where as in case of union the memory allocated to it would be 4 bytes
    // Union allocates the maximum memory among all entities bcoz you wnat to use 1 at a time
};

int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';            // Rice got overwritten
    cout << m1.rice << endl; // Gives garbage value of rice, as it got overwritten while assigning value to car
    cout << m1.car << endl;  // Gives correct value bcoz at a time you can use only 1 way
    return 0;
}