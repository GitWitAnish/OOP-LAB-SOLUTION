// To feet and inches



#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
  
    Distance(int ft = 0, int in = 0) : feet(ft), inches(in) {}


    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }


    double toMeters() const {
        double totalFeet = feet + inches / 12.0;
        double meters = totalFeet / 3.28;
        return meters;
    }
};

int main() {
    Distance d1(5, 8);  

    cout << "Distance in feet and inches: ";
    d1.display();

    double meters = d1.toMeters();
    cout << "Distance in meters: " << meters << " meters" << endl;

    return 0;
}
