// ==================================== OOPs - Classes and Objects ====================================
/*
C++ --> Initially called C with classes by stroustroup
class --> extension of structures (in C)
structures had limitations (members are public and no methods)
classes --> structures + more
classes --> can have methods & properties
classes --> can make few members as private & few as public
structures in C++ are typedefed (not necessary to mention typedef keyword)
You can declare objects along with classes declaration like this :
class Employee{
    // Class definition
} harry, rohan, lovish;
harry.salary = 8 makes no sense if salary is private (you need to use method for it)
*/

#include <iostream>
#include <string>
using namespace std;

// ==================================== NESTING OF MEMEBER FUNCTION ====================================
class binary
{
// private:
    string s; // (By default every member in class is private)
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void); // To find 1's compliment of binary number
    void display(void);
    // In all these methods s was available bcoz s is private memeber of binary class
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();  // Nesting of memeber function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            continue;
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // Error as chk_bin() is private memeber (can be called inside memeber of class only)
    cout << "Before 1's compliment " << endl;
    b.display();
    b.ones_compliment();
    cout << "After 1's compliment " << endl;
    b.display();

    return 0;
}