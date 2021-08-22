#include <bits/stdc++.h>
using namespace std;

class NCC
{
private:
	char maNCC[10];
	char tenNCC[30];
	char diaChi[50];
    char sdt[12];

public:
	void Nhap();
	void Xuat();
};
void NCC::Nhap()
{
	cout << "Nhap ma NCC  : ";  fflush(stdin);  gets(maNCC);
	cout << "Nhap ten NCC : ";  fflush(stdin);  gets(tenNCC);
	cout << "Nhap dia chi : ";  fflush(stdin);  gets(diaChi);
	cout << "Nhap SDT     : ";  fflush(stdin);  gets(sdt);
}
void NCC::Xuat()
{
	cout << left << setw(10) << "Ma NCC: " << setw(50) << maNCC << setw(15) << "Ten NCC: " << setw(20) << tenNCC << endl;
	cout << left << setw(10) << "Dia chi: " << setw(50) << diaChi << setw(15) << "SDT: " << setw(20) << sdt << endl;
}

class SP
{
private:
    char maSP[10];
    char tenSP[20];
    char tinhTrang[12];
    int soLuong;
    float donGia;
public:
    void Nhap();
	void Xuat();
	friend class Phieu;
};

void SP::Nhap()
{
	cout << "  Nhap ma SP   : ";    fflush(stdin);  gets(maSP);
	cout << "  Nhap ten SP  : ";    fflush(stdin);  gets(tenSP);
	cout << "  Tinh trang   : ";    fflush(stdin);  gets(tinhTrang);
	cout << "  Nhap so luong: ";    cin >> soLuong;
	cout << "  Nhap Don gia : ";    cin >> donGia;
}
void SP::Xuat()
{
	cout << left << setw(10) << maSP << setw(20) << tenSP << setw(12) << tinhTrang << setw(10) << soLuong << setw(10) 
         << donGia << setw(12) << soLuong * donGia << endl;
}

class Phieu
{
private:
    char maPhieu[10];
    NCC x;
    SP *y;
    int n;
public:
    void Nhap();
	void Xuat();
};

void Phieu::Nhap()
{
    cout << "INPUT: "<<endl;
    cout << "Nhap ma phieu: ";  fflush(stdin);  gets(maPhieu);
    
    x.Nhap();

    cout << "Nhap so san pham: ";   cin >> n;
    y = new SP[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap SP " << i + 1 <<": "<<endl;
        y[i].Nhap();
    }
}

void Phieu::Xuat()
{

    cout << "Dai Hoc Cong Nghiep Ha Noi" << endl;
    cout << "\t\t\t\tPHIEU NHAP THIET BI MAY TINH" << endl;
    cout << left << setw(10) << "Ma Phieu: " << maPhieu << endl;

    x.Xuat();

    double tongTien = 0;

    cout << left << setw(10) << "Ma SP" << setw(20) << "Ten SP" << setw(12) << "Tinh Trang" << setw(10) << "So Luong" << setw(10) 
         << "Don Gia" << setw(12) << "Thanh tien"<< endl;

    for (int i = 0; i < n; i++)
    {
        y[i].Xuat();
        tongTien += y[i].soLuong * y[i].donGia;
    }

    cout << "Tong So Luong San Pham: " << setw(20) << left << n << "Tong So Tien: " << setw(15) << left << tongTien << endl;
}

int main(int argc, char const *argv[])
{
    Phieu P;

    P.Nhap();

    cout << endl << endl;

    P.Xuat();
    
    return 0;
}
