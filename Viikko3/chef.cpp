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
    int salaatti = aines / 5;
    cout<<"Chef "<<chefName<<" can make "<<salaatti<<" salads"<<endl;
    return salaatti;

}

int Chef::makeSoup(int aines)
{
    int soup = aines / 3;
    cout<<"Chef "<<chefName<<" can make "<<soup<<" soups"<<endl;
    return soup;
}
