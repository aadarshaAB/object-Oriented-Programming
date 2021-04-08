//program to illustrate uninary operator overloadhing
//unirary minus operator
#include<iostream>
using namespace std;
class sub
{
	private:
	int x,y,z;
	public:	
		sub(int num1,int num2,int num3)
		{
			x=num1;
			y=num2;
			z=num3;
		}
		void display()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		int operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	sub s(-4,5,-8);
	s.display();
	-s;
	s.display();
}
