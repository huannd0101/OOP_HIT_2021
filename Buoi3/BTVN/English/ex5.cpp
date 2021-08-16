#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    char name[30];
    int age;
    static int id_Acd; // Acd - Ascending:
public:
    Employee();
    ~Employee();
    void Input();
    void Output();
};

int Employee::id_Acd = 1;

Employee::Employee()
{
    id = id_Acd;
    id_Acd++;
    strcpy(name, "");
    age = 0;
}

Employee::~Employee()
{
    strcpy(name, "");
    age = 0;
}

void Employee::Input()
{
    cout << "Enter name: ";   fflush(stdin);  gets(name);
    cout << "Enter age : ";   cin >> age;
}

void Employee::Output()
{
    cout << left << setw(10) << id << setw(30) << name << setw(6) << age << endl;
}

int main(int argc, char const *argv[])
{
    int num;
    Employee E[1000];

    cout << "Enter the number of employee: ";
    cin >> num;

    // INPUT
    for (int i = 0; i < num; i++)
    {
        cout << "------Enter employee information-------" << endl;
        E[i].Input();
    }
    
    // OUTPUT 
    cout << left << setw(10) << "id" << setw(30) << "name" << setw(6) << "age" << endl;
    for (int i = 0; i < num; i++)
    {
        E[i].Output();
    }

    return 0;
}
