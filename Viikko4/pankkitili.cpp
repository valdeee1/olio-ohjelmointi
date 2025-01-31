#include "pankkitili.h"

Pankkitili::Pankkitili(string n) {
    omistaja = n;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if(summa <= 0)
    {
        cout<<"Ei voida tallettaa "<<summa<<endl;
        return false;
    }
    else{
        saldo += summa;
        cout<<summa<<" talletettu henkilolle "<<omistaja<<endl;
        return true;
    }
}

bool Pankkitili::withdraw(double summa)
{
    if(summa>saldo)
    {
        cout<<"Ei tarpeeksi varoja tililla"<<endl;
        return false;
    }
    else{
        saldo -= summa;
        cout<<summa<<" nostettu"<<endl;
        return true;
    }
}
