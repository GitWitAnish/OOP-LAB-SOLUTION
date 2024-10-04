#include<iostream>
using namespace std;

class box{
    private:
    int l,b,h;

    public:

    box(int length, int breadth, int height){
l=length;
b=breadth;
h=height;
    }

    int Volume(){
        return l*b*h;
    }


};

int main ()
{
box a(1,2,3);
int vol=a.Volume();


cout<<"Volume:"<< vol << endl;
return 0;
}