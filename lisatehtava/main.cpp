#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
    pankkitili tili1("Anna Virtanen", "1111",1000.5);
    pankkitili tili2("Veijo Virtanen", "2222",100.0);

    cout<<"tulostetaan tilitiedot"<<endl;
    tili1.tulostaTilitiedot();
    tili2.tulostaTilitiedot();

    return 0;
}
