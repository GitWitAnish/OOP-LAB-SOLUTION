#include <iostream>

using namespace std;

class Distance2;  

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
    int meters;
    int centimeters;

    
    Distance2(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

 
    void display() const {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
};


Distance2 convertToDistance2(const Distance1& d1) {
   
    int totalInches = d1.feet * 12 + d1.inches;
  
    int totalCentimeters = totalInches * 2.54;
    
    int meters = totalCentimeters / 100;
    int centimeters = totalCentimeters % 100;
    return Distance2(meters, centimeters);
}

int main() {
    Distance1 d1(5,8);  

    cout << "Distance in feet and inches: ";
    d1.display();

    Distance2 d2 = convertToDistance2(d1);

    cout << "Converted distance in meters and centimeters: ";
    d2.display();

    return 0;
}
