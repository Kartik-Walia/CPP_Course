// Name of array itself is a pointer which stores address of 1st emmeber of array 
// int a=3;
// &a -> adddress of a 
// int marks[4];
// &marks -> Wrong!
// marks -> address of first block

// =========================================== POINTER ARITHMETIC ===========================================
// On incrementing pointer by 1, it gives starting address of second block 
// p++ pr p+1 -> gives starting address of 2nd block 
// p+2 -> gives starting address of 3rd block 
// p+3 -> gives starting address of 4th block 
// BASIC FORMULA : address_new = address__current + i*sizeof(data_type)
// address_new = p+i and address_current = p 

#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 455, 89};
    int* p = marks;
    cout<<*(p++)<<endl; // First prints value at p, then increments p by 1
    cout<<*(++p)<<endl; // First increment p by 1, then prints value at p
    // cout<<"The value of *p is "<<*p<<endl;
    // cout << "The value of *(p+1) is " << *(p + 1) << endl;
    // cout << "The value of *(p+2) is " << *(p + 2) << endl;
    // cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}