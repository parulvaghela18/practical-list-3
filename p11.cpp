#include<iostream>
using namespace std;

class product
{
	public :
		int product_id;
		string product_name;
		int unit_price;

	void getdata()
	  {
	  	cout<<"Enter the Producd Id  :: ";
    		cin>>product_id;
    		cin.ignore();
    	cout<<"Enter the Product Name:: ";
    		getline(cin,product_name);
    	cout<<"Enter the Unit Price ::";
		    cin>>unit_price;
	  }
	void putdata();
};

void product::putdata()
{
    cout << "Product details:\n";
    cout << "Product ID ::"<<product_id<<endl<<"Product Name::"<<product_name<<endl<<"Unit Price ::"<<unit_price<<endl;
}
int main()
{
    product p1,p2;
    
	p1.getdata();
    p1.putdata();

	p2.getdata();
    p2.putdata();

    return 0;
}
