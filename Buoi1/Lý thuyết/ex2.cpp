/*
  - Lập trình thủ tục
  - Lập trình hướng đối tượng: 
    +) Code dễ bảo trì
    +) Tái sử dụng
    ...
  *) Class
  *) Object: (Đối tượng)
  class Animal {
  public:
    char name[30];
    int age;

    void sleep();
    void eat();
};
*/
#include<iostream>
#include<string.h>

using namespace std;
class Person {
public:
  void Sleep(const char *banBe);
};

class Animal {
public: //access modifier
  //thuộc tính 
  char name[30];
  int age;
  char address[30];

  // Phương thức (method)
  void Sleep(const char *banBe);
  void Eat();
  int TuoiTho();
  void Nhap() {
    cout << "Nhap ten: ";
    gets(name);
    cout << "Nhap tuoi: "; 
    cin >> age; //enter từ cin >> 
    cout << "Nhap dia chi: ";
    fflush(stdin); //xóa bộ nhớ đệm
    gets(address); 
  }
  void Xuat() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << "\n";
    cout << "Address: " << address << endl;
  }

  // void Sleep(const char *banBe) {
  //   cout << name << " dang ngu cung voi " << banBe << endl;
  // }
  // void Eat() {
  //   cout << "Eating...." << endl;
  // }
};

void Animal::Sleep(const char *banBe) {
  cout << "Animal dang ngu cung voi " << banBe << endl;
}

void Person::Sleep(const char *banBe) {
  cout << "Person dang ngu" << endl;
}

void Animal::Eat() {
  cout << "Eating....." << endl;
}

int Animal::TuoiTho() {
  return age + 10;
}

int main() {
  // Animal *cat = new Animal; //

  // cat->age = 1;

  // //dog.age

  // cout << "Age off cat: " << cat->age << endl;

  // Animal dog; //-> đối tượng dog - đối tượng tĩnh

  // // strcpy(dog.name, "Bull"); //copy chuoi
  // // dog.age = 2;
  // // strcpy(dog.address, "Zoo");
  // cout << "Nhap ten: ";
  // gets(dog.name);
  // cout << "Nhap tuoi: "; 
  // cin >> dog.age; //enter từ cin >> 
  // cout << "Nhap dia chi: ";
  // fflush(stdin); //xóa bộ nhớ đệm
  // gets(dog.address); 



  

  // cout << "Name: " << dog.name << endl;
  // cout << "Age: " << dog.age << "\n";
  // cout << "Address: " << dog.address << endl;


  // // dog.Sleep("Mun");
  // // cout << "Sau khi ngu day" << endl;
  // // dog.Eat();
  
  // // Person a;
  // // a.Sleep("");

  // // int tuoiTho = dog.TuoiTho();
  // // cout << "Tuoi tho = " << tuoiTho << endl;

  // Animal dog, dog2;
  // strcpy(dog.name, "Bull");
  // strcpy(dog2.name, "Mun");

  // dog.Sleep(dog2.name);
  // dog2.Sleep(dog.name);

  return 0;
}

/*
  Tính đóng gói (Encapsulation)
  Tính kế thừa (Inheritance)
  Tính đa hình (Polymorphism)
  Tính trừu tượng (Abstraction)
*/

/*
  - access modifier: private, protected, public
*/


/*
Bài tập:
- Khai báo class Nguoi: ten, tuoi, diaChi, diemToan, diemLy, diemHoa;
- Phương thức: Nhap(), Xuat(), DiemTrungBinh();
- Yêu Cầu: 
+) Nhập vào 2 đối tượng
+) Xuất 2 đối tượng vừa nhập ra màn hình
+) So sánh điểm trung bình -> ai cao hơn thì xuất ra tên của người đó + điểm trung bình
*/
