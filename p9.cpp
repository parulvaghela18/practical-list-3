#include<iostream>
using namespace std;

class max
{
	private:
		int n1,n2;
	
	public:
	  void	input()
	  {
	  	cout<<"Enter number 1 :: ";
    		cin>>n1;
    		
    	cout<<"Enter number 2 :: ";
    		cin>>n2;
	  }
	  void display()
	  {
			cout<<"Number 1 ::"<<n1<<endl;
			cout<<"Number 2 ::"<<n2<<endl;
	  }
	  
	  void maximum()
	  {
	  		if(n1>n2)
	  		{
	  			cout<<"Number 1 is Maximum";
			}
			else
			{
				cout<<"Number 2 is Maximum";
			}
	  }

}m1;

int main()
{
    
    
    m1.input();
    m1.display();
    m1.maximum();

    return 0;
}
