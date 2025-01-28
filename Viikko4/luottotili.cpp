#include "luottotili.h"

Luottotili::Luottotili(string n, double l):Pankkitili(n) {
    luottoRaja = l;
    cout<<n<<" pankkitili luotu"<<endl;
    cout<<n<<" luottotili luotu"<<endl;
}

bool Luottotili::deposit(double summa)
{
    if(summa <= 0){
        cout<<"Luottotilille ei voi tallettaa "<<summa<<endl;
        return false;
    }
    else if(saldo + summa > 0){
        cout<<"Tili ei voi mennä yli 0"<<endl;
        cout<<"Jaljella oleva velka: "<<saldo<<endl;
        return false;
    }
    else{
        saldo += summa;
        cout<<"Luottovelkaa kuitattu "<<summa<<endl;
        return true;
    }
}

bool Luottotili::withdraw(double summa)
{
    if(summa>saldo && saldo-summa<luottoRaja){
        cout<<"Ei tarpeeksi saldoa tai luottorajaa"<<endl;
        return false;
    }
    else if(summa < 0){
        cout<<"Ei voida tallettaa "<<summa<<endl;
        return false;
        }
    else{
        summa-=saldo;
        cout<<summa<<" nostettu luottotililta"<<endl;
        return false;
        }
}


