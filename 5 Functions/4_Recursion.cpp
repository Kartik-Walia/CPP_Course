// When a function calls itself again & again, it's known as Recursion

// 0! = 1 by definition

#include <iostream>
using namespace std;

// ====================================== ITERATIVE APPROACH (FACTORIAL) ======================================
unsigned long long factIterative(int n){
    unsigned long long result =1;
    for(int i=1; i<=n; i++){
        result*=i;
    }
    return result;
}

// ====================================== RECURSIVE APPROACH (FACTORIAL) ======================================
int fact(int n)
{
    // base case
    if (n <= 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

// Step by Step calculation of factorial 4
// fact(4) = 4 * fact(3);
// fact(4) = 4 * 3 * fact(2);
// fact(4) = 4 * 3 * 2 * fact(1);
// fact(4) = 4 * 3 * 2 * 1 = 24;

// ====================================== RECURSIVE APPROACH (FIBONACCI) ======================================
int fib(int n){
    // base case 
    if(n<2){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

// Step by Step calculation of fibonacci 5
// fib(5) = fib(4) + fib(3)
// fib(5) = (fib(3) + fib(2)) + (fib(2) + fib(1))
// Hence, Recursion leads to Function Overhead 
// So Recursion is not always better than iterative

// ====================================== ITERATIVE APPROACH (FIBONACCI) ======================================
int fibIterative(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fib_n_minus_1 = 1, fib_n_minus_2 =1, fib_n =0;
    for(int i=2; i<=n; i++){
        fib_n=fib_n_minus_1+fib_n_minus_2;
        fib_n_minus_2=fib_n_minus_1;
        fib_n_minus_1=fib_n;
    }

    return fib_n;
}

int main()
{
    int n, a;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    cout << "Factorial of " << n << " is " << factIterative(n) << endl;

    cout << "Enter a number" << endl;
    cin >> a;
    // (Assuming indexing starts from zero, fib(0)=1 & fib(1)=1)
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fibIterative(a)<<endl;
    return 0;
}