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
    Employee *E;
    
    E = new Employee[1000];
    int n = 0;
    while (true)
    {
        cout << "------Enter employee information-------" << endl;
        E[n].Input();
        n++;
        string Check;
        cout << "Do you continue(Y/N)? ";    cin>>Check;
        if ( Check == "N")
            break;
    }
    
    cout << "\n\nOUTPUT:" << endl;
    cout << left << setw(10) << "id" << setw(30) << "name" << setw(6) << "age" << endl;
    for (int i = 0; i < n; i++)
    {
        E[i].Output();
    }
    
    delete[] E;
    return 0;
}

//     OUTPUT:
//     id        name                          age   
//     1         Trung                         21
//     2         Huan                          21
//     3         Chi Tinh                      21
//     4         Anh                           20
// 