#include <bits/stdc++.h>
using namespace std;

class GOODS//Hang Hoa
{
    char goodsCode[15];//Ma Hang
    char goodsName[50];//Ten Hang
    char dateOfGoodsReceipt[20]; //Ngay Nhap Hang
    char manufacturer[50];//Nha San Xuat
    float goodsPrice; //Don Gia
    float goodsAmount; // So Luong

    public:
        GOODS();
        GOODS(char GoodsCode[], char GoodsName[], char DateOfGoodsReceipt[], char Manufacturer[], float GoodsPrice, float GoodsAmount);
        ~GOODS();
        void Input();
        void Output();
};

GOODS::GOODS()
{
    strcpy(goodsCode, "");
    strcpy(goodsName, "");
    strcpy(dateOfGoodsReceipt, "");
    strcpy(manufacturer, "");
    goodsPrice = 0;
    goodsAmount = 0;
}

GOODS::GOODS(char GoodsCode[], char GoodsName[], char DateOfGoodsReceipt[], char Manufacturer[], float GoodsPrice, float GoodsAmount)
{
    strcpy(this->goodsCode, GoodsCode);
    strcpy(this->goodsName, GoodsName);
    strcpy(this->dateOfGoodsReceipt, DateOfGoodsReceipt);
    strcpy(this->manufacturer, Manufacturer);
    this->goodsPrice = GoodsPrice;
    this->goodsAmount = GoodsAmount;
}

GOODS::~GOODS()
{
    strcpy(goodsCode, "");
    strcpy(goodsName, "");
    strcpy(dateOfGoodsReceipt, "");
    strcpy(manufacturer, "");
    goodsPrice = 0;
    goodsAmount = 0;
}

void GOODS::Input()
{
    cout << "Nhap Ma Hang: ";
    fflush(stdin);
    gets(goodsCode);

    cout << "Nhap Ten Hang: ";
    fflush(stdin);
    gets(goodsName);

    cout << "Nhap Ngay Nhap Hang: ";
    fflush(stdin);
    gets(dateOfGoodsReceipt);

    cout << "Nhap Hang San Xuat: ";
    fflush(stdin);
    gets(manufacturer);

    cout << "Nhap Don Gia: ";
    cin >> goodsPrice;

    cout << "Nhap So Luong: ";
    cin >> goodsAmount;
}

void GOODS::Output()
{
    cout << setw(15) << left << goodsCode
         << setw(50) << left << goodsName
         << setw(20) << left << dateOfGoodsReceipt
         << setw(50) << left << manufacturer
         << setw(15) << left << setprecision(15) << goodsPrice
         << setw(15) << left << setprecision(15) << goodsAmount
         << setw(15) << left << setprecision(15) << goodsPrice * goodsAmount << endl;
}

int main()
{
    GOODS P, Q("H02", "Hang 2", "23/08/2021", "Toyota", 250000, 100);

    cout << "Nhap Thong Tin Cho Mat Hang P: ";
    P.Input();

    cout << setw(15) << left << "MA HANG"
         << setw(50) << left << "TEN HANG"
         << setw(20) << left << "NGAY NHAP"
         << setw(50) << left << "NHA SAN XUAT"
         << setw(15) << left << "DON GIA"
         << setw(15) << left << "SO LUONG"
         << setw(15) << left << "THANH TIEN" << endl;

    P.Output();
    Q.Output();

    return 0;
}