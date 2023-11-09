// Making a particular operator doing different functions is known as operator overloading 
// Making a operator do custom work is known as Operator overloading 

// Syntax for operator overloading :
// return_type operator [[operator]] (i/p argument) {pverloading}
// like in case of + binary operator, a+b 
// second argument b is your input argument 
// first argument a is current object (pointed by this)

// List of Operators that cannot be overloaded in C++ :
// 1. ::
// 2. .*
// 3. .
// 4. ?:

#include<iostream>
using namespace std;

class B{
    public:
    int a;

    // Overloading + operator  
    void operator +(B &obj){
        // int value1=this->a; int value2=obj.a;
        // cout<<"Output "<<value2-value1<<endl;
        cout<<"Output "<<((obj.a)-(this->a))<<endl; // Same as above
    }

    // Overloading () operator  
    void operator () (){
        cout<<"I am the bracket and my value is "<<this->a<<endl;
    }
};

int main(){
    B obj1, obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    obj1();
    
    return 0;
}