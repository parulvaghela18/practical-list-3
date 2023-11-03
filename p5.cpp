#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    
    void get_distance();

    void display_distance();
};


void Distance::get_distance()
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}


void Distance::display_distance()
{
    cout << "distance details:\n";
    cout << "feet:" << feet << ",inches:" << inches;
}

int main()
{
    Distance dis;

    dis.get_distance();
    dis.display_distance();
    return 0;
}
