#include<iostream>
using namespace std;

class Shape
{
	public:
    	int height;
    	int base;
    	/*
    	void getdata()
    	{
    		cout<<"Enter the height :: ";
    		cin>>height;
    		cout<<"Enter the base :: ";
    		cin>>base;
		}*/
    	void display_shape();
};
void Shape ::display_shape()
{
    cout << "Shape details:\n";
    cout << "Height:" <<height << ",   Base:" <<base;
}

int main()
{
    Shape s1;
    s1.base=10;
    s1.height=20;
    //s1.getdata();
    s1.display_shape();

    return 0;
}
