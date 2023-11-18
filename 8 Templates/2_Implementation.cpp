#include <iostream>
using namespace std;

template <class T>      // Iska mtlab yeh hai ki jahan mai T use kr rha hun, wahan mai datatypes specify krunga
class Vector{
public:
    T *arr;
    int size;
    Vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v){
        T d = 0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    // Vector<int> v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    
    // Vector<int> v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    // int a = v1.dotProduct(v2);
    // cout << a << endl;
    
    Vector<double> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    
    Vector<double> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    double a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}

// If template wasn't there, then you need to create different classes for different datatypes 
// By creating templates, we can say that we passed the datatype as variable which saved us from creating 
// many classes for different datatypes 