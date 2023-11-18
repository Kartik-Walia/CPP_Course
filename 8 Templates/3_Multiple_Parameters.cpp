// =============================== CLASS TEMPLATES WITH MULTIPLE PARAMETERS ===============================

/*
SYNTAX
template <class T1, class T2... (Comma Separated)>
class class_name {
    //body
}
*/

#include<iostream>
using namespace std;

template <class T1, class T2>
// It's not necessary that T1, T2, T3... are datatypes, they can be classes also
// We can suppply class also in place of T's
class myClass {
public:
T1 data1;
T2 data2;

myClass(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

void display() {
    cout << this->data1 << endl << this->data2 << endl;
}
};

int main(){
    myClass<int, char> obj(1, 'c');
    obj.display();
    
    myClass<int, float> obj2(1, 0.8);
    obj2.display();
    
    myClass<char, float> obj3('C', 1.8);
    obj3.display();
    
    return 0;
}