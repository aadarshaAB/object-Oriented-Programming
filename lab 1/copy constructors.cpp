#include<iostream>
using namespace std;
class Box
{
	private:
		float len,brt,hgt;
	public:
		Box(float l,float b,float h)
		{
			len=l;
			brt=b;
			hgt=h;
		}
		Box(const Box &x)
		{
			len=x.len;
			brt=x.brt;
			hgt=x.hgt;
		}
		int display()
		{
			cout<<"The Dimension of Box is:"<<endl;
			cout<<"lenght\t\tBreath\t\tHeight\t\t"<<endl;
			cout<<len<<"\t\t"<<brt<<"\t\t"<<hgt<<endl;
		}
		
};
int main()
{
	float x,y,z;
	cout<<"Enter Dimesion of box:"<<endl;
	cin>>x>>y>>z;
	Box b1(x,y,z);
	b1.display();
	Box b2(b1);
	b2.display();
	return 0;
}
