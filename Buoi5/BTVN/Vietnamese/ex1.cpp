#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class SinhVien
{
private:
    char maSV[10];
    char hoTen[30];
    char ngaySinh[12];
    char gioiTinh[8];
    float diemTB;  
    char xepLoaiDD[10];

public:
    SinhVien();
    SinhVien(char *maSV, char *hoTen, char *ngaySinh, char *gioiTinh, float diemTB, char *xepLoaiDD);
    ~SinhVien();

    // GETTER
    char *getMaSV()
    {
        return maSV;
    }
    char *getHoTen()
    {
        return hoTen;
    }
    char *getNgaySinh()
    {
        return ngaySinh;
    }
    char *getGioiTinh()
    {
        return gioiTinh;
    }
    double getDiemTB()
    {
        return diemTB;
    }
    char *getXepLoaiDD()
    {
        return xepLoaiDD;
    }

    //SETTER
    void setMaSV(char *maSV)
    {
        strcpy(this->maSV, maSV);
    }
    void setHoTen(char *hoTen)
    {
        strcpy(this->hoTen, hoTen);
    }
    void setNgaySinh(char *ngaySinh)
    {
        strcpy(this->ngaySinh, ngaySinh);
    }
    void setGioiTinh(char *gioiTinh)
    {
        strcpy(this->gioiTinh, gioiTinh);
    }
    void setDiemTB(double diemTB)
    {
        this->diemTB = diemTB;
    }
    void setXepLoaiDD(char *xepLoaiDD)
    {
        strcpy(this->xepLoaiDD, xepLoaiDD);
    }

    friend void Nhap(SinhVien &a);
    friend void Xuat(SinhVien a);
};

SinhVien::SinhVien()
{
    strcpy(maSV, "");
    strcpy(hoTen, "");
    strcpy(ngaySinh, "");
    strcpy(gioiTinh, "");
    diemTB = 0;
    strcpy(xepLoaiDD, "");
}

SinhVien::SinhVien(char *maSV, char *hoTen, char *ngaySinh, char *gioiTinh, float diemTB, char *xepLoaiDD)
{
    strcpy(this->maSV, maSV);
    strcpy(this->hoTen, hoTen);
    strcpy(this->ngaySinh, ngaySinh);
    strcpy(this->gioiTinh, gioiTinh);
    this->diemTB = diemTB;
    strcpy(this->xepLoaiDD, xepLoaiDD);
}

SinhVien::~SinhVien()
{
    strcpy(maSV, "");
    strcpy(hoTen, "");
    strcpy(ngaySinh, "");
    strcpy(gioiTinh, "");
    diemTB = 0;
    strcpy(xepLoaiDD, "");
}

void Nhap(SinhVien &a)
{
    char maSV_Tam[10];
    char hoTen_Tamp[30];
    char ngaySinh_Tamp[12];
    char gioiTinh_Tamp[8];
    float diemTB__Tamp;  
    char xepLoaiDD_Tamp[20];

    cout << "  Enter ma SV      : ";    fflush(stdin);  gets(maSV_Tam);          a.setMaSV(maSV_Tam);
    cout << "  Enter ho ten     : ";    fflush(stdin);  gets(hoTen_Tamp);        a.setHoTen(hoTen_Tamp);
    cout << "  Enter ngay sinh  : ";    fflush(stdin);  gets(ngaySinh_Tamp);     a.setNgaySinh(ngaySinh_Tamp);
    cout << "  Enter gioi tinh  : ";    fflush(stdin);  gets(gioiTinh_Tamp);     a.setGioiTinh(gioiTinh_Tamp);
    cout << "  Enter diem TB    : ";    cin>>diemTB__Tamp;                       a.setDiemTB(diemTB__Tamp);
    cout << "  Enter xep Loai DD: ";    fflush(stdin);  gets(xepLoaiDD_Tamp);    a.setXepLoaiDD(xepLoaiDD_Tamp);
}

void Xuat(SinhVien a)
{
    cout << left << setw(10) << a.getMaSV() << setw(30) << a.getHoTen() << setw(12) << a.getNgaySinh() << setw(10) << a.getGioiTinh()
         << setw(10) << a.getDiemTB() << setw(15) << a.getXepLoaiDD() << endl;
}

void TieuDe()
{
    cout << left << setw(10) << "Ma SV" << setw(30) << "Ho Ten" << setw(12) << "Ngay Sinh" << setw(10) << "Gioi Tinh"
         << setw(10) << "Diem TB" << setw(15) << "Xep Loai DD" << endl;
}

int main()
{
    int n;
    cout << "Nhap so sinh vien: ";   cin >> n;
    SinhVien *a = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap Sinh Vien thu" << i + 1 << ": " << endl;
        Nhap(a[i]);
    }
    cout << "----------------------------------------------------------------------" << endl;

    cout << "\nDanh sach sinh vien:" << endl;
    TieuDe();
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }


    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].getXepLoaiDD(), "Tot") == 0)
        {
            number++;
            break;
        }
    }

    cout << "----------------------------------------------------------------------" << endl;
    if (number == 0)
        cout << "\nKhong co sinh vien nao xep loai dao duc tot." << endl;
    else
    {
        cout << "\nDanh sach sinh vien xep loai dao duc tot:" << endl;
        TieuDe();
        for (int i = 0; i < n; i++)
            if (strcmp(a[i].getXepLoaiDD(), "Tot") == 0)
                Xuat(a[i]);
    }



    return 0;
}