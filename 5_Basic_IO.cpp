// C++ comes with libraries which helps us in pforming input/output.
// In C++ sequence of bytes corresponding to input and output are commonly known as streams.

// Input stream: Direction of flow of bytes takes place from input device (eg: keyboard) to main memory

// Output stream: Direction of flow of bytes take place from main memory to output device (eg: display)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    // << is called Insertion operator
    cout << "Enter value of num1 \n";
    // << is called Extraction operator
    cin >> num1;

    cout << "Enter value of num2 \n";
    cin >> num2;

    cout << "The sum is:" << num1 + num2;

    return 0;
}