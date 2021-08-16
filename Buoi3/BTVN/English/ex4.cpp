#include <bits/stdc++.h>
using namespace std;

class School
{
private:
    char name[30];
    char date[12];

public:
    friend class Faculty;
    friend class Student;
};

class Faculty
{
private:
    char name[30];
    char date[12];
    School x;

public:
    void Input();
    void Output();
    friend class Student;
};

void Faculty::Input()
{
    cout << "Enter the school's information: " << endl;
    cout << "\tEnter name          : ";    fflush(stdin);  gets(x.name);
    cout << "\tEnter founding date : ";    fflush(stdin);  gets(x.date);

    cout << "\nEnter the faculty's information: " << endl;
    cout << "\tEnter name         : ";    fflush(stdin);  gets(name);
    cout << "\tEnter founding date: ";    fflush(stdin);  gets(date);
}

void Faculty::Output()
{
    cout << "The school's name          : " << x.name << endl;
    cout << "The school's founding date : " << x.date << endl;

    cout << "The faculty's name         : " << name << endl;
    cout << "The faculty's founding date: " << date << endl;
}

class Student
{
private:
    Faculty y;
    char class_S[30];
    float score;

public:
    Student();
    ~Student();
    void Input();
    void Output();
};

Student::Student()
{
    strcpy( y.x.name, "");
    strcpy( y.x.date, "");
    strcpy( y.name, "");
    strcpy( y.date, "");
    strcpy( class_S, "");
    score = 0;
}

Student::~Student()
{
    strcpy( y.x.name, "");
    strcpy( y.x.date, "");
    strcpy( y.name, "");
    strcpy( y.date, "");
    strcpy( class_S, "");
    score = 0;
}

void Student::Input()
{
    cout << "-----INPUT-----" << endl;
    
    y.Input();

    cout << "\nEnter the class's name   : ";     fflush(stdin);  gets(class_S);
    cout << "Enter the student's score: ";     cin >> score;
}

void Student::Output()
{
    cout << "\n\n-----OUTPUT-----" << endl;

    y.Output();

    cout << "The class's name           : " << class_S << endl;
    cout << "The student's score        : " << score <<endl;
}

int main(int argc, char const *argv[])
{
    Student S;
    S.Input();
    S.Output();
    return 0;
}

// vocabulary
/*  
    - founding: thành lập
    - score: điểm
*/

/*
    -----OUTPUT-----
    The school's name          : Cong nghiep
    The school's founding date : 02/12/2005
    The faculty's name         : CNTT
    The faculty's founding date: 05/07/1999
    The class's name           : CNTT3
    The student's score        : 22.8
*/