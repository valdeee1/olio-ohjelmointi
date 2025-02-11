#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string, int);
    void setAge(int);
    void setName(string);
    string getName()const;  //Const koska arvoja ei muokata
    int getAge()const;
    void printStudentsInfo()const;

private:
    string  name;
    int age;
};

#endif // STUDENT_H
