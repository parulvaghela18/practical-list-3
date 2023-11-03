#include<iostream>
using namespace std;
struct student
{
	string name;
	int std;
	float per;	
};
int main ()
{
	student s;
	cout <<"Enter information:"<<endl;
	cout<<"Enter student name:"<<endl;
	getline(cin,s.name);
	cout<<"Enter student standard:"<<endl;
	cin>>s.std;
	cout<<"Enter student percentage:"<<endl;
	cin>>s.per;
	
	cout<<"Displaying information:"<<endl;
	cout<<"Student name is:"<<s.name<<endl;
	cout<<"Student standard is:"<<s.std<<endl;
	cout<<"Student percentage is:"<<s.per<<endl;
	return 0;
	
}
