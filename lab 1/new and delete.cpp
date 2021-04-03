#include<iostream>
using namespace std;
int main()
{
	int i,n,j,m;
	int *st;
	float avg,marks[5],total=0;
	cout<<"Number of students :\t";
	cin>>m;
	st=new int[m];
	for(i=0;i<m;i++)
	{
		cout<<"Enter marks of "<<i+1<<" students:"<<endl;
		for(j=0;j<5;j++)
		{
			cout<<"Marks of "<<j+1<<" subject:"<<endl;
			cin>>marks[j];
			total=total+marks[j];
		}
			cout<<"-----------------"<<endl;
		st[i]=total;
	}
	cout<<"************************************"<<endl;
	for(i=0;i<m;i++)
	{
		cout<<i+1<<" student\n";
		cout<<"Total Marks:\t"<<st[i]<<endl;
		avg=(float)st[i]/5;
		cout<<"Average Marks:\t"<<avg<<endl;
		cout<<"**********************************"<<endl;
	}
	delete(st);
	
}
