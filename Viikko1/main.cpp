#include <iostream>
#include <cstdlib>

using namespace std;

int arvottuluku;
int kayttajanluku;
int game(int);
int arvaukset=0;

int main()
{
    arvaukset = game(20);
    cout << "Peli paattyi" << endl;
    cout << "Arvauksien maara: " << arvaukset << endl;
}


int game(int maxnum){
    srand(time(0));
    arvottuluku = rand() % maxnum;
    while(kayttajanluku != arvottuluku){
        cout << "Arvaa luku" << endl;
        cin >> kayttajanluku;
        if(kayttajanluku > arvottuluku){
            cout << "Luku on pienempi" << endl;
        }
        else if(kayttajanluku < arvottuluku){
            cout << "Luku on suurempi" << endl;
        }
        else{
            cout << "Oikea vastaus" << endl;
        }
        arvaukset++;
    }
    return arvaukset;
}
