#include <iostream>
using namespace std;

// Forward declaration -> Giving guarantee to compiler that Complex class is present there in ahead of code
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // int sumRealComplex(Complex o1, Complex o2)
    // {
    //     return (o1.a + o2.a);
    // }
    // Above Error as we just made compiler know that complex is ahead but we didnt told anything about a & b
    // So we just declare here and give definition after defining the complex class
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2);

    // Instead of making members of different class friend one by one, we can also make the whole class as friend
    // Declaring the entire class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int res2 = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << res2 << endl;

    return 0;
}