#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10;
        int b = 0;

        if (b == 0) {
            throw "Division by zero error!";
        }

        int c = a / b;
        cout << "Result: " << c << endl;
    }
    catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }

    try {
        int* arr = new int[5];
        delete[] arr;

        if (!arr) {
            throw "Memory allocation error!";
        }

        arr[10] = 100; // Accessing out of bounds
    }
    catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }
    catch (const std::exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    }

    return 0;
}
