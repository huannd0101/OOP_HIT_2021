#include<iostream>
#include<string.h>
using namespace std;

class Date {
private:
  int day, month, year;
public:
  void Xuat();
  //hàm bạn
  friend void Nhap(Date &ngaySinh);
};
void Date::Xuat() {
  cout << day << "/" << month << "/" << year << endl;
}

void Nhap(Date &ngaySinh) {
  cout << "Nhap ngay sinh: "; cin >> ngaySinh.day;
  cout << "Nhap thang sinh: "; cin >> ngaySinh.month;
  cout << "Nhap nam sinh: "; cin >> ngaySinh.year;
}

int main () {
  Date date;
  Nhap(date);

  date.Xuat();
  
  return 0;
}
/*
  - Nhap(Date &ngaySinh) yêu cầu truy xuất đến các thuộc tính của Date
  -> Cho Nhap(Date &ngaySinh) làm bạn của class Date
*/