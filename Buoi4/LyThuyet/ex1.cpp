#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int TS, MS;
public:
    PS();
    PS( int TS,int MS);
    ~PS();

    void Xuat();
};

PS::PS()
{
    this->TS = 0;
    this->MS = 1;
}
PS::~PS()
{
    this->TS = 0;
    this->MS = 1;
}

PS::PS( int TS, int MS) 
{
    this->TS = TS;
    this->MS = MS;
}

void PS::Xuat()
{
    cout<<"PS: " << this->TS << "/" << this->MS << endl;
}

int main(int argc, char const *argv[])
{
    PS ps(3,2);

    PS *p = &ps;

    p->Xuat();

    return 0;
}
