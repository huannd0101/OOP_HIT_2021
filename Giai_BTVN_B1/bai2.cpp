#include<iostream>
#include<string.h>
using namespace std;
class SinhVien {
public:
     int maSV;
     char hoTen[30];
     int ngaySinh;
     int thangSinh;
     int namSinh;
     char gioiTinh[30];
     double diemTrungBinh;
     char xepLoai[30];
     void Nhap();
     void Xuat();
};
void SinhVien::Nhap() {
     cout << "Nhap ma sinh vien: "; cin >> maSV; 
     cout << "Nhap ho ten: "; fflush(stdin); gets(hoTen);
     cout << "Nhap ngay sinh: "; cin >> ngaySinh; 
     cout << "Nhap thang sinh: "; cin >> thangSinh; 
     cout << "Nhap nam sinh: "; cin >> namSinh; 
     cout << "Nhap gioi tinh: "; fflush(stdin); gets(gioiTinh); 
     cout << "Nhap diem trung binh: "; cin >> diemTrungBinh;
     cout << "Nhap xep loai: "; fflush(stdin); gets(xepLoai);
}
void SinhVien::Xuat() {
     cout << "Ma sinh vien: " << maSV << endl;
     cout << "Ho ten: " << hoTen << endl;
     cout << "Ngay sinh: " << ngaySinh << endl;
     cout << "Thang sinh: " << thangSinh << endl;
	cout << "Nam sinh: " << namSinh << endl;
     cout << "Gioi tinh: " << gioiTinh << endl;
     cout << "Diem trung binh: " << diemTrungBinh << endl;
     cout << "Xep loai: " << xepLoai << endl;
}

int main() {
     SinhVien SVDiemCao,SVDiemThap,SVtmp;
     
     cout << "Nhap thong tin sinh vien diem cao: " << endl;
     SVDiemCao.Nhap();
     cout << "Nhap thong tin sinh vien diem thap: " << endl;
     SVDiemThap.Nhap();
    
     if(SVDiemCao.diemTrungBinh < SVDiemThap.diemTrungBinh) {
     	SVtmp = SVDiemCao;
		SVDiemCao = SVDiemThap;
		SVDiemThap = SVtmp;
     }
     
     cout << "Sinh vien co diem cao: " << endl;
     SVDiemCao.Xuat();
     
     cout << "Sinh vien co diem thap: " << endl;
     SVDiemThap.Xuat();
     
     return 0;
}
/*
Cài đặt lớp SinhVien bao gồm: Mã sinh viên, họ tên, ngày sinh, tháng sinh, năm sinh, giới tính, điểm trung bình, xếp loại đạo đức và các phương thức cần thiết
Khai báo 2 sinh viên: SVDiemCao, SVDiemThap
Nhập thông tin cho 2 sinh viên
Nếu SVDiemCao mà có điểm trung bình thấp hơn SVDiemThap thì hoán đổi thông tin của 2 sinh viên
Sau đó xuất ra màn hình thông tin của 2 sinh viên

*/
