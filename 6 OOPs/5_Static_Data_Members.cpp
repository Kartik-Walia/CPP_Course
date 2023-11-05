#include <iostream>
using namespace std;

// =========================================== STATIC VARIABLES ===========================================
// We're unable to calculate no. of employees as each object has it's own count
// So, we cannot pass count from 1 object to another, this issue is solved with help of static variable
// Static variable isn't written inside of class, it's written outside class
// Memory of static variable isn't associated with object, it's associated with class
// Thatshwy static variables are also known as "Class variables"
// Thatswhy static variable is declared outisde the class
// Scope of static member is inside class & it's lifetime is till program termination
// Static varibale is shared among all objects fo the class
// Here, harry, rohan & lovish share the same count variable
// You need to write static variables at both places inside and outside the class
// but you can only intilize it's avleu outside the class

// ============================================ STATIC FUNCTIONS ============================================
// Static function is created to access value of static members
// Static functions have access to only other static functions and static variables
// They don't have any other access except other static functions and static variables
// Are called using class name (not object name)

class Employee
{
    int id;
    // int count=0;

    // count is the static data member of class Employee
    static int count; // Static variable by default gets initialised with value as 0
    // If you want to initilize the static variable by some other value you can do it outside class not inside
    // static int count = 1000; -> This is syntax error

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << " and this is employee number " << count << endl;
    }
    // Static function to access value of static variable count
    static void getCount(void)
    {
        // cout<<id; // Error bcoz static function doesn't have access to anything except other static members
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // Default value is 0
// int Employee::count = 1000; -> This doesn't give error

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // Cannot do this as id and count are private members of class

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}