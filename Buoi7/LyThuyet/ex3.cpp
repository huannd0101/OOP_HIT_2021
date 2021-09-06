#include<iostream>

using namespace std;
/*
    +) Overloading:
        1) function(hàm)
            3.4f: ép kiểu từ double -> float
            3.4: mặc định đây là kiểu double
        2) operator(toán tử):
            2.1: Toán tử 1 ngôi: i++; i--, --i, ++i;
            2.2: Toán tử 2 ngôi: a+b, ...
            2.3: (a>b)? max = a : max = b;
    Phương thức toán tử, nhập, xuất
        istream: input stream: >>
        ostream: output stream: <<
    +) tìm ước chung lớn nhất
    +) Rút gọn ps
*/

class PhanSo {
private:
    double a, b;
public:
    void Nhap();
    void Xuat();
    void Tang(); //Đầu bài: Tăng cả tử và mẫu lên 1 đơn vị
    // void operator++();
    PhanSo operator++();
    double operator--(); //Đầu bài: hiển thị phân số dưới dạng số...
    //Cộng 2 phân số
    PhanSo operator+(PhanSo x);

    PhanSo operator-(PhanSo x);
    PhanSo operator/(PhanSo x);
    PhanSo operator*(PhanSo x);

    //luồng nhập xuất
    friend istream &operator >> (istream &is, PhanSo &ps);
    friend ostream &operator << (ostream &os, PhanSo ps);
};
double PhanSo::operator--(){
    return a / b;
}
// (this)a + b;
PhanSo PhanSo::operator+(PhanSo x) {
    PhanSo c;
    c.a = this->a * x.b + this->b * x.a;
    c.b = this->b * x.b;
    return c;
}

istream &operator >> (istream &is, PhanSo &ps){
    is >> ps.a;
    is >> ps.b;
    return is; //k có thầy giáo đánh sai
}
ostream &operator << (ostream &os, PhanSo ps) {
    os << ps.a << "/" << ps.b;
    return os;
}

PhanSo PhanSo::operator ++() {
    // PhanSo x;
    // x.a = ++this->a;
    // x.b = ++this->b;
    // PhanSo x;
    // x.a = this->a++;
    // x.a = this->a; -->Xong sau đó. thực hiện ++
    // x.b = this->b++;
    // return x;
    /*
        ++a trả về  giá trị SAU khi tăng; 
        a++ trả về giá trị TRƯỚC khi tăng; 
        a-- trả về giá trị TRƯỚC khi giảm; 
        --a trả về giá trị SAU khi giảm.
    */
    this->a++;
    //a đã đc cộng
    this->b++;
    return *this; //! * lấy giá trị ô nhớ mà con trỏ đang trỏ đến
}

void PhanSo::Nhap() {
    cin >> a >> b;
}
void PhanSo::Xuat() {
    cout << a << "/" << b;
}
void PhanSo::Tang() {
    this->a++;
    this->b++;
}



int main() {
    PhanSo ps1, ps2;
    cout << "Nhap ps1 = ";
    cin >> ps1;
    // cout << "Nhap ps2 = ";
    // cin >> ps2;

    // PhanSo ps3 = ps1+ ps2;
    ps2 = ++ps1;
    cout << ps2;
    // ps1.Xuat();
    // cout << "ps3 = " << ps3 << " = " << --ps3 << endl;
    // cout << "ps2 = " << ps2;
    // cout << "ps1 = " << ps1;

    return 0;
}


//Phú Nam:
PhanSo PhanSo::operator+(PhanSo x){
	PhanSo c;
	c.a=this->a * x.b + this->b * x.a;
	c.b=this->b * x.b;
	return c;
}
PhanSo PhanSo::operator-(PhanSo x){
	PhanSo c;
	c.a=this->a * x.b - this->b * x.a;
	c.b=this->b * x.b;
	return c;
}
PhanSo PhanSo::operator*(PhanSo x){
	PhanSo c;
	c.a=this->a * x.a;
	c.b=this->b * x.b;
	return c;
}
PhanSo PhanSo::operator/(PhanSo x){
	PhanSo c;
	c.a=this->a * x.b ;
	c.b=this->b * x.a;
	return c;
}
