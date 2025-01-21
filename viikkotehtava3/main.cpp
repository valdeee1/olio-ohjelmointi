#include "chef.h"
#include "italianchef.h"

using namespace std;
int main()
{
    Chef olio("Gordon");
    olio.makeSalad(11);
    olio.makeSoup(14);
    ItalianChef kokki("Luigi");
    kokki.askSecret("pizza", 12, 12);
    return 0;
}
