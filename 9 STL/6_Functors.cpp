// Functors : Function Objects (Function wrapped in a class so that it's available like an object)
// We made function as objects so that we can use all these things together in OOPs paradigm
// Function object is an object that workd like a function 
// All the Functors are located inside functional header file 

#include<iostream>
#include<functional>
#include<algorithm>     // To be able to use sort function
using namespace std;

int main(){
    int arr[]={1, 73, 4, 2, 54, 7};
    // sort(arr, arr+5);   // Sorts first 5 elements of array in increasing order
    sort(arr, arr+6, greater<int>());   // greater<int>() is a function object (sorts in descending order)

    for (int i=0; i<6;i++){
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}