#include<iostream>
using namespace std;
struct employee
{
	string emp_name;
	int emp_code;
	int emp_salary;	
	string emp_branch;
};
int main ()
{
	employee e;
	cout <<"enter information,"<<endl;
	cout<<"enter employee name,"<<endl;
	getline(cin,e.emp_name);
	cout<<"enter employee code,"<<endl;
	cin>>e.emp_code;
	cout<<"enter employee salary,"<<endl;
	cin>>e.emp_salary;
	cin.ignore();
	cout<<"enter employee branch,"<<endl;
	getline(cin,e.emp_branch);
	
	cout<<"displaying information,"<<endl;
	cout<<"employee name is ,"<<e.emp_name<<endl;
	cout<<"employee code is ,"<<e.emp_code<<endl;
	cout<<"employee salary is ,"<<e.emp_salary<<endl;
    cout<<"employee branch is ,"<<e.emp_branch<<endl;
	return 0;
	
}
