#include <iostream>
using namespace std;

int main() {
    int num, denum, output;
    cout << "Please enter the numbers(numerator then denominator) for division" << endl;
    cin >> num;
    cin >> denum;

    try {
        if (denum == 0) {
            throw denum;
        } else {
            output = num / denum;
            cout << "The output after the division is: " << output << endl;
        }
    } catch (int d) {
        cout << "Devision by 0 isn't possible" << endl;
    }

    return 0;
}