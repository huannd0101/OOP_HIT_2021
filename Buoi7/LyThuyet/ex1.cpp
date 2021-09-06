#include<iostream>
#include<string.h>

using namespace std;

class Animal {
protected:
    char name[30];
    int age;
public:
    Animal() {
        strcpy(this->name, "");
        this->age = 0;
    }
    Animal(char name[], int age) {
        strcpy(this->name, name);
        this->age = age;
    }
    void Nhap();
};



class Cat : Animal {
    int weight;
private:
    char name[30];
    int age;
    Cat();
    Cat(char name[], int age, int weight);
    void Nhap();
};

Cat::Cat() : Animal() {
    this->weight = 0;
}

Cat::Cat(char name[], int age, int weight) : Animal(name, age) {
    this->weight = weight;
}

void Cat::Nhap() {
    Animal::Nhap();
}

class Dog : Animal {
    int gender; //0/1
};