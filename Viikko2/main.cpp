#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNumber;
    cout<<"Tervetuloa"<<endl;
    cout<<"Anna korkein mahdollinen numero: ";
    cin>>maxNumber;
    game game(maxNumber);
    game.play();
    return 0;
}
