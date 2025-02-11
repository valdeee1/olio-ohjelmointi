#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>

using namespace std;


int main ()
{
    string inputName;
    int inputAge;
    int selection = 0;
    vector<Student>studentList;
    vector<Student>::iterator it;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            cout<<"Set student name: ";
            cin>>inputName;
            cout<<"Set student age: ";
            cin>>inputAge;
            studentList.push_back(Student(inputName,inputAge));
            break;
        case 1:
            for(const Student& student : studentList){
                cout << student.getName() <<endl;
                 }
            break;

        case 2:
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getName() < b.getName();
            });
            for(const Student& student : studentList){
                student.printStudentsInfo();
            }
            break;

        case 3:
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getAge() < b.getAge();
            });
            for(const Student& student : studentList){
                student.printStudentsInfo();
            }
            break;
        case 4:
            cout<<"Student to be found name: ";
            cin>>inputName;
            it = find_if(studentList.begin(), studentList.end(),[&inputName](const Student& a){
                return a.getName() == inputName;
            });
            if(it != studentList.end()){
                cout<<"Student found:"<<endl;
                it->printStudentsInfo();
            }
            else{
                cout<<"Couldn't find a student with that name"<<endl;
            }
            break;
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }
    while(selection < 5);

return 0;
}
