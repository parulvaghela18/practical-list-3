#include<iostream>
using namespace std;

class account
{
	public :
		int acc_no;
		int balance;
		int branch_code;

	void getdata()
	  {
	  	cout<<"Enter the Account No  :: ";
    		cin>>acc_no;
    	cout<<"Enter the Balance :: ";
    		cin>>balance;
    	cout<<"Enter the Branch code ::";
		    cin>>branch_code;
	  }
	void displaydata();
};

void account::displaydata()
{
    cout << "Account details:\n";
    cout << "Account ::"<<acc_no<<endl<<"Balance::"<<balance<<endl<<"Banch Code ::"<<branch_code;
}
int main()
{
    account a1;
    
    a1.getdata();
    a1.displaydata();

    return 0;
}
