#include <iostream>
using namespace std;

class Counter {
public:
    static int count; 
    
    Counter() {
        count++; 
    }

 
    friend void incrementCount(Counter&);

   
    static void displayCount() {
        cout << "Total objects created: " << count << endl;
    }
};


int Counter::count = 0;


void incrementCount(Counter& obj) {
    obj.count++;
}

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

   
    incrementCount(obj1);

    Counter::displayCount();

    return 0;
}
