// to meter 
#include <iostream>

using namespace std;

class Distance1 {
public:
    int feet;
    int inches;

    Distance1(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

class Distance2 {
public:
    double meters;

    Distance2(double m = 0) : meters(m) {}

    Distance1 toFeetAndInches() const {
        double totalFeet = meters * 3.28;
        int feet = totalFeet;
        double fractionalFeet = totalFeet - feet;
        int inches = fractionalFeet * 12;
        return Distance1(feet, inches);
    }

    void display() const {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Distance2 d2(1.72);

    cout << "Distance in meters: ";
    d2.display();

    Distance1 d1 = d2.toFeetAndInches();

    cout << "Converted distance in feet and inches: ";
    d1.display();

    return 0;
}
