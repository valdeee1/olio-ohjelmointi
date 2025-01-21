#include "chef.h"

using namespace std;

Chef::Chef(string n) {
    chefName = n;
    cout<<"Chef "<<chefName<<" constructed"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destructed"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int salad = aines / 5;
    cout<<"Chef "<<chefName<<" voi "<<aines<<" maaralla aineksia tehda "<<salad<<" verran salaattia!"<<endl;
    return salad;
}

int Chef::makeSoup(int aines)
{
    int soup = aines / 3;
    cout<<"Chef "<<chefName<<" voi "<<aines<<" maaralla aineksia tehda "<<soup<<" verran keittoa!"<<endl;
    return soup;
}
