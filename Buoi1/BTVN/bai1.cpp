#include<iostream>
#include<string>
#define PI 3.14
using namespace std;
class HinhTron {
public:
     float r;
     void Nhap();
     void Xuat();
     float TinhChuVi();
     float TinhDienTich();
};

float HinhTron::TinhChuVi() {
     return  2*PI*r;
}
float HinhTron::TinhDienTich() {
     return  r*r*PI;
}

int main() {
     HinhTron ht;
     
     cout << "Nhap ban kinh r = ";
     cin >> ht.r;
     cout << "Chu vi C = " << ht.TinhChuVi() << endl;
     cout << "Dien tich S = " << ht.TinhDienTich() << endl;

     return 0;
}
/*
Viết chương trình hướng đối tượng giải quyết bài toán chu vi, diện tích hình tròn theo yêu cầu sau:
Khởi tạo class HinhTron với thuộc tính là bán kính.
Khai báo và định nghĩa 2 phương thức trả về chu vi và diện tích
Ở hàm main khởi tạo 1 đối tượng hình tròn, nhập giá trị cho bán kính và in ra màn hình chu vi và diện tính của hình tròn qua 2 phương thức ở trên.
*/

