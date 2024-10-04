#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        int a = 10;
        int b = 0;

        if (b == 0) {
            throw runtime_error("Division by zero error!");
        }

        int c = a / b;
        cout << "Result: " << c << endl;
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        int* arr = new int[5];
        delete[] arr;

        if (!arr) {
            throw runtime_error("Memory allocation error!");
        }

        arr[10] = 100; // Accessing out of bounds
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
