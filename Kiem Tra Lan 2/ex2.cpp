#include<iostream>
#include<fstream>

using namespace std;

class Array {
private:
    int *a;
    int n;
public:
    Array();
    Array(int *a, int n);
    ~Array();
    friend istream &operator>>(istream &is, Array &x);
    friend ostream &operator<<(ostream &os, Array x);
    Array operator--();
    double operator++();
    friend void WriteToFile(char *fileName, Array x);
};

void WriteToFile(char *fileName, Array x) {
    ofstream f(fileName, ios::app);
    // ofstream f(fileName, ios::out);
    for(int i=0; i<x.n; i++){
        f << x.a[i] << " ";
    }
    f << endl;
    cout << "Write successfully";
    f.close();
}
void WriteToFile2(char *fileName, int *a, int n) {
    ofstream f(fileName, ios::app);
    // ofstream f(fileName, ios::out);
    for(int i=0; i<n; i++){
        f << a[i] << " ";
    }
    f << endl;
    cout << "Write successfully";
    f.close();
}

void ReadDataFromFile(char *fileName) {
    ifstream f(fileName, ios::in);

    char s[255];
    //end off file(eof): hết dữ liệu
    /*
        dữ liệu còn: f.eof() = false
        dữ liệu hết: f.eof() = true
    */
    while(!f.eof()){
        f.getline(s, 255);
        cout << s << endl;
    }

    f.close();
}


double Array::operator++() {
    int max = a[0];
    int min = a[0];
    for(int i=1; i<n; i++) {
        // if(max < a[i]){
        //     max = a[i];
        // }
        // if(min > a[i]){
        //     min = a[i];
        // }
        // max = (dk) ? dung : sai;
        max = (max > a[i]) ? max : a[i];
        min = (min < a[i]) ? min : a[i];
    }
    return (max+min)/2.0;
}

Array Array::operator--() {
    for(int i=0; i<n; i++) {
        if(a[i] > 5) {
            a[i] = -a[i];
        }
    }
    return *this;
}

istream &operator>>(istream &is, Array &x) {
    is >> x.n;
    x.a = new int[x.n];
    for(int i=0; i<x.n; i++)
        is >> x.a[i];
    return is;
}

ostream &operator<<(ostream &os, Array x){
    for(int i=0; i<x.n; i++)
        os << x.a[i] << " ";
    return os;
}

Array::Array() {
    a = new int[1];
    n = 0;
}
Array::Array(int *a, int n) {
    this->a = a;
    this->n = n;
}

Array::~Array() {
    a = NULL;
    n = 0;
}




int main() {
    int a[5] = {1, 2, 3, 5, 10};
    int n = 5;
    Array arr(a, n);
    // cin >> arr;

    // cout << arr;
    // WriteToFile((char*)"ABC.txt", arr);
    ReadDataFromFile((char*)"ABC.txt");

    return 0;
}