#include<iostream>
using namespace std;

int main(){
    int age=17;

    try{
        if(age>=18){
            cout<<"You have access to drink the alcohol"<<endl;
        } else{
            throw(age);
        }
    } catch(int age){
        cout << "You don't have the access to drink alcohol because your age is less than 24\n";
        cout<<"Your age is "<<age<<endl;
    }
    
    return 0;
}