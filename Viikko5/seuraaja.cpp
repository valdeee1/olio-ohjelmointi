#include "seuraaja.h"

Seuraaja::Seuraaja(string n) {
    cout<<"Seuraaja "<<n<<" luotu"<<endl;
    nimi = n;
    next = nullptr;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout<<nimi<<" sanoo: "<<viesti<<endl;
}
