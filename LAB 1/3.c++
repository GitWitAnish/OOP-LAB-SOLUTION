#include<iostream>
#include<string.h>
using namespace std;

class Employee{
private:
    string name, address;
    int age, salary;


    public:

    void readData(){

         cout<<"Enter name:"<<endl;
         cin.ignore();
         getline(cin, name);


         cout<< "Enter address:"<< endl;
         getline(cin, address);


         cout<<"Enter age:"<<endl;
         cin>> age;

         cout<<"Enter salary:"<< endl;
         cin>> salary;

    }

    void dislayData(){

        cout<<"Name:"<< name << endl;
        cout<<"address:"<< address<< endl;
        cout<<"age:"<< age<< endl;
        cout<<"salary:"<< salary << endl;
    }
};

int main(){

    Employee majdoor[10];

    for(int i=0; i<10; i++){
        
        cout<< "Enter data of employee"<< i+1 << ":"<< endl;
        majdoor[i].readData();

    }
for(int i=0; i<10; i++){
        cout<< " data of employee"<< i+1 << ":"<< endl;
        majdoor[i].dislayData();

    }

return 0;
}

