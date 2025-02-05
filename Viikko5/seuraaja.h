#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>
using namespace std;

class Seuraaja
{
public:
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
    string nimi;
    Seuraaja* next = nullptr;

};

#endif // SEURAAJA_H
