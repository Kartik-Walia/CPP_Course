// ============================================ FUNCTION TEMPLATES ============================================

#include <iostream>
using namespace std;

// float funcAverage(int a, int b) {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b) {
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a + b) / 2;
    return avg;
}

template <class T>
void swap2(T &a, T &b){ // We named it swap2 bcoz swap is already present!
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a, b;
    // a = funcAverage(5, 2);
    // // In C++, we can use printf as well instead of cout
    // printf("The avreage of these numbers is %.3f\n", a);

    // b = funcAverage2(5, 2.4);
    // printf("The avreage of these numbers is %.3f\n", b);

    a = funcAverage(5, 2.4);
    printf("The avreage of these numbers is %.3f\n", a);

    int x = 5, y = 7;
    swap2(x, y);
    cout << x << endl << y << endl;

    return 0;
}