#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class CanBo {
public:
     char maCanBo[10];
     char hoTen[30];
     char ngaySinh[30];
     int soNgay;
     void Nhap();
     int TinhLuong();
     void Xuat();
};

void CanBo::Nhap() {
     cout << "Nhap ma can bo: "; fflush(stdin); gets(maCanBo);
     cout << "Nhap ho ten: "; fflush(stdin); gets(hoTen);
     cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
     cout<<"Nhap so ngay lam viec trong thang: "; cin >> soNgay;
}

int CanBo::TinhLuong() {
     return soNgay * 250000;
}

void CanBo::Xuat() {
	cout << endl;
	cout<< "Thong tin: " << endl;
     cout << "\tMa can bo: " << maCanBo << endl;
     cout << "\tHo ten: " << hoTen << endl;
     cout << "\tNgay sinh: " <<  ngaySinh << endl;
     cout << "\tSo ngay lam viec trong thang: " << soNgay << endl;
     cout << "\tLuong cua can bo la: " << TinhLuong() <<endl;
}

int main() {
     CanBo canbo1;
     
     canbo1.Nhap();
     canbo1.Xuat();

     return 0;
}
/*
Cài đặt chương trình hướng đối tượng thực hiện các yêu cầu sau:
Thiết kế, cài đặt lớp CanBo bao gồm các thuộc tính: Mã cán bộ, họ tên, ngày sinh, số ngày làm việc trong tháng và các phương thức:
Phương thức Nhap() để nhập thông tin của cán bộ.
Phương thức TinhLuong(): trả về lương của cán bộ theo công thức Lương = Số ngày làm trong tháng * 250000.
Phương thức Xuat(): hiển thị thông tin của cán bộ ra màn hình.
Xây dựng chương trình chính nhập thông tin cho 1 cán bộ. Xuất thông tin của cán bộ đó ra cùng với phương thức Xuat() ở trên.

*/
