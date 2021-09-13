#include <iostream>

using namespace std;

class Animal {
public:
	virtual void Call() {
		cout << "abc abc" << endl;
	}
};

class Dog : public Animal {
public:
	void Call() {
		cout << "woof woof" << endl;
	}
};

class Cat : public Animal {
public:
	void Call() {
		cout << "meow meow" << endl;
	}
};

class Duck : public Animal {
public:
	void Call() {
		cout << "quack quack" << endl;
	}
};

int main() {
	Animal* animals[4];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Duck();
	for (int i = 0; i < 4; i++) {
		animals[i]->Call();
	}
	return 0;
}