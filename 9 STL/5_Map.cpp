// Map : used to store key value pairs
// Map is an associative array

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Kartik"] = 98;
    marksMap["Himanshu"] = 59;
    marksMap["Kanika"] = 2;

    // marksMap.insert({{"Kozume"s, 169.2}, {"Kuroo", 187.7}});    // For some reason not working correctly
    marksMap.insert(make_pair("Kozume", 169));
    marksMap.insert(make_pair("Kuroo", 187));

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is " << marksMap.size() << endl;
    cout << "The max size is " << marksMap.max_size() << endl;
    cout << "The empty return value is " << marksMap.empty() << endl; // 0->Non-empty & 1->Empty

    return 0;
}