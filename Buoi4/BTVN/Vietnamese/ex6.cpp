#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    char maSV[12];
    char hoTen[30];
    char lop[8];
    int khoa;
public:
    void Nhap();
    void Xuat();
};

void SinhVien::Nhap()
{
    cout << "Nhap ma sinh vien: ";  fflush(stdin);  gets(maSV);
    cout << "Nhap ho va ten: ";     fflush(stdin);  gets(hoTen);
    cout << "Nhap lop: ";           fflush(stdin);  gets(lop);
    cout << "Nhap khoa: ";          cin >> khoa;
}

void SinhVien::Xuat()
{
    cout << left << setw(16) << "Ma sinh vien: " <<  setw (15) << maSV << setw (16) << "Ten sinh vien: " << hoTen << endl;
    cout << left << setw(16) << "Lop: " <<  setw (15) << lop <<  "Khoa: " << khoa << endl;
}

class Mon
{
private:
    char tenMon[20];
    int soTin;
    float diem;
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
};

void Mon::Nhap()
{
    cout << "  Nhap ten mon: ";   fflush(stdin);  gets(tenMon);
    cout << "  Nhap so tin: ";    cin >> soTin;
    cout << "  Nhap diem: ";      cin >> diem;
}

void Mon::Xuat()
{
    cout << left << setw(20) << tenMon << setw(8) << soTin << setw(8) << diem << endl;
}

class Phieu
{
private:
    SinhVien x;
    Mon *y;
    int n;
public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    x.Nhap();

    cout << "Nhap so mon hoc: ";    cin >>n;

    y = new Mon[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap mon " << i+1 << ": " << endl;
        y[i].Nhap();
    }
}

void Phieu::Xuat()
{
    x.Xuat();

    float tongDiem = 0;
    int tongSoTin = 0;
    cout << "Bang diem: " << endl;
    cout << left << setw(20) << "Ten Mon" << setw(8) << "So Tin" << setw(8) << "Diem" << endl;
    for (int i = 0; i < n; i++)
    {
        y[i].Xuat();
        tongSoTin += y[i].soTin;
        tongDiem += y[i].soTin * y[i].diem;
    }

    float dtb = tongDiem / tongSoTin;
    cout << setw(28) << "Diem trung binh: " << fixed << setprecision(2) << dtb << endl;
}


int main(int argc, char const *argv[])
{
    Phieu P;
    
    cout << "INPUT: " << endl;
    P.Nhap();

    cout << "\n\nOUTPUT: " << endl;
    P.Xuat();

    return 0;
}
