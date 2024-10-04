#include<iostream>

using namespace std;

enum anime {
    naruto=1,
    demon=2,
    goblin=3
};

int main (){

    anime today;
    today = demon;

    cout<< "Anime to watch today "<< today<< endl;
    return 0;
}