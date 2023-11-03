#include<iostream>
using namespace std;

class item
{
	public :
		int item_id;
		string item_name;
		int item_price;


	void putdata()
	{
    	cout << "Item details:\n";
    	cout << "Item ID ::"<<item_id<<endl<<"Item Name::"<<item_name<<endl<<"Item Price ::"<<item_price;
	}
	void getdata();
};


void item :: getdata()
	  {
	  	cout<<"Enter the Item Id  :: ";
    		cin>>item_id;
    		cin.ignore();
    	cout<<"Enter the Item Name:: ";
    		getline(cin,item_name);
    	cout<<"Enter the Item Price ::";
		    cin>>item_price;
	  }
int main()
{
    item i1;
    
	i1.getdata();
    i1.putdata();

    return 0;
}
