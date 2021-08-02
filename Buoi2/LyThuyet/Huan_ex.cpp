#include<iostream>
#include<string.h>

using namespace std;
/*
  access modifier: phạm vi truy cập
  private:
  protected: Kế thừa
  public: 
  Hàm bạn, lớp bạn: 
*/
class Person {
private: 
  int sdt;
public:
  char hoTen[30];
};
class SinhVien {
private: //đóng gói dữ liệu
  int maSV;
  char hoTen[30];
  int tuoi;
  double diemTB;
  bool gioiTinh; //true: nam  || false: nữ
public: 
  SinhVien(); //Hàm khỏi tạo không đối
  // SinhVien(int maSVNew);
  // SinhVien(int maSVNew, char hoTenNew[]);
  // SinhVien(int maSVNew, char hoTenNew[], int tuoiNew);
  SinhVien(int maSVNew, char hoTenNew[], double diemTBNNew);
  SinhVien(int maSVNew, char hoTenNew[], int tuoiNew, double diemTBNew, bool gioiTinhNew);//Hàm khỏi tạo có đối - Đầy đủ
  ~SinhVien() {
    cout << "Sinh vien da ra truong" << endl;

  }; //tự động gọi
  void Nhap();
  void Xuat();
};

SinhVien::SinhVien() {
  maSV = 0;
  strcpy(hoTen, "");
  tuoi = 0;
  diemTB = 0;
}

// SinhVien::SinhVien(int maSVNew, char hoTenNew[], int tuoiNew){
//   maSV = maSVNew;
//   strcpy(hoTen, hoTenNew);
//   tuoi = tuoiNew;
// }

SinhVien::SinhVien(int maSVNew, char hoTenNew[], int tuoiNew = 19, double diemTBNew = 0, bool gioiTinhNew = true){
  maSV = maSVNew;
  strcpy(hoTen, hoTenNew);
  tuoi = tuoiNew;
  diemTB = diemTBNew;
  gioiTinh = gioiTinhNew;
}

void SinhVien::Nhap() {
  cout << "Nhap ma sinh vien  : "; cin >> maSV;
  cout << "Nhap ten sinh vien : "; fflush(stdin);  gets(hoTen);
  cout << "Nhap tuoi sinh vien: "; cin >> tuoi;
  cout << "Nhap diem sinh vien: "; cin >> diemTB;
}

void SinhVien::Xuat() {
  cout << "Ma sinh vien: " << maSV << endl;
  cout << "Ten sinh vien: " << hoTen << endl;
  cout << "Tuoi: " << tuoi << endl;
  cout << "Diem trung binh: " << diemTB << endl;
}

int main() {
  SinhVien svA;


  return 0;
}