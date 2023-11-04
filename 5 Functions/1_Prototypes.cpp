// Function prototype tells compiler that a particular function is about to be be created
// So, compiler gets ready before hand to execute those functions
// SYNTAX OF FUNCTION PROTOTYPE :
// type function_name(arguments);
#include <iostream>
using namespace std;

// Creating function prototype -> Gives assurity not guarantee
// int sum(int a, int b);  // This gives assurity to compiler that function sum() would get declared definately
int sum(int, int); // -> Acceptable
// int sum(int a, b) -> Not Acceptable

// void g(void); -> Acceptable
void g(); // -> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    // Actual parameters are the value passed to function (here, num1 & num 2)
    cout << "The sum is " << sum(num1, num2) << endl;

    g();

    return 0;
}

int sum(int a, int b)
{
    // Formal parameters are parameters created in function defination (here, a & b)
    // Formal parameters a & b will be taking values from actual parameters num1 & num2
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello, Good Morning!" << endl;
}