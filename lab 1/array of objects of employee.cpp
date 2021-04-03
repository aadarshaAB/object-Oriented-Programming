#include<iostream>
using namespace std;
class Employee
{
	private:
		int ID,salary;
		char name[15];
	public:
		void getdata();
		void showdata();
};
void Employee::	getdata()
{
	cout<<"Enter ID of Employee:";
	cin>>ID;
	cout<<"\nEnter name of Employee:";
	cin>>name;
	cout<<"\nEnter Salary of Employee:";
	cin>>salary;
	cout<<"_________________________________\n";
}
void Employee:: showdata()
{
	cout<<"****************"<<endl;
	cout<<"ID\t\tName\t\t\Salary\t\t"<<endl;
	cout<<ID<<"\t\t"<<name<<"\t\t"<<salary<<endl;
}
int main()
{
	Employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Details of Employee\t"<<i+1<<endl;
		e[i].getdata();
	}
	for(i=0;i<5;i++)
	{
		e[i].showdata();
	}
	return 0;
}
