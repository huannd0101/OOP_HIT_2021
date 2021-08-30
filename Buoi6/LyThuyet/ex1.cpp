#include <iostream>
#include <string.h>
using namespace std;

class Hinh
{
protected:
    char vien[15];
    char mauSac[10];

public:
    Hinh(char *vien, char *mauSac)
    {
        strcpy(this->vien, vien);
        strcpy(this->mauSac, mauSac);
    };
    ~Hinh() {}
};

class HinhTron : public Hinh
{
private:
    float BK;

public:
    HinhTron();
    HinhTron(float BK, char *vien, char *mauSac);
    ~HinhTron() {}

    void Xuat()
    {
        cout << "BK: " << BK;
        cout << "Vien: " << vien;
        cout << "Mau: " << mauSac;
    }
};

HinhTron::HinhTron(float BK, char *vien, char *mauSac) : Hinh(vien, mauSac)
{
    this->BK = BK;
    // strcpy(this->vien, vien);
    // strcpy(this->mauSac, mauSac);
}

int main(int argc, char const *argv[])
{
    HinhTron H(5.1, (char*)"lien", (char*)"Do");
    H.Xuat();
    return 0;
}
