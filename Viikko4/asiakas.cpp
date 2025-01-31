#include "asiakas.h"

Asiakas::Asiakas(string n, double l) : kayttotili(n), luottotili(n, l) {
    nimi = n;
    cout<<"Asiakkuus luotu henkilolle "<<nimi<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"Pankkitilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double summa)
{
    if(kayttotili.deposit(summa)==true){
    return true;
    }
    else{
        return false;
    }
}

bool Asiakas::nosto(double summa)
{
    if(kayttotili.withdraw(summa)==true){
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonMaksu(double summa)
{
    if(luottotili.deposit(summa)==true){
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonNosto(double summa)
{
    if(luottotili.withdraw(summa)==true){
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja)
{
    if(kayttotili.withdraw(summa))
    {
        vastaanottaja.talletus(summa);
        cout<<nimi<<" siirtaa "<<summa<<" henkilolle "<<vastaanottaja.nimi<<endl;
        return true;
    }
    else{
        cout<<"Siirto epaonnistui!"<<endl;
        return false;
    }
}
