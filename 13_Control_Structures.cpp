/*
BASIC CONTROL STRUCTURES :
1. Sequence Structure
    Entry -> Action1 -> Action2 -> Exit
2. Selection Structure
    Entry -> Condition -> A1(T) & A2(F) -> Exit
3. Loop Structure
    Entry -> Condition -> A1&Loop(T) & A2(F) -> Exit
*/

#include <iostream>
using namespace std;

int main()
{
    // ==================================== SELECTION STRUCTURE : IF-ELSE ====================================
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if ((age < 18) && (age > 0))
    {
        cout << "You cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass to my party" << endl;
    }
    else
    {
        cout << "You can come to my party" << endl;
    }

    // ================================== SELECTION STRUCTURE : SWITCH CASE ==================================
    switch (age)
    {
    case 18:
        /* code */
        cout << "You're 18";
        break;
    case 22:
        /* code */
        cout << "You're 22" << endl;
        break;
    case 2:
        /* code */
        cout << "You're 2" << endl;
        break;
        // If you don't use break then after first closed swicth, all switches will automatically get closed

    default:
        cout << "No special cases" << endl;
        break;
    }

    cout << "Done with switch case" << endl;

    return 0;
}