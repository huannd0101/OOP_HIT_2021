#include<iostream> //
#include<iomanip> //setw
#include<stdlib.h> //realloc C
using namespace std;
/*
	Đóng gói dữ liệu: 
	private: hiding data: che giấu/ẩn dữ liệu
	Tính trừu tượng: Chỉ cần dùng, không cần biết bên trong hàm xử lý ntn...
		+) level 1: getter, setter, get... -> thể hiện bởi các method
		+) level 2: interface, abtract -> để lại
	+) level 1: Hiding data + Encapsulation = Abstraction.
*/
class Date {
private: 
	int day, month, year;
public:
	// friend class Person;
	int GetDay() {
		return day;
	}
	int GetMonth() {
		return month;
	}
	int GetYear() {
		return year;
	}
	void SetDay(int day) {
		this->day = day;
	}
	void SetMonth(int month) {
		this->month = month;
	}
	void SetYear(int year) {
		if(year <= 2003) {
			this->year = year;
		}else {
			this->year = 1996;
		}
	}
};

class Student {
private:
	int id;
	char name[30];
public:
	static int idTemp;
	void Nhap();
	void Xuat();
	Student();
};

int Student::idTemp = 1;

Student::Student() {
	this->id = Student::idTemp;
	Student::idTemp++;
}

void Student::Nhap() {
	cout << "Enter name: "; fflush(stdin);	gets(name);
}

void Student::Xuat() {
	cout << setw(15) << left << id << name << endl;
}

class Phieu {
private:
	char namePhieu[30];
	int n;
	Student *students;
public:
	void Nhap();
	void Xuat();
	friend void Insert(Phieu &a, Student x, int pos);
};

void Phieu::Nhap () {
	cout << "Nhap ten phieu: "; fflush(stdin); gets(namePhieu);
	cout << "Nhap so luong sinh vien: "; cin >> n;
	students = new Student[n];
	for(int i=0; i<n; i++) {
		cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
		students[i].Nhap();
	}
}

void Phieu::Xuat() {
	cout << "Ten phieu: " << namePhieu << endl;
	cout << "Danh sach sinh vien: " << endl;
	cout << setw(15) << left << "id" << "name" << endl;
	for(int i=0; i<n; i++) {
		students[i].Xuat();
	}
}

void Insert(Phieu &a, Student x, int pos) {
	// a = (int*)realloc(a, (n+1)*sizeof(int));
	a.students = (Student*)realloc(a.students, (a.n + 1) * sizeof(Student)); //thêm hoặc bớt ô nhớ của mảng
	for(int i=a.n; i>pos-1; i--){
		a.students[i] = a.students[i-1];
	}
	a.n++;
	a.students[pos-1] = x;
}

int main() {
	Phieu a;

	a.Nhap();

	a.Xuat();
	cout << "---------------" << endl;

	Student x;
	x.Nhap();

	Insert(a, x, 1);
	cout << "\t\t\tThong tin phieu" << endl;
	a.Xuat();
	
	return 0;
}
