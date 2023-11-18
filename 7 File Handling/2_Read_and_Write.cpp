#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstream
3. ofstream --> derived from fstream
*/

// In order to work with files, you'll have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor 
// 2. Using the member function open() of the class 

int main(){
    string st = "Kartik";
    string st2;
    // Opening files using Constructor & writing it
    ofstream out("Sample.txt");     // Write operation 
    out << st;
    
    // Opening files using Constructor & reading it
    ifstream in("Sample2.txt");     // Read operation
    // in >> st2;   // Cursor goes at end of word
    // cout << st2 << endl;
    // Whenever we use ifstream object, then we don't get spaces and new lines thatswhy only "This" is printed
    // To solve this problem, read a whole line, you can use getline function (ifstream obj, string)
    getline(in, st2);   // Cursor goes at end of line
    cout << st2 << endl;
    getline(in, st2);   
    cout << st2 << endl;
    // getline function takes 1 line at a time 

    return 0;
}