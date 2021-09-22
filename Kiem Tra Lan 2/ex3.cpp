#include<iostream>
using namespace std;
/*
    Template: 
    T: type
*/
template<class T> class Array {
private:
    T *a;
    int n;
public:
    void Nhap();
    void Xuat();
};

template<class T> void Array<T>::Nhap() {
    cin >> n;
    a = new T[n];
    for(int i=0; i<n; i++) cin >> a[i];
}

template<class T> void Array<T>::Xuat() {
    for(int i=0; i<n; i++) cout << a[i] << " ";
}

int main() {
    // Array<float> arr;
    
    // arr.Nhap();

    // arr.Xuat();

    /*
        try
        catch
        throw
    */

    int a;
    try {
        cin >> a;
        if(a == 0){
            throw((char*)"Loi!!!");
        }
        cout << "-------";
        int s = 4/a;

    } catch(char* e){
        cout << "number = " << e;
    }

    cout << "\nHIT" << endl;

    return 0;
}