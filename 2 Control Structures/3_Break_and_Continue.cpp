// break -> break the loop & get outisde of loop 
// continue -> stop the particular iteration & jump to next iteration 

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            break;  // when i is 2, break makes the control exit from the loop without running below statement
        }
        cout<<i<<endl;
    }
    
    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            continue;  // when i is 2, continue makes skip this iteration(all statements written below), 
                       // & gives back control to loop for next 
        }
        cout<<i<<endl;
    }
    
    return 0;
}