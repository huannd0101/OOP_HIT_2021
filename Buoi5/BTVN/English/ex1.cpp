#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Student
{
private:
    char id[10];
    char name[30];
    char birthday[12];
    char gender[8];
    float GPA;  //  GRADE POINT AVERAGE
    char conduct[10];

public:
    Student();
    Student(char *id, char *name, char *birthday, char *gender, float GPA, char *conduct);
    ~Student();

    // GETTER
    char *getID()
    {
        return id;
    }
    char *getName()
    {
        return name;
    }
    char *getBirthDay()
    {
        return birthday;
    }
    char *getGender()
    {
        return gender;
    }
    double getGPA()
    {
        return GPA;
    }
    char *getConduct()
    {
        return conduct;
    }

    //SETTER
    void setID(char *id)
    {
        strcpy(this->id, id);
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
    void setBirthDay(char *birthday)
    {
        strcpy(this->birthday, birthday);
    }
    void setGender(char *gender)
    {
        strcpy(this->gender, gender);
    }
    void setGPA(double GPA)
    {
        this->GPA = GPA;
    }
    void setConduct(char *conduct)
    {
        strcpy(this->conduct, conduct);
    }

    friend void Input(Student &a);
    friend void Output(Student a);
};

Student::Student()
{
    strcpy(id, "");
    strcpy(name, "");
    strcpy(birthday, "");
    strcpy(gender, "");
    GPA = 0;
    strcpy(conduct, "");
}

Student::Student(char *id, char *name, char *birthday, char *gender, float GPA, char *conduct)
{
    strcpy(this->id, id);
    strcpy(this->name, name);
    strcpy(this->birthday, birthday);
    strcpy(this->gender, gender);
    this->GPA = GPA;
    strcpy(this->conduct, conduct);
}

Student::~Student()
{
    strcpy(id, "");
    strcpy(name, "");
    strcpy(birthday, "");
    strcpy(gender, "");
    GPA = 0;
    strcpy(conduct, "");
}

void Input(Student &a)
{
    char idTem[10];
    char nameTemp[30];
    char birthdayTemp[12];
    char genderTemp[8];
    float GPA_Temp;  
    char conductTemp[20];
    cout << " Enter id      : ";    fflush(stdin);  gets(idTem);            a.setID(idTem);
    cout << " Enter name    : ";    fflush(stdin);  gets(nameTemp);         a.setName(nameTemp);
    cout << " Enter birthday: ";    fflush(stdin);  gets(birthdayTemp);     a.setBirthDay(birthdayTemp);
    cout << " Enter Gender  : ";    fflush(stdin);  gets(genderTemp);       a.setGender(genderTemp);
    cout << " Enter GPA     : ";    cin>>GPA_Temp;  a.setGPA(GPA_Temp);
    cout << " Enter conduct : ";    fflush(stdin);  gets(conductTemp);      a.setConduct(conductTemp);
}

void Output(Student a)
{
    cout << left << setw(10) << a.getID() << setw(30) << a.getName() << setw(12) << a.getBirthDay() << setw(10) << a.getGender()
         << setw(6) << a.getGPA() << setw(15) << a.getConduct() << endl;
}

void Title()
{
    cout << left << setw(10) << "ID" << setw(30) << "Name" << setw(12) << "BirthDay" << setw(10) << "Gender"
         << setw(6) << "GPA" << setw(15) << "Conduct" << endl;
}

int main()
{
    int n;
    cout << "Enter the number of students: ";   cin >> n;
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Student " << i + 1 << ": " << endl;
        Input(a[i]);
    }
    cout << "----------------------------------------------------------------------" << endl;

    cout << "\nList of students:" << endl;
    Title();
    for (int i = 0; i < n; i++)
    {
        Output(a[i]);
    }


    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].getConduct(), "Tot") == 0)
        {
            number++;
            break;
        }
    }

    if (number == 0)
        cout << "\nNo student has good conduct" << endl;
    else
    {
        cout << "\nList of students with good conduct:" << endl;
        Title();
        for (int i = 0; i < n; i++)
            if (strcmp(a[i].getConduct(), "Tot") == 0)
                Output(a[i]);
    }



    return 0;
}