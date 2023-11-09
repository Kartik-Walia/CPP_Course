// Base class ka pointer agar Derived class ko point kre, toh display function call hone pe Base class ka call
// hoga naaki Derived class ka kyuki pointer toh Base class ka hai
// Issi default behaviour ko change krne ke liye, we have virtual functions

// On making display function of Base class virtual, Base class says that if my type of pointer points to
// Derived class then on calling display function run display of Derived class only instead of Base class

// Virtual function is used to override default behaviour

// Polymorphism hoti hai ek property jis se object joki alag alag classes ko belong kar rhe hain voh ek
// tarah ke message ko respond krte hain, here it's display function

// If method of base class is made virtual, then with help of base class type pointer pointing to derived
// class, you can run inherited method
// With this runtime polymorphism is achieved
// Bcoz the binding of function happens at runtime means actual compiler binds i.e. associates object with
// function address is done at runtime

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    // void display()
    // {
    //     cout << "1 Displaying Base class variable var_base " << var_base << endl;
    // }

    // Making display function of Base class virtual
    virtual void display()
    {
        cout << "1 Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Displaying Base class variable var_base " << var_base << endl;
        cout << "2 Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}