// new & delete are operators as well as keywords, for dynamic allocation of memory

#include <iostream>
using namespace std;

int main() {
    // new Keyword
    int *p = new int(40); // Dynamically initialization of an int variable (could be float, char also)
    cout << "The value at address p is " << *(p) << endl;

    // We want to allocate a block of memory (Dynamic allocation of contiguous memory)
    int *arr = new int[3]; // Dynamically initialized an array
    arr[0] = 10;
    // arr[1]=20;
    *(arr + 1) = 20; // Same as above (Using pointer arithmetic)
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator to free dynamically allocated block of memory
    // To free dynamically allocated array syntax is below :
    delete[] arr;
    cout << "After deletion of complete array" << endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}

