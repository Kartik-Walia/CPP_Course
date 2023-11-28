#include <iostream>
using namespace std;

// Base Class
class Employee {
public:
    int id;
    float salary;
    Employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
    // NOTE : On creating a derived class base class constructor is automatically called, so default 
    // base class constructor should be declared (if base class has a constructor already)
};

// Derived Class syntax
/*
class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}}
{
    class members / methods / etc...
}
*/

/*
VISIBILITY-MODE (Default : Private)
1. public (Base class public members becomes Derived class public members)
2. private (Base class public members becomes Derived class private members)

# Private members of base class cannot be inherited ever!
# Only public members of base class can be inherited!
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee {
public:
    int languageCode;
    Programmer(int inpId) {
        id = inpId;     // Error if id was private member of base class Employee (Private can't be inherited)
        languageCode = 9;
    }
    void getData() {
        cout << id << endl;
    }
};

int main() {
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}
