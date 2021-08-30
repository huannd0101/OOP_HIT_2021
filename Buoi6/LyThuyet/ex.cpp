#include <iostream>
#include <string.h>
using namespace std;

class ConNguoi
{
protected:
    char hoTen[30];
    char ngaySinh[10];
    char queQuan[50];

public:
    void Nhap();
    void Xuat();
};

void ConNguoi::Nhap()
{
    cout << "Nhap ho ten   : ";    fflush(stdin);  gets(hoTen);
    cout << "Nhap ngay sinh: ";    fflush(stdin);  gets(ngaySinh);
    cout << "Nhap que quan : ";    fflush(stdin);  gets(queQuan);
}

void ConNguoi::Xuat()
{
    cout << "Ho ten   : " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
    cout << "Que quan : " << queQuan << endl;
}

class SinhVien : public ConNguoi
{
private:
    char tenTruong[30];
    char chuyenNganh[30];
    int MSSV;

public:
    void Nhap();
    void Xuat();
};


void SinhVien::Nhap()
{
    ConNguoi::Nhap();
    cout << "Nhap truong hoc  : ";    fflush(stdin);  gets(tenTruong);
    cout << "Nhap chuyen nganh: ";    fflush(stdin);  gets(chuyenNganh);
    cout << "Nhap MSSV        : ";    cin >> MSSV;
}

void SinhVien::Xuat()
{
    ConNguoi::Xuat();
    cout << "Truong hoc  : " << tenTruong << endl;
    cout << "Chuyen nganh: " << chuyenNganh << endl;
    cout << "MSSV        : " << MSSV << endl;
}


int main(int argc, char const *argv[])
{
    SinhVien S;
    S.Nhap();
    cout << "OUTPUT: " << endl;
    S.Xuat();
    return 0;
}

