#include <iostream>
#include "asiakas.h"

using namespace std;

Asiakas teppo("Teppo",200);
Asiakas mari("Mari",300);

int main()
{
    teppo.talletus(5000);
    mari.talletus(400);
    teppo.showSaldo();
    mari.showSaldo();
    teppo.tiliSiirto(2000,mari);
    teppo.showSaldo();
    mari.showSaldo();
    return 0;
}
