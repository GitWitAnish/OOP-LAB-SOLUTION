#include <iostream>
using namespace std;


template <typename T>
void print(T value) {
    cout << "Template print: " << value << endl;
}

void print(int value) {
    cout << "Ordinary print: " << value << endl;
}

int main() {
    int a = 5;
    double b = 10.5;
    char c = 'A';


    print(a);


    print(b);

   
    print(c);

    return 0;
}
