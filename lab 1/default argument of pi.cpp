#include<iostream>
using namespace std;
void AreaOfCircle(float radius,float pi=3.14)
{
	float ar;
	ar=pi*radius*radius;
	cout<<"The Area of circle:"<<ar;
	
}
int main()
{
	float rad,pi;
	int x;
	cout<<"Enter Radius of circle:";
	cin>>rad;
	cout<<"Want to Enter Value of pi(y=1/n=2)"<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			{
				cout<<"Enter value of pi:";
				cin>>pi;
				AreaOfCircle(rad,pi);
				break;
			}
		case 2:
			{
			AreaOfCircle(rad);
			break;
			}
	}
	return 0;
}
