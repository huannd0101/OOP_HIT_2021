#include <bits/stdc++.h>
using namespace std;

class DiaChi
{
private: 
	int soNha;
	int ngo;
	char pho[30];
	char phuong[30];
	char quan[30];
	char thanhPho[30];

public: 
	void Nhap();
	void Xuat();
};

void DiaChi::Nhap()
{
	cout << "Nhap dia chi: " << endl;    
    cout << "  Nhap Ngo      : ";	cin >> ngo;
    cout << "  Nhap So Nha   : ";	cin >> soNha;
    cout << "  Nhap Pho      : ";	fflush(stdin);	gets(pho);
    cout << "  Nhap Phuong   : ";	fflush(stdin);	gets(phuong);
    cout << "  Nhap Quan     :"; 	fflush(stdin);	gets(quan);
    cout << "  Nhap Thanh Pho:"; 	fflush(stdin);	gets(thanhPho);
}

void DiaChi::Xuat()
{
    cout << "So " << soNha << ", ngo " << ngo << " Pho " << pho << ", phuong " << phuong<< ", quan " << quan << ", TP " << thanhPho << endl;
}
class Nguoi
{
private:
    char hoTen[30];
    char sdt[12];
    DiaChi diaChi;
public:
    void Nhap();
	void Xuat();
};

void Nguoi::Nhap()
{
    cout << "Nhap ho va ten nguoi di cho: ";    fflush(stdin);  gets(hoTen);
    cout << "Nhap so dien thoai: ";    fflush(stdin);  gets(sdt);

	diaChi.Nhap();
}

void Nguoi::Xuat()
{
    cout << "Ho va ten nguoi di cho: " << hoTen << endl;
    cout << "So dien thoai: " << sdt << endl;
    cout << "Dia chi: ";
	diaChi.Xuat();
	cout << endl;
}

class Hang
{
private:
	char tenHang[20];
	double donGia;
	int soLuong;

public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
void Hang::Nhap()
{
	cout << "  Nhap ten hang: ";	fflush(stdin);	gets(tenHang);
	cout << "  Nhap don gia : ";	cin >> donGia;
	cout << "  Nhap so luong: ";	cin >> soLuong;

}
void Hang::Xuat()
{
	cout << left << setw(20) << tenHang << setw(15) << donGia << setw(10) << soLuong << setw(15) << soLuong * donGia << endl;
}

class Phieu
{
private:
	char maPhieu[10];
	char ngayLap[10];
	Nguoi x;
	Hang *h;
	int n;

public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap()
{
	cout << "Nhap ma phieu  : ";	fflush(stdin);	gets(maPhieu);
	cout << "Ngay lap phieu : ";	fflush(stdin);	gets(ngayLap);
	x.Nhap();
	cout << "Nhap so don hang : ";
	cin >> n;
	h = new Hang[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap hang " << i + 1 << " : " << endl;
		h[i].Nhap();
	}
}
void Phieu::Xuat()
{
	cout << "\t\t\tPHIEU NHAP HANG" << endl;

	cout << left << setw(15) << "Ma phieu: " << setw(20) << maPhieu << setw(15) << "Ngay lap: " << setw(20) << ngayLap << endl;

	x.Xuat();

	double sum = 0;
	cout << left << setw(20) << "Ten hang" << setw(15) << "Don gia" << setw(10) << "So luong" << setw(15) << "Thanh tien" << endl;
	for (int i = 0; i < n; i++)
	{
		h[i].Xuat();
		sum += h[i].soLuong * h[i].donGia;
	}
	cout << right << setw(45) << "Cong thanh tien: " << sum << endl;
}

int main(int argc, char const *argv[])
{
	Phieu Phieu;

	Phieu.Nhap();

	cout << endl << endl;

	Phieu.Xuat();
    
	cout<<endl;
	
	return 0;
}
