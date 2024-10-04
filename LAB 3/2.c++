#include <iostream>
using namespace std;

class Counter {
public:
    static int count; 

    Counter() {
        count++; 
    }

   
    static int getCount() {
        return count;
    }
};


int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

  
    cout << "Total objects created: " << Counter::getCount() << endl;

    return 0;
}

