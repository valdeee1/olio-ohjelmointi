#include "student.h"

Student::Student(string n, int i): name(n), age(i){}

void Student::setAge(int i)
{
    age = i;
    cout<<name<<" age set to "<<age<<endl;
}

void Student::setName(string n)
{
    name = n;
    cout<<"Name set to: "<<name<<endl;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentsInfo() const
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Age: "<<age<<endl;
}
