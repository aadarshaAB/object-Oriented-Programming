#include<iostream>
using namespace std;
int power(int a,int c)
{
	int n=1;
	int i;
	for(i=1;i<=c;i++)
	{
		n=n*a;
	}
	return n;
}
int power(int a,int b,int c)
{
	int n=1;
	int i;
	int m=a+b;
	for(i=1;i<=c;i++)
	{
		n=n*m;
	}
	return n;
	
}
int main()
{
	int a,b,c,x,y;
	cout<<"Enter 1st number:"<<endl;
	cin>>a;
	cout<<"Enter 2nd number: "<<endl;
	cin>>b; 
	cout<<"Enter Power:"<<endl;
	cin>>c;
	x=power(a,c);
	cout<<a<<"^"<<c<<"\t="<<x<<endl;
	y=power(a,b,c);
	cout<<"("<<a<<"+"<<b<<")^"<<c<<"="<<y<<endl;
	return 0;
}
