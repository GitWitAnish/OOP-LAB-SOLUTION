#include <iostream>

using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
  
    Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    
    void display() const {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }


    Distance operator+(const Distance &d) const {
        Distance result;
        result.centimeters = this->centimeters + d.centimeters;
        result.meters = this->meters + d.meters + result.centimeters / 100;
        result.centimeters %= 100;
        return result;
    }
};

int main() {
    Distance d1(3, 75); 
    Distance d2(2, 50);  
    Distance d3 = d1 + d2;

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    cout << "Total Distance: ";
    d3.display();

    return 0;
}
