#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    cout<<"Notifikaattori luotu"<<endl;

}

void Notifikaattori::lisaa(Seuraaja * n)
{
    n->next = seuraajat;
    seuraajat = n;
}

void Notifikaattori::poista(Seuraaja *n)
{
    if(n == nullptr){
        return;
    }
    if(n==seuraajat){
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* nykyinen = seuraajat;
    while(nykyinen->next && nykyinen->next != n){
        nykyinen = nykyinen->next;
    }
    if(nykyinen->next != nullptr){
        nykyinen->next = nykyinen->next->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja * nykyinen = seuraajat;
    while(nykyinen != nullptr){
        cout<<nykyinen->getNimi()<<endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string v)
{
    Seuraaja * nykyinen = seuraajat;
    while(nykyinen != nullptr){
        nykyinen->paivitys(v);
        nykyinen = nykyinen->next;
    }

}
