#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name) {
    italianName = name;
    cout<<"ItalianChef "<<italianName<<" constructed"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<italianName<<" destructed"<<endl;

}

bool ItalianChef::askSecret(string salasana, int jauho, int vesi)
{
    if((password.compare(salasana)) == 0){
        cout<<"Correct password!"<<endl;
        makepizza(jauho, vesi);
        return true;
    }
    else{
        cout<<"Invalid password!"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int jauho, int vesi)
{
    int jauhopizza = jauho /5;
    int vesipizza = vesi / 5;
    int pizzat = min(jauhopizza, vesipizza);
    cout<<"ItalianChef "<<italianName<<" can make "<<pizzat<<" pizzas"<<endl;
    return pizzat;
}
