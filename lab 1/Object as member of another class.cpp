#include<iostream>
using namespace std;
class Birthday{
	public:
		int year=2000;
		int month=06;
		int day=18;
};
class employee
{
	private:
	    char name[20]="Aadarsha";
	    Birthday birthday;
	public:
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Birthday\nYear:"<<birthday.year<<"\tMonth:"<<birthday.month<<"\tDay:"<<birthday.day<<endl;
			
		}
};
int main()
{
	employee emp;
	emp.display();
}

