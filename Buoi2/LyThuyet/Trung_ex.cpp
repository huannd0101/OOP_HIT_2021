#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    char MaSV[10]; //Thuoc tinh
    char HoTen[30];
    int Tuoi;
    float DiemTB;
    int n;
    int *a;

public:
    SinhVien();         // phuong thuc khoi tao khong doi so(khong co tham so)
    SinhVien( char MaSVNew[10], char HoTenNew[30],int TuoiNew, float DiemTBNew);	// phuong thuc khoi tao co doi(co tham so)
    ~SinhVien();	// phuong thuc huy
    void Nhap();	// phuong thuc nhap
    void Xuat();	// phuong thuc xuat
};

SinhVien::SinhVien()
{
    strcpy(MaSV, "");
    strcpy(HoTen, "");
    Tuoi = 0;
    DiemTB =0;
}

SinhVien::SinhVien(char MaSVNew[10], char HoTenNew[30],int TuoiNew, float DiemTBNew)
{
    strcpy(MaSV, MaSVNew);
    strcpy(HoTen, HoTenNew);
    Tuoi = TuoiNew;
    DiemTB = DiemTBNew;
}

SinhVien::~SinhVien()
{
    strcpy(MaSV, "");
    strcpy(HoTen, "");
    Tuoi = 0;
    DiemTB =0;
}


void SinhVien::Nhap()
{
    cout<<"Nhap MSV: ";         fflush(stdin);      gets(MaSV);       //  fflush(stdin)  - Xoa bo nho dem
    cout<<"Nhap ho ten: ";      fflush(stdin);      gets(HoTen); 
    cout<<"Nhap tuoi: ";        cin>>Tuoi;
    cout<<"Nhap diem TB: ";     cin>>DiemTB;
}

void SinhVien::Xuat()
{
    cout<<"MSV: "<<MaSV; 
    cout<<"\nHo ten: "<<HoTen;
    cout<<"\nTuoi: "<<Tuoi;
    cout<<"\nDiem TB: "<<DiemTB;
}


int main()
{
    SinhVien A;     // Khong doi
    SinhVien B( "123", " Nguyen Van A", 21, 10);    // co doi
//    A.Nhap();
    cout<<"Sinh Vien A: "<<endl;
    A.Xuat();

    cout<<"\nSinh Vien B: "<<endl;
    B.Xuat();
    return 0;
}
