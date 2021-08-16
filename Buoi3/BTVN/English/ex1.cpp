#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    char name[30];
    int age;
    static float salary;

public:
    void Input();
    void Output();
};

float Employee::salary = 1000; //1000$

void Employee::Input()
{
    cout << "Enter id  : ";   cin >> id;
    cout << "Enter name: ";   fflush(stdin);  gets(name);
    cout << "Enter age : ";   cin >> age;
}

void Employee::Output()
{
    cout << "\tID    : " << id << endl;
    cout << "\tName  : " << name << endl;
    cout << "\tAge   : " << age << endl;
    cout << "\tSalary: " << salary << endl;
}

int main(int argc, char const *argv[])
{
    Employee A, B;

    // INPUT
    cout << "Enter the first employee's information : " << endl;
    A.Input();
    cout << "Enter the second employee's information : " << endl;
    B.Input();

    // OUTPUT
    cout << "-----The first employee's information------"<<endl;
    A.Output();
    cout << "-----The second employee's information------"<<endl;
    B.Output();
    
    return 0;
}
