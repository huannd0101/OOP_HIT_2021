#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void Input();
    void Output();
};
void Date::Input()
{
    cout << "    Enter day  : ";    cin >> this->day;
    cout << "    Enter month: ";    cin >> this->month;
    cout << "    Enter year : ";    cin >> this->year;
}
void Date::Output()
{
    cout << this->day << "/" << this->month << "/" << this->year;
}

class Pesonnel
{
private:
    int id;
    static int idAcd;   // Acd - Ascending:
    char name[30];
    Date birthday;

public:
    Pesonnel();
    ~Pesonnel();
    void Input();
    void Output();
};

int Pesonnel::idAcd = 0;

Pesonnel::Pesonnel()
{
    idAcd++;
    id = idAcd;
    strcpy( name, "");
}
Pesonnel::~Pesonnel()
{
    id = 0;
    strcpy( name, "");
}

void Pesonnel::Input()
{
    cout << "  Enter Name : ";  fflush(stdin);  gets(this->name);
    cout << "  Enter Date : " << endl; 
    this->birthday.Input();
}
void Pesonnel::Output()
{
    cout << left << setw(10) << this->id << setw(30) << this->name;
    this->birthday.Output();
    cout << endl;
}


int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter number Pesonnel : ";
    cin >> num;

    Pesonnel *p = new Pesonnel[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter Pesonnel " << i + 1 << " : " << endl;
        p[i].Input();
    }

    cout << "\n\nList pesonnel: "<< endl;
    cout << left << setw(10) << "ID" << setw(30) << "Name" << setw(12) << "Date" << endl;
    for (int i = 0; i < num; i++)
    {
        p[i].Output();
    }

    delete[] p;
    return 0;
}
