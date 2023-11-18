#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our file with kout stream 
    ofstream kout("ConstructorSample.txt");

    // Creating a name string & taking name from user
    string name;
    cout << "Enter your name: " << endl;
    // cin >> name; // This doesn't consider anything after space, to consider space you can use getline func.
    getline(cin, name);

    // Writing a string to the file 
    kout << "My name is " + name << endl;
    kout.close();   // Cutted the link to the file we created above 

    ifstream kin("ConstructorSample.txt");
    string content;
    // kin >> content; // This doesn't consider anything after space, to consider space you can use getline func.
    getline(kin, content);
    cout << "The content of this file is: " << content << endl;
    kout.close();

    return 0;
}