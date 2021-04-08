//program to illustrate binary operator overloadhing
//Assignment operator
#include<iostream>
#include<string.h>
using namespace std;
class result{
	int marks1,marks2;
	public:
		result()
		{
			marks1=0;
			marks2=0;
		}
		result(int m1,int m2)
		{
			marks1=m1;
			marks2=m2;
		}
		void operator =(result x)
		{
			marks1=x.marks1;
			marks2=x.marks2;
		}
		void display()
		{
			cout<<"Marks of 1st subject"<<marks1<<endl;
			cout<<"Marks of 2nd subject:"<<marks2<<endl;
		}
};
int main()
{
	result n1(34,42);
	result n2(57,37);
	result n3;
	cout<<"Details of 1st student"<<endl;
	n1.display();
	cout<<"Details of 2nd student"<<endl;
	n2.display();
	cout<<"copy details of 1st student"<<endl;
	n3=n1;
	n3.display();
}
