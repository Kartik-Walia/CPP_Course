// "this" is a keyword which is a pointer which points to the object which invokes the member function 

// To return the object for which this memeber function is running, to return the obejct, 
// Above can be done by using "this" keyword, you can write return this
// And you'll get the pointer which is pointing to the object which called that particular member function 
// "this" pointer points to the object which calls that particular member function 

// Using "this" pointer is the only way to return object that invoked the present memeber function 

#include<iostream>
using namespace std;

class A{
    int a;
    public:
    // void setData(int a){
    //     a=a;
    // }
    // Above gives garbage value 
    
    // "this" pointer is used in case you want to keep argument name and class variable name same 
    A & setData(int a){
        this->a =a;
        return *this;   // setData is returning an object, so i can directly use getData on it 
    }

    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    
    // Since, setData is returning object, i can use getData directly on it 
    A b;
    b.setData(4).getData(); // No need to use getData explicitly

    return 0;
}