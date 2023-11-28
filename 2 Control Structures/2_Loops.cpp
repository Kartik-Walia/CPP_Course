/*
THERE ARE 3 TYPES OF LOOPS IN C++
1. For Loop
2. While Loop
3. do-While Loop
*/

#include <iostream>
using namespace std;

int main()
{
    // ============================================== FOR LOOP ==============================================
    // SYNTAX:
    // for (initialization; condition; updation)
    // {
    //     Loop body(C++ code);
    // }
    cout << "Running For Loop" << endl;
    for (int i = 1; i <= 4; i++)
    {
        /* code */
        cout << i << endl;
    }
    // Example of infinite for loop
    // for (int i = 1; 3 <= 4; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    // ============================================= WHILE LOOP =============================================
    // SYNTAX :
    // while(condition){
    //     C++ statements;
    // }
    cout << "Running While Loop" << endl;
    int i = 1;
    while (i <= 4)
    {
        cout << i << endl;
        i++;
    }
    // Example of infinite while loop
    // i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // ============================================ DO-WHILE LOOP ============================================
    // SYNTAX:
    // do{
    //     C++ statements;
    // } while(condition);
    cout << "Running do-While Loop" << endl;
    i=1;
    do{
        cout<<i<<endl;
        i++;
    } while(false);
    // Irrescpective of any condition. do-While loop runs atleast 1 time 
    // Unlike while loop, it checks condition after running the loop for the 1st time 

    return 0;
}