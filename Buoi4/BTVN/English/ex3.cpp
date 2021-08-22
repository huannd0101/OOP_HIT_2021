#include <bits/stdc++.h>
using namespace std;

class Provider
{
private:
	char idProvider[10];
	char nameProvider[30];
	char address[50];
    char phone[12];

public:
	void Input();
	void Output();
};

void Provider::Input()
{
	cout << "Enter Provider ID  : ";  fflush(stdin);  gets(idProvider);
	cout << "Enter Provider name: ";  fflush(stdin);  gets(nameProvider);
	cout << "Enter address      : ";  fflush(stdin);  gets(address);
	cout << "Enter phone        : ";  fflush(stdin);  gets(phone);
}

void Provider::Output()
{
	cout << left << setw(15) << "Provider ID: " << setw(50) << idProvider << setw(15) << "Provider Name: " << setw(20) << nameProvider << endl;
	cout << left << setw(15) << "Address: " << setw(50) << address << setw(15) << "Phone: " << setw(20) << phone << endl;
}

class Product
{
private:
    char productID[10];
    char productName[20];
    char productStatus[12];
    int amount;
    float price;
public:
    void Input();
	void Output();
	friend class Card;
};

void Product::Input()
{
	cout << "  Enter Product ID  : ";    fflush(stdin);  gets(productID);
	cout << "  Enter Product Name: ";    fflush(stdin);  gets(productName);
	cout << "  ENter Status      : ";    fflush(stdin);  gets(productStatus);
	cout << "  Enter Amount      : ";    cin >> amount;
	cout << "  Enter Price       : ";    cin >> price;
}
void Product::Output()
{
	cout << left << setw(12) << productID << setw(20) << productName << setw(12) << productStatus << setw(10) << amount << setw(10) 
         << price << setw(12) << amount * price << endl;
}

class Card
{
private:
    char cardID[10];
    Provider x;
    Product *y;
    int n;
public:
    void Input();
	void Output();
};

void Card::Input()
{
    cout << "Enter Card ID      : ";  fflush(stdin);  gets(cardID);
    
    x.Input();

    cout << "Enter number of products = ";   cin >> n;
    y = new Product[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Product " << i + 1 <<": "<<endl;
        y[i].Input();
    }
}

void Card::Output()
{

    cout << "Hanoi University of Industry" << endl;
    cout << "\t\t\t\tCARD ENTER COMPUTER EQUIPMENT" << endl;
    cout << left << setw(15) << "Card ID: " << cardID << endl;

    x.Output();

    double sumMoney = 0;

    cout << left << setw(12) << "Product ID" << setw(20) << "Product Name" << setw(12) << "Status" << setw(10) << "Amount" << setw(10) 
         << "Price" << setw(12) << "Total price"<< endl;

    for (int i = 0; i < n; i++)
    {
        y[i].Output();
        sumMoney += y[i].amount * y[i].price;
    }

    cout << "Amount product: " << setw(20) << left << n << "Total money: " << setw(15) << left << sumMoney << endl;
}

int main(int argc, char const *argv[])
{
    Card P;

    cout << "INPUT: "<<endl;
    P.Input();

    cout << endl << endl;
    cout << "OUTPUT: " << endl;
    P.Output();
    
    return 0;
}
