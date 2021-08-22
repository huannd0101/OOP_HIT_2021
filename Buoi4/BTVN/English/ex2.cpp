#include <bits/stdc++.h>
using namespace std;

class Provider
{
private:
	char providerID[10];
	char providerName[30];
	char address[50];

public:
	void Input();
	void Output();
};
void Provider::Input()
{
	cout << "Enter the provider's ID  : ";	fflush(stdin);	gets(providerID);
	cout << "Enter the provider's name: ";	fflush(stdin);	gets(providerName);
	cout << "Enter address            : ";	fflush(stdin);	gets(address);
}
void Provider::Output()
{
	cout << left << setw(15) << "Provider ID:   " << setw(20) << providerID << setw(15) << "Provider Name: " << setw(20) << providerName << endl;
	cout << left << setw(15) << "Address:      " << address << endl;
}

class Product
{
private:
	char productName[25];
	double price;
	int amount;

public:
	void Input();
	void Output();
	friend class Card;
};
void Product::Input()
{
	cout << "  Enter Product name: ";	fflush(stdin);	gets(productName);
	cout << "  Enter Price       : ";	cin >> price;
	cout << "  Enter Amount      : ";	cin >> amount;

}
void Product::Output()
{
	cout << left << setw(25) << productName << setw(15) << price << setw(10) << amount;
	cout << left << setw(15) << amount * price << endl;
}

class Card
{
private:
	char idCard[5];
	char dateCreated[10];
	Provider provider;
	Product *product;
	int n;

public:
	void Input();
	void Output();
};
void Card::Input()
{
	cout << "Enter the card's ID      : ";	fflush(stdin);	gets(idCard);
	cout << "Enter date created       : ";	fflush(stdin);	gets(dateCreated);
	provider.Input();
	cout << "Enter number product : ";
	cin >> n;
	product = new Product[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter product " << i + 1 << " : " << endl;
		product[i].Input();
	}
}
void Card::Output()
{
	cout << "\t\tCARD ENTER PRODUCT" << endl;

	cout << left << setw(15) << "Id Card: " << setw(20) << idCard;
	cout << left << setw(15) << "Date created: " << setw(20) << dateCreated << endl;

	provider.Output();

	double sum = 0;
	cout << left << setw(25) << "Product's name" << setw(15) << "Price" << setw(10) << "Amount" << setw(15) << "Total price" << endl;
	for (int i = 0; i < n; i++)
	{
		product[i].Output();
		sum += product[i].amount * product[i].price;
	}
	cout << right << setw(50) << "Total Money : " << sum << endl;
}

int main(int argc, char const *argv[])
{
	Card card;
	card.Input();
	cout << endl << endl;
	card.Output();
	cout<<endl;
	
	return 0;
}
