// When you only need to hold data --> Use structure
// When you need to hold data as well as keep it secure --> Use class

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)  // setData being class function can access private members 
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 134; // Error: private member can't be accessed directly, can be accessed by class function only
    harry.setData(1, 2, 4);
    harry.d = 34;
    harry.e = 89;
    harry.getData();

    return 0;
}