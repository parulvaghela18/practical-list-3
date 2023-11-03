#include <iostream>
using namespace std;

#define MAX 10

class student 
{
private:
    char name[30];
    int age;

public:
    
    void get_details();

    void display_details();
};


void student::get_details()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}


void student::display_details()
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",age:" << age;
}

int main()
{
    student std[MAX]; 
    int n, loop;

    cout << "Enter total number of students: ";
    cin >> n;

    
        std[loop].get_details();

        std[loop].display_details();

    return 0;
}
