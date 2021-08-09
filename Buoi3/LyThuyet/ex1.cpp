#include<iostream>

using namespace std;

class Student;

class Date {
private:
  int day, month, year;
public:
  Date();
  Date(int d, int m , int y);
  void Xuat();
  friend class Student;
};

Date::Date() {
  day = month = year = 0;
}

Date::Date(int d, int m , int y) {
  day = d;
  month = m;
  year = y;
}

Date getDate() {
  return Date(1, 2, 2001);
}

// void Date::Nhap() {
//   cout << "Nhap ngay : "; cin >> day;
//   cout << "Nhap thang: "; cin >> month;
//   cout << "Nhap nam  : "; cin >> year;
// }

void Date::Xuat() {
  cout << day << "/" << month << "/" << year << endl;
}

class Student {
private:
  char maSV[30], hoTen[30];
  // char ngaySinh[30];//01/01/2001
  Date ngaySinh;
public: 
  void Nhap();
  void Xuat();
};

void Student::Nhap() {
  cout << "Nhap ma sinh vien : "; fflush(stdin); gets(maSV);
  cout << "Nhap ten sinh vien: "; fflush(stdin); gets(hoTen);
  cout << "Nhap ngay sinh: "; cin >> ngaySinh.day;
  cout << "Nhap thang sinh: "; cin >> ngaySinh.month;
  cout << "Nhap nam sinh: "; cin >> ngaySinh.year;
}

void Student::Xuat() {
  cout << "Ma sinh vien : " << maSV << endl;
  cout << "Ten sinh vien: " << hoTen << endl;
  cout << "Ngay sinh    : ";
  ngaySinh.Xuat();
}

// int main() {
//   Student svA;
//   svA.Nhap();
//   cout << "\nThong tin sinh vien: " << endl;
//   svA.Xuat();

//   return 0;
// }

/*
  class Date {
    friend class Student;
  }

  class Student {

  }
  -> Student là bạn của Date: có thể truy xuất đến các thuộc tính của Date
  -> Date không phải là bạn của Student: không thể truy xuất đến các thuộc tính của Student

  Tóm Tắt(friend class): Khi ngaySinh của Student yêu cầu truy cập đến thuộc tính của ngaySinh 
          -> Để các thuộc tính của ngaySinh là public
          -> Khai báo Student là bạn của class Date
  Tóm Tắt(friend function): Khi 1 function mà yêu cầu truy cập đến thuộc tính của đối tượng nào đó
          -> Đối tượng đấy phải chuyển access modifier thành public
          -> Khai báo hàm là bạn của class đấy -> truy cập được
*/

/* Lớp bạn
  - Hoàng {
    mẹ già, vợ, con thơ;
    friend class Hùng;
  };
  - Hùng {

  };
*/

class Hoang {
private: 
  char tenVo[30];
public:
  friend class Hung;
  friend void ShowTenVo(Hoang hoang);
};

class Hung {
public:
  void ChamVo(Hoang bestFriend) {
    cout << "Hung dang cham: " << bestFriend.tenVo;
  }
};

void ShowTenVo(Hoang hoang) {
  cout << "Ten vo cua Hoang: " << hoang.tenVo;
}

int main() {

}