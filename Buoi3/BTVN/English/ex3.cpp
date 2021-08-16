#include <bits/stdc++.h>
using namespace std;

class Enterprise;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void Input();
    void Output();
    friend class Enterprise;
};

void Date::Input()
{
    cout << "Enter founding date: "<<endl;
    cout << "      Enter day          : ";      cin >> day;
    cout << "      Enter month        : ";      cin >> month;
    cout << "      Enter year         : ";      cin >> year;
}

void Date::Output()
{
    cout << "Founding       : " << day << "/" << month << "/" << year << endl;
}

class Address
{
private:
    char phone[12];
    char ward[30];
    char town[30];
    char city[30];

public:
    friend class Enterprise;
};

class Enterprise
{
private:
    int eCode;
    char eName[30];
    Date founding;
    Address add;
    char manager[30];
    long long revenue;

public:
    void Input();
    void Output();
};

void Enterprise::Input()
{
    cout << "Enter the enterprise code: ";   cin >> eCode;
    cout << "Enter the enterprise name: ";   fflush(stdin);     gets(eName);

    founding.Input();

    cout << "Enter phone number       : ";   fflush(stdin);     gets(add.phone);
    cout << "Enter address: " << endl;
    cout << "      Ward               : ";   fflush(stdin);     gets(add.ward);
    cout << "      Town               : ";   fflush(stdin);     gets(add.town);
    cout << "      City               : ";   fflush(stdin);     gets(add.city);

    cout << "Enter the name of manager: ";   fflush(stdin);     gets(manager);
    cout << "Enter Total revenue      : ";   cin >> revenue;
}

void Enterprise::Output()
{
    cout << "Enterprise code: " << eCode << endl;
    cout << "Enterprise name: " << eName << endl;

    founding.Output();

    cout << "Phone          : " << add.phone << endl;
    cout << "Address        : ward " << add.ward << ", town " << add.town << ", " << add.city << endl;

    cout << "Manager        : " << manager << endl;
    cout << "Total revenue  : " << revenue << endl;
}

int main(int argc, char const *argv[])
{
    Enterprise DN;

    DN.Input();

    cout << "\n\nThe Enterprise's information: " << endl;
    DN.Output();

    return 0;
}

// vocabulary
/*
    revenue: thu nhập, doanh thu
    ward: phường
    town: quận, huyện
    enterprise: doanh nghiệp
*/

/*OUTPUT
    The Enterprise's information:
    Enterprise code: 123
    Enterprise name: OOP's Trung
    Founding       : 1/1/2021
    Phone          : 123456
    Address        : ward Minh Khai, town Bac Tu Liem, Ha Noi
    Manager        : Nguyen Viet Trung
    Total revenue  : 2147483647
*/