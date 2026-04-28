#include <iostream>using namespace std;
class Student
{protected:
    string name;
    string program;
public:
    Student(string n, string p)
    {
        name = n;
        program = p;
    }

    virtual double calculateFee() = 0;

    virtual void show()
    {
        cout << "Name: " << name << endl;
        cout << "Program: " << program << endl;
    }

    virtual ~Student() {}
};
class BSStudent : public Student
{public:
    BSStudent(string n) : Student(n, "BS") {}

    double calculateFee() override
    {
        return 50000;
    }
};
class MSStudent : public Student
{public:
    MSStudent(string n) : Student(n, "MS") {}

    double calculateFee() override
    {
        return 80000;
    }
};
class PhDStudent : public Student
{public:
    PhDStudent(string n) : Student(n, "PhD") {}

    double calculateFee() override
    {
        return 150000;
    }
};
int main()
{
    Student* s[3];

    s[0] = new BSStudent("Ali");
    s[1] = new MSStudent("Ahmed");
    s[2] = new PhDStudent("Abdulrehman");

    for (int i = 0; i < 3; i++)
    {
        s[i]->show();
        cout << "Fee: " << s[i]->calculateFee() << endl;
        cout << "----------------------" << endl;
    }

    for (int i = 0; i < 3; i++)
        delete s[i];

    return 0;
}
