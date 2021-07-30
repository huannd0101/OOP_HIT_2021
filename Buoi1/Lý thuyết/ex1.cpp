#include<iostream>

using namespace std;

int main() {
	/*
		printf(); -> cout << "String" << a << endl;
		"\n" -> endl;
		cout << a << b;
		
		scanf("%d", &a); -> cin >> a;
		cin >> a >> b;
	*/
	/*
		C  : byte, int, long, long, double, long double, char...uns
		C++: byte, int, long, long, double, long double, char...uns + bool, string
	*/
	/*
		STT-N1-Nguyen Dinh Huan
	*/
//	bool ok = false;
//	cout << ok;
//	
	string str;
//	cin >> str; //khong nen cin >> string;

	getline(cin, str);
	
	cout << str;

	return 0;
}
