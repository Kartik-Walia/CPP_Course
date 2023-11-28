#include <iostream>
using namespace std;

int main() {
    try {
        int numerator, denominator, result;
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }

        result = numerator / denominator;
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cerr << "Exception caught: " << e.what() << endl;
    } catch (...) {
        cerr << "Unknown exception caught." << endl;
    }

    return 0;
}
