// Write a function to swap private data of both classes

#include <iostream>
using namespace std;

// Forward Declaration
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void intData(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;

public:
    void intData(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }

    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y) // Since it took reference, so it changes the actual parameter
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    oc1.intData(34);
    c2 oc2;
    oc2.intData(67);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes ";
    oc2.display();

    return 0;
}