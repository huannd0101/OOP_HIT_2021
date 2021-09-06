#include <iostream>

using namespace std;

/*
    +) Overloading:
        1) function(hàm)
            3.4f: ép kiểu từ double -> float
            3.4: mặc định đây là kiểu double
        2) operator(toán tử)
    Phương thức toán tử, nhập, xuất
*/

int Sum(int a, int b) {
    return a + b;
}
float Sum(float a, float b) {
    return a + b;
}
double Sum(double a, double b) {
    return a + b;
}

int main(){
    cout << Sum(1, 2) << endl;
    cout << Sum(1.5f, 2.2f) << endl;
    cout << Sum(1.5, 2.4) << endl;
    return 0;
}