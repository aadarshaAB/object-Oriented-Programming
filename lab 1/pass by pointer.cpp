//pass by value
#include<iostream>
using namespace std;
class distance
{
		int feet;
		int inches;
	private:
	void setdata(int f,int i)
		{
		feet=f;
		inches=i;
		}
	void add_distance(distance *d1,distane *d2)
		{
		feet=d1.feet+d2.feet;
		inches=d1.inches+d2.inches;
		feet=feet+inches/12;
		inches=inches%12;
		}
	void display()
		{
		cout<<"Total distance:"<<endl;
		cout<<feet<<"."<<inches<<"."<<endl;
		}	
};
int main()
{
	distance d1;
	distance d2;
	distance d3;
	d1.setdata(5,6);
	d2.setdata(3,7);
	d3.add_distance(&d1,&d2);
	cout<<"d1="<<d1.display()<<endl;
	cout<<"d2="<<d2.display()<<endl;
	d3.display();
	return 0;
}
