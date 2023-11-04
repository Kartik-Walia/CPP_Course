// Inline functions saves time taken in calling function and copying arguments, increases speed of program
// Inline function gets expanded in 1 line, compoiler replaces inline function call with inline function code

// Convert only those function to inline which takes less no. of lines in code

// If we make big functions inline, then there wont be space available in your cache
// Your program size will increase so much in memory that sintead of advantage it would give uh disadvantage

// WHEN NOT TO USE INLINE FUNCTIONS ?
// - Recursion
// - Static Variables
// - Loop
// - Switch Statements

// REMEMBER
// Inline function is a request to compiler, it's upon compiler that it accepts the request or reject it.
// Compiler does optimization on it's own level

#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

int productStatic(int a, int b)
{
    static int c = 0; // This executes only once
    c += 1;           // Next time this function is run, the value of c will be retained
    return a * b + c;
}

// =========================================== DEFAULT ARGUMENTS ===========================================
// Default arguments (Here factor) -> Values which you get by default, if you don't pass any value
// If u gave value, then it's gonna be accepted, otherwise compiler considers default value
// NOTE : Default arguments are always written after compulsary arguments
// float moneyRecieved(float factor=1.04, int currentMoney) -> Not Acceptable
float moneyRecieved(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// =========================================== CONSTANT ARGUMENTS ===========================================
// Constant argument is used to make accidently function won't be able to change the value
// This is mostl of times valid for reference variables and pointers (when you pass arguments by reference)
// int strlen(const char *p){  // I don't want function to change my string accidently!
// }

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will recieve " << moneyRecieved(money) << " Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recieve " << moneyRecieved(money, 1.1) << " Rs after 1 year" << endl;
    return 0;
}