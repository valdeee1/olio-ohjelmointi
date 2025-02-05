#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;
    Seuraaja A("A");
    Seuraaja B("B");
    Seuraaja C("C");

    n.lisaa(&A);
    n.lisaa(&B);
    n.lisaa(&C);

    n.tulosta();

    n.postita("Tama on viesti");

    n.poista(&B);

    n.tulosta();

    n.postita("Tama on viesti");

    return 0;
}
