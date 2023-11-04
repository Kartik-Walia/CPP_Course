// WHAT IS STRUTURE ?
// Structure is a user-defined datatype whose entities are of different datatypes
// Structure is then used to create instance of structure
#include <iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };
// ABove structure can be accessed in short using typedef
typedef struct employee // typedef -> Jisko mai pehle struct employee bolta tha, usko mai ab 'ep' bolunga
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    // Creating instance of structure employee
    // struct employee harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // After using typedef above lines can be written as
    ep harry;
    ep shubham;
    ep rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;

    return 0;
}