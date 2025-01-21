#include "pankkitili.h"

Pankkitili::Pankkitili(string tilinum , string nimi, double sald) {
    tilinumero = tilinum;
    tilinomistaja = nimi;
    saldo = sald;
}

void Pankkitili::talleta(double raha)
{
    saldo = saldo + raha;
}

void Pankkitili::nosta(double raha)
{
    saldo = saldo - raha;
}

void Pankkitili::tulostaTilitiedot()
{
    cout<<"Tilitiedot: "<<endl;
    cout<<tilinomistaja<<", "<<tilinumero<<", "<<saldo<<"."<<endl;
}

double Pankkitili::getSaldo()
{
    return saldo;
}
/*
bool Pankkitili::siirra(Pankkitili &, double)
{

}
*/
