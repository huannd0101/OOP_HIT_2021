#include <iostream>
#include <string.h>
#include <iomanip>
#include <malloc.h>
using namespace std;

class Phieu;
class NhanVien
{
private:
	char hoTen[30];
	char chucVu[30];
public:
	void Nhap();
	void Xuat();
};

void NhanVien::Nhap()
{
	cout << "Nhap thong tin nhan vien kiem ke: " << endl;
	cout << "  Nhap ho ten : ";	fflush(stdin);	gets(hoTen);
	cout << "  Nhap chuc vu: ";	fflush(stdin);	gets(chucVu);
}

void NhanVien::Xuat()
{
	cout << left << setw(20) << "NhanVien's hoTen: " << setw(30) << hoTen << setw(20) << "chucVu: " << chucVu << endl;
}

class Phong
{
private:
	char tenPhong[30];
	char maPhong[10];
	char truongPhong[30];
public:
	void Nhap();
	void Xuat();
};

void Phong::Nhap()
{
	cout << "Nhap thong tin phong can kiem ke: " << endl;
	cout << "  Nhap ten phong   : ";	fflush(stdin);	gets(tenPhong);
	cout << "  Nhap ma phong    : ";	fflush(stdin);	gets(maPhong);
	cout << "  Nhap truong phong: ";	fflush(stdin);	gets(maPhong);
}

void Phong::Xuat()
{
	cout << left << setw(20) << "Kiem ke tai phong: " << setw(30) << tenPhong << setw(20) << "Ma phong: " << maPhong << endl;
	cout << "Truong phong: " << truongPhong << endl;
}

class TaiSan
{
private:
	char tenTS[30];
	int sl;
	char trangThai[20];
public:
	TaiSan();	
	TaiSan(char tenTS[30], int sl, char trangThai[20]);
	void Nhap();
	void Xuat();
	friend class Phieu;
	friend void Sua(Phieu c);
	friend void Chen(Phieu &c, TaiSan x);
	friend void SapXep(Phieu c);
};

TaiSan::TaiSan() 
{
	strcpy(tenTS, "");
	sl = 0;
	strcpy(trangThai, "");
}

TaiSan::TaiSan(char tenTS[30], int sl, char trangThai[20]) 
{
	strcpy(this->tenTS, tenTS);
	this->sl = sl;
	strcpy(this->trangThai, trangThai);
}

void TaiSan::Nhap()
{
	cout << "  Nhap ten tai san: ";	fflush(stdin);	gets(tenTS);
	cout << "  Nhap so luong   : ";	cin >> sl;
	cout << "  Nhap trang thai : ";	fflush(stdin);	gets(trangThai);
}

void TaiSan::Xuat()
{
	cout << left << setw(30) << tenTS << setw(15) << sl << setw(20) << trangThai << endl;
}

class Phieu
{
private:
	char ma[10];
	char ngay[10];
	NhanVien NhanVien;
	Phong phong;
	int n;
	TaiSan *taiSan;
public:
	void Nhap();
	void Xuat();
	friend void Sua(Phieu c);
	friend void Chen(Phieu &c, TaiSan x);
	friend void SapXep(Phieu c);
};

void Phieu::Nhap()
{
	cout << "Nhap ma phieu    : ";	fflush(stdin);	gets(ma);
	cout << "Nhap ngay kiem ke: ";	fflush(stdin);	gets(ngay);

	NhanVien.Nhap();

	phong.Nhap();

	cout << "Nhap so Tai San: ";	cin>>n;

	taiSan = new TaiSan[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Tai San thu" << i+1 << ": " << endl;
		taiSan[i].Nhap();
	}
}

void Phieu::Xuat()
{
	cout << "\t\t\tPHIEU KIEM KE TAI SAN" << endl;
	cout << left << setw(20) << "Ma Phieu: " << setw(30) << ma << setw(20) << "Ngay kiem ke: " << ngay << endl;

	NhanVien.Xuat();

	phong.Xuat();

	int sum = 0;
	cout << left << setw(30) << "Ten tai san" << setw(15) << "So luong" << setw(20) << "trang thai" << endl;
	for (int i = 0; i < n; i++)
	{
		taiSan[i].Xuat();
		sum += taiSan[i].sl;
	}
	cout << "So tai san da kiem ke: " << setw(15) << n << "Tong so luong: " << sum << endl;
}

// Bonus 1:
void Sua(Phieu c)
{
	for (int i = 0; i < c.n; i++)
		if (strcmp( c.taiSan[i].tenTS, "May vi tinh") == 0)
			c.taiSan[i].sl = 20;
}

// Bonus 2: 
void Chen(Phieu &c, TaiSan x)
{
    c.taiSan = (TaiSan *)realloc(c.taiSan, (c.n + 1) * sizeof(TaiSan));
    for (int i = c.n; i >= 2; i--)
	{
        c.taiSan[i] = c.taiSan[i - 1];
	}
    c.taiSan[1] = x;
    c.n++;
}

// Bonus 3:
void SapXep(Phieu c)
{
    for (int i = 0; i < c.n - 1; i++)
        for (int j = i + 1; j < c.n; j++)
            if (c.taiSan[i].sl > c.taiSan[j].sl)
            {
                TaiSan temp = c.taiSan[i];
                c.taiSan[i] = c.taiSan[j];
                c.taiSan[j] = temp;
            }
}

int main()
{
	Phieu c;
	c.Nhap();
	cout << "-------------------------------------------------------------------------------------" << endl;

	c.Xuat();
	cout << "-------------------------------------------------------------------------------------" << endl;

	// Bonus 1: 
	Sua(c);
	cout << "\n\nBonus 1: Phieu sau khi Sua: " << endl << endl;
	c.Xuat();
	cout << "-------------------------------------------------------------------------------------" << endl;
	
	// Bonus 2: 
	TaiSan x((char*)"Laptop", 10, (char*)"Tot");		// không cần phải có (char *), nhung neu co se khong bi 'warning'(canh bao)
	// TaiSan x;
	// x.Nhap();
	Chen(c, x);
	cout << "\n\nBonus 2: Phieu sau khi Chen: " << endl << endl;
	c.Xuat();
	cout << "-------------------------------------------------------------------------------------" << endl;

	// Bonus 3: 
	SapXep(c);
	cout << "\n\nBonus 3: Phieu sau khi Sap Xep: " << endl << endl;
	c.Xuat();
	cout << "-------------------------------------------------------------------------------------" << endl;


	return 0;
}
