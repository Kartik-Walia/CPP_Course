#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 34;
    cout << "Value of a was " << a << endl;
    a = 45;
    cout << "Value of a is " << a << endl;

    // Sometimes we want that value of some variables can't be changed, then we use constants for it
    // ============================================ CONSTANTS ============================================
    const int b =3;
    // b=45;  -> throws error as value of constant variable cannot be modfiied bcoz b is constant 
    // Use is sometimes you don't want to change certain variable values like pi

    // =========================================== MANIPULATORS ===========================================
    // Manipulators are operators which helps you to format your data display 
    // endl -> use to add a line break (present in iostream header file)
    // setw -> use to set the space it takes (present in iomanip header file)
    int x=3, y=78, z=1233;
    cout<<"Value of x without setw is "<<x<<endl;
    cout<<"Value of y without setw is "<<y<<endl;
    cout<<"Value of z without setw is "<<z<<endl;
    
    cout<<"Value of x with setw is "<<setw(4)<<x<<endl;
    cout<<"Value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"Value of z with setw is "<<setw(4)<<z<<endl;
    // This way you can make your numbers right justified

    // ======================================== OPERATORS PRECEDENCE ========================================
    // a*5+b-45+87 = ((((a*5)+b)-45)+87)
    // * has high precedence thn + and + & - have same precendence but have associativity left->right
    // Associativity is used when precedence of operators is same

    return 0;
}