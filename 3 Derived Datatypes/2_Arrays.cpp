// WHAT IS ARRAY?
// An array is a collection of items of similar type stored in contiguous memory locations.

#include<iostream>
using namespace std;

int main(){
    // int marks[4]={23, 45, 56, 89};
    int marks[]={23, 45, 56, 89};   // Another way to represent above line of code

    int mathMarks[4];
    mathMarks[0]=2278;
    mathMarks[1]=738;
    mathMarks[2]=378;
    mathMarks[3]=578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=455;   // Values of array can be changed
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // Doing above thing using for loop 
    cout<<"Using for loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    

    return 0;
}