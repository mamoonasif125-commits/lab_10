#include <iostream>
#include <string>
#include <limits>
using namespace std;
class Person
{public:
    virtual void getData() = 0;
    virtual void showData() = 0;
    virtual ~Person() {}
};
class Student : public Person
{private:
    string name;
    int rollNo;
    float gpa;
public:
    void getData() override
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter GPA: ";
        cin >> gpa;
    }

    void showData() override
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "GPA: " << gpa << endl;
    }
};
class Lecturer : public Person
{private:
    string name;
    int empID;
    string dept;
public:
    void getData() override
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nEnter Lecturer Name: ";
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> empID;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Department: ";
        getline(cin, dept);
    }

    void showData() override
    {
        cout << "\nLecturer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << dept << endl;
    }
};
int main()
{
    Person* p1;
    Person* p2;

    Student s;
    Lecturer l;

    p1 = &s;
    p2 = &l;

    p1->getData();
    p2->getData();

    p1->showData();
    p2->showData();

    return 0;
}
