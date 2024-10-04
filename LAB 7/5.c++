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

    return 0;
}
