#include <iostream>using namespace std;
class Operation
{public:
    virtual double perform(double a, double b) = 0; 
    virtual ~Operation() {} 
};
class Addition : public Operation
{public:
    double perform(double a, double b) override
    {
        return a + b;
    }
};
class Subtraction : public Operation
{public:
    double perform(double a, double b) override
    {
        return a - b;
    }
};
class Multiplication : public Operation
{public:
    double perform(double a, double b) override
    {
        return a * b;
    }
};
int main()
{
    Operation* op[3];

    op[0] = new Addition();
    op[1] = new Subtraction();
    op[2] = new Multiplication();

    double a = 20, b = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << "Result: " << op[i]->perform(a, b) << endl;
    }

    for (int i = 0; i < 3; i++)
        delete op[i];

    return 0;
}
