#include<iostream>
using namespace std;

class max
{
	private:
		int n1,n2,n3;
	
	public:
	  void	input()
	  {
	  	cout<<"Enter Number 1 :: ";
    		cin>>n1;
    		
    
    	cout<<"Enter Number 2 :: ";
    		cin>>n2;
    		
    	cout<<"Enter Number 3 :: ";
    		cin>>n3;
	  }
	  void display()
	  {
			cout<<"Number 1 ::"<<n1<<endl;
			cout<<"Number 2 ::"<<n2<<endl;
			cout<<"Number 3 ::"<<n3<<endl;

	  }
	  
	  void maximum()
	  {
	  		if(n1>n2 && n1>n3)
	  		{
	  			cout<<"Number 1 is Maximum ....";
			}
			else if(n2>n1 && n2>n3)
			{
				cout<<"Number 2 is Maximum ....";
			}
			else
			{
				cout<<"Number 3 is Maximum ....";
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
