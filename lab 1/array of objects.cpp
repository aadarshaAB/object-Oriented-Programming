//Array of objects
#include<iostream>
const int max=100;
using namespace std;
class student 
{
	int id,fees;
	public :
		void get_info()
		{
			cout<<"Enter id and fees:"<<id<<fees<<endl;
			cin>>id>>fees>>endl;
		}
		void showdata()
		{
			cout>>"Id :"<<id<<"fees"<<fees<<endl;

		}
};
int main()
{
	student s[max];
	int i=0,n=0;
	char ans;
	do
	{
		cout<<"Enter student:"<<n+1<<endl;
		s[n++].get_info();
		cout<<"Add any entry(Y/N):"<<endl;
		cin>>ans;
	}
	while (ans!="N");
	cout<<"student id and fees:";
	for(i;i<n;n++)
	{
		cout<<"\nStudent number is :"<i++<<endl;
		s[i].showdata();
	}
	return 0;
}
