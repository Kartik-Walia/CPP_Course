// ===================================== TEMPLATE FUNCTION OVERLOADING =====================================
// Function can be overloaded by making a template function with same name 
// In such cases, exact match takes highest priority
// If exact match isn't present, then the template fucntion is invoked 



#include<iostream>
using namespace std;

template <class T>
class Kartik {
public:
T data;

Kartik(T a) {
    data = a;
}

void display();
};

// It's not compulsary to make function inline, you can declare function outside the class also 
template <class T>
void Kartik<T> :: display() {
    cout << data << endl;
}

// =================== Overloading function by creating a function template with same name ===================
void func(int a) {
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a) {
    cout << "I am templatised func() " << a << endl;
}

template <class T>
void func1(T a) {
    cout << "I am templatised func() " << a << endl;
}

int main(){
    // Kartik<float> k(5.7);
    // Kartik<char> k('c');
    // Kartik<int> k(87);
    // cout << k.data << endl;
    // k.display();

    func(4);    // Exact match takes the highest priority 
    func1(4);   // No exact match, so templatised got called 
    
    return 0;
}