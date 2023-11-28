// ======================================== POINTER TO DERIVED CLASS ========================================
/*

Pointer of Base class can be pointed to the object of Derived class
But if you call any function of pointer let's say display, then it will call display function of Base class
(not the derived class) because the pointer is of Base class
This is known as "Late Binding" that means it binds to Base class function not to Derived class function
because it is the pointer of the base class not the derived class

C++ ka rule hai agar aapka Base class ka pointer hai aur aapne usko Derived class se bhi point kradia, toh
aap agar uss pointer ki sahayeta se display function run kroge toh voh Base class ka run hoga

Base class pointer when pointed to Derived class, can only access those properties of Drived class which
are inherited from Base class

*/

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // pointer to point object of BaseClass
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // BaseClass ke pointer ko point kradia DerivedClass ke object se

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    // base_class_pointer->ver_derived = 134;  // Invalid
    // Agar aapne ek Base class ka pointer bnaya aur aapne derived class se point krvadiya, toh sirf aap Base
    // class se jo prioperties aur methods inherit hui hain, unhi ko access kr skte ho

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}

// We can tell before by just looking that to which display function it would bind
// But compiler decision about which display function would run is taken at run time and this is know as
// Runtime Polymorphism

// Pointer always binds to it 's own type irrespective of it' s pointed to Base or Derived class
