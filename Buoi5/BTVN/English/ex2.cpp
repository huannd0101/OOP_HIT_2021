#include <iostream>
#include <string.h>
#include <iomanip>
#include <malloc.h>
using namespace std;

class Card;
class Employee
{
private:
	char name[30];
	char position[30];
public:
	void Input();
	void Output();
};

void Employee::Input()
{
	cout << "Enter Inventory Employee: " << endl;
	cout << "  Enter name    : ";	fflush(stdin);	gets(name);
	cout << "  Enter position: ";	fflush(stdin);	gets(position);
}

void Employee::Output()
{
	cout << left << setw(20) << "Employee's name: " << setw(30) << name << setw(20) << "Position: " << position << endl;
}

class Room
{
private:
	char roomName[30];
	char roomNo[10];
	char managerName[30];
public:
	void Input();
	void Output();
};

void Room::Input()
{
	cout << "Enter Room Information: " << endl;
	cout << "  Enter room name: ";	fflush(stdin);	gets(roomName);
	cout << "  Enter room No  : ";	fflush(stdin);	gets(roomNo);
	cout << "  Enter manager  : ";	fflush(stdin);	gets(managerName);
}

void Room::Output()
{
	cout << left << setw(20) << "Room's name: " << setw(30) << roomName << setw(20) << "RoomNO: " << roomNo << endl;
	cout << "Manager: " << managerName << endl;
}

class Asset
{
private:
	char assetName[30];
	int amount;
	char status[20];
public:
	Asset();	
	Asset(char assetName[30], int amount, char status[20]);
	void Input();
	void Output();
	friend class Card;
	friend void Change(Card c);
	friend void Insert(Card &c, Asset x);
	friend void Sort(Card c);
};

Asset::Asset() 
{
	strcpy(assetName, "");
	amount = 0;
	strcpy(status, "");
}

Asset::Asset(char assetName[30], int amount, char status[20]) 
{
	strcpy(this->assetName, assetName);
	this->amount = amount;
	strcpy(this->status, status);
}

void Asset::Input()
{
	cout << "  Enter asset name: ";	fflush(stdin);	gets(assetName);
	cout << "  Enter amount    : ";	cin >> amount;
	cout << "  Enter status    : ";	fflush(stdin);	gets(status);
}

void Asset::Output()
{
	cout << left << setw(30) << assetName << setw(15) << amount << setw(20) << status << endl;
}

class Card
{
private:
	char id[10];
	char date[10];
	Employee employee;
	Room room;
	int n;
	Asset *assets;
public:
	void Input();
	void Output();
	friend void Change(Card c);
	friend void Insert(Card &c, Asset x);
	friend void Sort(Card c);
};

void Card::Input()
{
	cout << "INPUT: " << endl;
	cout << "Enter CardNo        : ";	fflush(stdin);	gets(id);
	cout << "Enter inventory date: ";	fflush(stdin);	gets(date);

	employee.Input();

	room.Input();

	cout << "Enter the number of asset: ";	cin>>n;

	assets = new Asset[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter asset " << i+1 << ": " << endl;
		assets[i].Input();
	}
}

void Card::Output()
{
	cout << "\t\t\tASSET INVENTORY CARD" << endl;
	cout << left << setw(20) << "CardID: " << setw(30) << id << setw(20) << "Inventory date: " << date << endl;

	employee.Output();

	room.Output();

	int sum = 0;
	cout << left << setw(30) << "Asset Name" << setw(15) << "Amount" << setw(20) << "Status" << endl;
	for (int i = 0; i < n; i++)
	{
		assets[i].Output();
		sum += assets[i].amount;
	}
	cout << "Amount assets inventoried is: " << setw(15) << n << "Total amount: " << sum << endl;
}

// Bonus 1:
void Change(Card c)
{
	for (int i = 0; i < c.n; i++)
		if (strcmp( c.assets[i].assetName, "May vi tinh") == 0)
			c.assets[i].amount = 20;
}

// Bonus 2: 
void Insert(Card &c, Asset x)
{
    c.assets = (Asset *)realloc(c.assets, (c.n + 1) * sizeof(Asset));
    for (int i = c.n; i >= 2; i--)
	{
        c.assets[i] = c.assets[i - 1];
	}
    c.assets[1] = x;
    c.n++;
}

// Bonus 3:
void Sort(Card c)
{
    for (int i = 0; i < c.n - 1; i++)
        for (int j = i + 1; j < c.n; j++)
            if (c.assets[i].amount > c.assets[j].amount)
            {
                Asset temp = c.assets[i];
                c.assets[i] = c.assets[j];
                c.assets[j] = temp;
            }
}

int main()
{
	Card c;
	c.Input();
	cout << "-------------------------------------------------------------------------------------" << endl;

	cout << "\n\nOUTPUT: " << endl << endl;
	c.Output();
	cout << "-------------------------------------------------------------------------------------" << endl;

	// Bonus 1: 
	Change(c);
	cout << "\n\nBonus 1: Card after change: " << endl << endl;
	c.Output();
	cout << "-------------------------------------------------------------------------------------" << endl;
	
	// Bonus 2: 
	Asset x((char*)"Laptop", 10, (char*)"Tot");		// You don't have to have (char*), I avoid the 'warning'
	// Asset x;
	// x.Input();
	Insert(c, x);
	cout << "\n\nBonus 2: Card after insert: " << endl << endl;
	c.Output();
	cout << "-------------------------------------------------------------------------------------" << endl;

	// Bonus 3: 
	Sort(c);
	cout << "\n\nBonus 3: Card after sort: " << endl << endl;
	c.Output();
	cout << "-------------------------------------------------------------------------------------" << endl;


	return 0;
}
