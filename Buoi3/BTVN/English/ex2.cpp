#include <bits/stdc++.h>
using namespace std;

class Hang;

class NSX
{
private:
    int maNSX;
    char tenNSX[30];
    char diaChiNSX[50];

public:
    void Input();
    void Output();
    friend class Hang;
};

void NSX::Input()
{
    cout << "  Enter Manufacturer's code   : ";      cin >> maNSX;
    cout << "  Enter Manufacturer's name   : ";      fflush(stdin);  gets(tenNSX);
    cout << "  Enter Manufacturer's address: ";      fflush(stdin);  gets(diaChiNSX);
}

void NSX::Output()
{
    // C1:
    // cout << "\tManufacturer's code   : " << maNSX << endl;
    // cout << "\tManufacturer's name   : " << tenNSX << endl;
    // cout << "\tManufacturer's address: " << diaChiNSX << endl;

    // C2:
    cout << left << setw(24) << maNSX << setw(30) << tenNSX << setw(50) << diaChiNSX << endl;
}

class Hang
{
private:
    int maHang;
    char tenHang[30];
    NSX x;

public:
    void Input();
    void Output();
};

void Hang::Input()
{
    cout << "  Enter Item code             : ";      cin >> maHang;
    cout << "  Enter Item name             : ";      fflush(stdin);  gets(tenHang);
    x.Input();
}

void Hang::Output()
{
    // C1:
    // cout << "\tItem's code   : " << maHang << endl;
    // cout << "\tItem's name   : " << tenHang << endl;
    // x.Output();

    // C2:
    cout << left << setw(14) << maHang << setw(30) << tenHang;
    x.Output();
}

int main(int argc, char const *argv[])
{
    int num;
    Hang items[1000];

    cout << "Enter the number of items: ";
    cin >> num;

    // INPUT
    for (int i = 0; i < num; i++)
    {
        cout << "------Enter item information-------" << endl;
        items[i].Input();
    }

    // OUTPUT
    cout << "\n\nList of " << num << " items" << endl;
    cout << left << setw(14) << "Item code" << setw(30) << "Item name" << setw(24) << "Manufacturer's code" << setw(30) << "Manufacturer's code" << setw(50) << "Manufacturer's address" << endl;
    for (int i = 0; i < num; i++)
        items[i].Output();

    return 0;
}
