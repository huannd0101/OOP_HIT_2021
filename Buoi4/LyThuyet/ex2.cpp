#include <bits/stdc++.h>
using namespace std;

class TaiSan
{
private:
    char tenTS[20];
    int sl;
    char tinhTrang[10];

public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void TaiSan::Nhap()
{
    cout << "  Nhap ten tai san: ";
    fflush(stdin);
    gets(tenTS);
    cout << "  Nhap so luong   : ";
    cin >> sl;
    cout << "  Nhap tinh trang : ";
    fflush(stdin);
    gets(tinhTrang);
}

void TaiSan::Xuat()
{
    cout << left << setw(20) << tenTS << setw(12) << sl << setw(12) << tinhTrang << endl;
}

class NhanVien
{
private:
    char hoTen[30];
    char chucVu[12];

public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void NhanVien::Nhap()
{
    cout << "Nhap ho ten nhan vien: ";      fflush(stdin);      gets(hoTen);
    cout << "Nhap chuc vu         : ";      fflush(stdin);      gets(chucVu);
}

void NhanVien::Xuat()
{
    cout << left << setw(20) << "Nhan vien kiem ke: " << setw(30) << hoTen << setw(20) << "Chuc vu: " << setw(20) << chucVu << endl;
}

class Phong
{
private:
    char maPH[12];
    char tenPH[30];
    char tenTP[30];

public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void Phong::Nhap()
{
    cout << "Nhap ma phong        : ";      fflush(stdin);      gets(maPH);
    cout << "Nhap ten phong       : ";      fflush(stdin);      gets(tenPH);
    cout << "Nhap truong phong    : ";      fflush(stdin);      gets(tenTP);
}

void Phong::Xuat()
{
    cout << left << setw(20) << "Kiem ke tai phong: " << setw(30) << tenPH << setw(20) << "Ma phong: " << setw(20) << endl;
    cout << left << setw(20) << "Truong phong: " << setw(30) << tenTP << endl;
}

class Phieu
{
private:
    char maPH[12];
    char ngay[12];
    NhanVien x;
    Phong y;
    TaiSan *z;
    int n;

public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    cout << "Nhap ma phieu        : ";      fflush(stdin);  gets(maPH);
    cout << "Nhap ngay kiem ke    : ";      fflush(stdin);  gets(ngay);

    x.Nhap();

    y.Nhap();

    cout << "Nhap so tai san  : ";
    cin >> n;
    z = new TaiSan[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin tai san thu " << i + 1 << ": " << endl;
        z[i].Nhap();
    }
}

void Phieu::Xuat()
{
    cout << "\n\t\t\t-----PHIEU KIEM KE TAI SAN-----" << endl << endl;

    cout << left << setw(20) << "Ma phieu: " << setw(30) << maPH << setw(20) << "Ngay kiem ke: " << setw(20) << ngay << endl;

    x.Xuat();

    y.Xuat();

    cout << left << setw(20) << "Ten TS" << setw(12) << "So luong" << setw(12) << "Tinh trang" << endl;

    int sumTs = 0;
    for (int i = 0; i < n; i++)
    {
        z[i].Xuat();
        sumTs += z[i].sl;
    }

    cout << left  << "So tai san da kiem ke: " << setw(8) << n << "Tong so luong: " << sumTs << endl;
}

int main(int argc, char const *argv[])
{
    Phieu TS;
    TS.Nhap();
    TS.Xuat();
    return 0;
}
