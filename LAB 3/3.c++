#include <iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    
    Person p1("Anish", 19), p2("Milan", 69);


    Person* p3 = &p2;


    p1.display();
    p2->display();


    delete p2;

    return 0;
}
