#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int d, m, y;
public:
    void Nhap();
    void Xuat();
};

void Date::Nhap()
{
    cout << "Nhap ngay sinh: " << endl;
    cout << "  Nhap ngay : ";    cin >> this->d;
    cout << "  Nhap thang: ";    cin >> this->m;
    cout << "  Nhap nam  : ";    cin >> this->y;
}

void Date::Xuat()
{
    cout << this->d << "/" << this->m << "/" << this->y << endl;
}

class NhanSu
{
private:
    int maNS;
    static int maTam;  
    char hoTen[30];
    Date NS;    // ngay sinh
public:
    NhanSu();
    ~NhanSu();
    void Nhap();
    void Xuat();
};

int NhanSu::maTam = 0;

NhanSu::NhanSu()
{
    this->maTam++;
    this->maNS = this->maTam;
    strcpy( this->hoTen, "");
}
NhanSu::~NhanSu()
{
    this->maNS = 0;
    strcpy( this->hoTen, "");
}

void NhanSu::Nhap()
{
    cout << "Nhap ho va ten: ";    fflush(stdin);  gets(this->hoTen);
    NS.Nhap();
}

void NhanSu::Xuat()
{
    cout << left << setw(10) << this->maNS << setw(30) << this->hoTen;
    NS.Xuat();
}

int main(int argc, char const *argv[])
{
    NhanSu *p;
    int num;
    cout << "INPUT: "<<endl;
    cout << "Nhap so nhan su cua cong ty abc: ";    cin >> num;
    p = new NhanSu[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Nhan su " << i + 1 << ": " << endl;
        p[i].Nhap();
    }
    
    cout << endl << endl;
    cout << "OUTPUT: "<<endl;
    cout << left << setw(10) << "Ma NS" << setw(30) << "Ho Ten" << "Ngay sinh" << endl;
    for (int i = 0; i < num; i++)
        p[i].Xuat();
    

    delete[] p;
    return 0;
}
