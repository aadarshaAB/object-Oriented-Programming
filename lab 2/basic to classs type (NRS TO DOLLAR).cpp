#include<iostream>
using namespace std;
class currency_conv{
	int dlor;
	int cent;
	public:
	currency_conv(){}
	currency_conv(float nrs)
	{
		float dlor_cent;
		dlor=nrs/85;
		dlor_cent=(float)nrs/85;
		cent=(dlor_cent-dlor)*100;
	}
	void display()
	{
		cout<<"The amount is "<<dlor<<"$ and "<<cent<<" cent"<<endl;
	}
};
int main()
{
	currency_conv c1;
	float nrs;
	cout<<"Enter amount in NRS:";
	cin>>nrs;
	c1=nrs;
	c1.display();	
}
