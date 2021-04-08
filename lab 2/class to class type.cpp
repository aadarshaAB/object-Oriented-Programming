#include<iostream>
using namespace std;
class DistanceM{
	int m,cm;
	public:
	DistanceM()
	{
		m=0;
		cm=0;
		}	
	DistanceM(int meter,int centimeter)
	{
		m=meter;
		cm=centimeter;
	}
	void display()
	{
		cout<<"Meter="<<m<<endl;
		cout<<"Centimeter="<<cm<<endl;
	}
};
class DistanceF{
	float feet,inches;
	public:
		DistanceF(float ft,float in)
		{
			feet=ft;
			inches=in;
		}
		operator DistanceM()
		{
		float temp_meter;
		float m,cm;
		feet=feet+(inches/12);
		temp_meter=0.3048*feet;
		m=(int)temp_meter;
		cm=(temp_meter-m)*100;
		return DistanceM(m,cm);
		}

};
int main()
{
DistanceM d1;
DistanceF d2(4,7);
d1=d2;
d1.display();	
}
