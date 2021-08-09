#include<iostream>
using namespace std;

/*
  static: Được cấp phát ô nhớ khi biên dịch chương trình, không thay đổi
  truy xuất: tenClass::tenBien
  khởi tạo: int Student::cnt = 10;
*/
class Student {
private:
  static int cnt;
  int tuoi;
public:
  Student() {
    cnt+=2;
  }
  void Nhap();
  void Xuat();
  friend void ShowInfo(Student student);
};

void Student::Nhap() {
  cout << "Nhap ten: "; cin >> tuoi;
}
void Student::Xuat() {
  cout << "cnt: " << &Student::cnt << endl;
  cout << "cnt: " << Student::cnt << endl;
  cout << "Tuoi: " << &tuoi << endl;
}
int Student::cnt = 10;
// void ShowInfo(Student student) {
//   cout << "cnt: " << student.cnt << endl;
//   cout << "Ten: " << student.hoTen << endl;
// }

int main( ) {
  Student svA;
  
  Student svB;
  
  Student svC;
  svA.Xuat();
  svB.Xuat();
  svC.Xuat();


  // svA.Nhap();

  return 0;
}