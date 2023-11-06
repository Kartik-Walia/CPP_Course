#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of employee is " << id << endl;
    }
};

int main()
{
    Employee harry, rohan, lovish, shruti;
    harry.setId();
    harry.getId();

    // If your employee number gets high (2000, 3000, etc.) then take company name and store each employee in it 
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}