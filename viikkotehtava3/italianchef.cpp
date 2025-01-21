#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout<<"ItalianChef "<<name<<" constructor"<<endl;
    ItalianName = name;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<ItalianName<<" destructed"<<endl;
}

bool ItalianChef::askSecret(string salasana, int jauho, int vesi)
{
    if((salasana.compare(password)) == 0)
    {
        cout<<"Correct password!"<<endl;
        makepizza(jauho, vesi);
        return true;
    }
    else{
        cout<<"Invalid password"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int f, int w)
{
    flour = f;
    water = w;

    int pizzatJauho = flour / 5;
    int pizzatVesi = water / 5;
    int pizzat = min(pizzatJauho, pizzatVesi);

    cout<<"You can make "<<pizzat<<" pizzas!"<<endl;

    return pizzat;

}
