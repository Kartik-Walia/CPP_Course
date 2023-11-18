#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("FunctionSample.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me";
    out.close();
    
    ifstream in;
    string st, st2;
    in.open("FunctionSample.txt");
    // in >> st >> st2;    // Brings 1st word to st and 2nd word to st2
    // cout << st << st2 << endl;
    // For getting whole content of file, you can also use a while loop along with getline function 
    while(in.eof() == 0){   // Loop goes on till eof (end of file) becomes true (1) 
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    
    return 0;
}