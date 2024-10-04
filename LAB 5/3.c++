#include <iostream>
using namespace std;


template <typename T>
void print(T value) {
    cout << "Value: " << value << endl;
}

template <typename T1, typename T2>
void print(T1 value1, T2 value2) {
    cout << "Value 1: " << value1 << ", Value 2: " << value2 << endl;
}

int main() {
    int a = 5;
    double b = 10.5;
    char c = 'A';

    
    print(a);

    
    print(a, b);


    print(c);

    return 0;
}
