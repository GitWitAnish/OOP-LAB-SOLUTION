#include <iostream>
using namespace std;

template <typename T>
class Swapper {
public:
    T a, b;

    Swapper(T x, T y) : a(x), b(y) {}

    void swapValues() {
        T temp = a;
        a = b;
        b = temp;
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Swapper<int> intSwapper(5, 10);

    cout << "Before swapping: ";
    intSwapper.display();

    intSwapper.swapValues();

    cout << "After swapping: ";
    intSwapper.display();

    return 0;
}
