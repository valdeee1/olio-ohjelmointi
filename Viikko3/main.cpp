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
    Mario.askSecret("pizza",12,12);
    return 0;
}
