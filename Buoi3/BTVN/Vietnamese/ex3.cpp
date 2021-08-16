#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void Input();
    void Output();
    friend class DoanhNghiep;
};

void Date::Input()
{
    cout << "Nhap ngay thanh lap: "<<endl;
    cout << "          Nhap ngay  : ";      cin >> day;
    cout << "          Nhap thang : ";      cin >> month;
    cout << "          Nhap nam   : ";      cin >> year;
}

void Date::Output()
{
    cout << "Ngay thanh lap   : " << day << "/" << month << "/ " << year << endl;
}

class DiaChi
{
private:
    char dienThoai[12];
    char phuong[30];
    char quan[30];
    char thanhPho[30];

public:
    friend class DoanhNghiep;
};

class DoanhNghiep
{
private:
    int maDN;
    char tenDN[30];
    Date ngayTL;
    DiaChi diaChi;
    char giamDoc[30];
    long doanhThu;

public:
    void Input();
    void Output();
};

void DoanhNghiep::Input()
{
    cout << "Nhap ma doanh nghiep : ";   cin >> maDN;
    cout << "Nhap ten doanh nghiep: ";   fflush(stdin);     gets(tenDN);

    ngayTL.Input();

    cout << "Nhap so dien thoai   : ";   fflush(stdin);     gets(diaChi.dienThoai);
    cout << "Nhap dia chi: " << endl;
    cout << "           Phuong    : ";   fflush(stdin);     gets(diaChi.phuong);
    cout << "           Quan      : ";   fflush(stdin);     gets(diaChi.quan);
    cout << "           Thanh pho : ";   fflush(stdin);     gets(diaChi.thanhPho);

    cout << "Nhap ten giam doc    : ";   fflush(stdin);     gets(giamDoc);
    cout << "Nhap doanh thu       : ";   cin >> doanhThu;
}

void DoanhNghiep::Output()
{
    cout << "Ma doanh nghiep  : " << maDN << endl;
    cout << "Ten doanh nghiep : " << tenDN << endl;

    ngayTL.Output();

    cout << "So dien thoai    : " << diaChi.dienThoai << endl;
    cout << "Dia chi          : Phuong" << diaChi.phuong << ", Quan" << diaChi.quan << ", Thanh pho " << diaChi.thanhPho << endl;

    cout << "Ten giam doc     : " << giamDoc << endl;
    cout << "Doanh thu        : " << doanhThu << endl;
}

int main(int argc, char const *argv[])
{
    DoanhNghiep DN;

    DN.Input();

    cout << "\n\nThong tin doanh nghiep: " << endl;
    DN.Output();

    return 0;
}
