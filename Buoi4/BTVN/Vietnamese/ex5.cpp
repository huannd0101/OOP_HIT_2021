#include <bits/stdc++.h>
using namespace std;

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
	cout << "\t\t\tPHIEU MUA HANG" << endl;

	cout << left << setw(15) << "Ma phieu: " << setw(20) << maPhieu << setw(15) << "Ngay lap: " << setw(20) << ngayLap << endl;

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
