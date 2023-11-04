#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// ============================================= CALL BY VALUE =============================================
// This won't swap actual parameters
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// ==================================== CALL BY REFERENCE USING POINTERS ====================================
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// ============================= CALL BY REFERENCE USING C++ REFERENCE VARIABLES =============================
void swapReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// ============================ RETURN BY REFERENCE USING C++ REFERENCE VARIABLES ============================
int &swapReturnReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return x; // Returning a int type reference variable
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is " << sum(a, b) << endl;

    cout << endl;

    cout << "Before running swap function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(a, b);
    cout << "After running swap function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // This gives same values of a & b, as a copy of actual parameters is generated in formal parameters
    // But the actual parameters remain unaffected

    cout << endl;

    cout << "Before running swapPointer function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapPointer(&a, &b); // This works well bcoz we gave function address and it changes value at that address
    cout << "After running swapPointer function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    cout << endl;

    cout << "Before running swapReferenceVar function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapReferenceVar(a, b); // This works well bcoz x & y now points to a & b
    cout << "After running swapReferenceVar function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    cout << endl;

    cout << "Before running swapReturnReferenceVar function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapReturnReferenceVar(a, b) = 766; // This works well bcoz x & y now points to a & b
    cout << "After running swapReturnReferenceVar function" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}