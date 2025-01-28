#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon");
    kokki.makeSalad(12);
    kokki.makeSoup(9);
    ItalianChef Mario("Mario");
    Mario.askSecret("pizza",17,15);
    return 0;
}
