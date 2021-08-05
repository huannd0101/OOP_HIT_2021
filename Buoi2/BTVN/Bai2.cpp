#include <bits/stdc++.h>
using namespace std;

class FRACTION //Phan So
{
    float a, b;

    public:
        FRACTION();
        FRACTION(float a, float b);
        ~FRACTION();
        void Input();//Nhap
        void Output();//Xuat
        void Simplify_Fraction();//Rut gon phan so
};

FRACTION::FRACTION()
{
    a = 0;
    b = 1;
}

FRACTION::FRACTION(float a, float b)
{
    this->a = a;
    this->b = b;
}

FRACTION::~FRACTION()
{
    a = 0;
    b = 1;
}

void FRACTION::Input()
{
    cout << "Nhap Tu So: ";
    cin >> a;
    
    cout << "Nhap Mau So: ";
    cin >> b;
}

void FRACTION::Output()
{
    if(b == 0)
    {
        cout << "Phan So Khong Hop Le vi Mau So bang 0" << endl;
    }
    else
    {
        cout << a << "/" << b << endl;
    }
}

void FRACTION::Simplify_Fraction()
{
    float temp_a = a, temp_b = b;

    while (temp_a != temp_b)
    {
        if(temp_a > temp_b)
        {
            temp_a -= temp_b;
        }
        else{
            temp_b -= temp_a;
        }
    }

    a /= temp_a;
    b /= temp_b;
}

int main()
{
    FRACTION P(2, 4), Q;

    cout << "Phan So P: ";
    P.Output();

    // cout << "Nhap Phan So Q: " << endl;
    // Q.INPUT();

    Q.Simplify_Fraction();

    cout << "Phan So Q sau rut gon: ";
    Q.Output();
    return 0;
}