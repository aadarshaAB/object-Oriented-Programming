//program to illustrate uninary operator overloadhing
//unirary postfix increment operator
#include<iostream>
using namespace std;
class postfix
{
	private:
	int x,y,z;
	public:	
			postfix(int num1,int num2,int num3)
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
		operator++()
		{
			x=++x;
			y=++y;
			z=++z;
		}
};
int main()
{
	postfix x1(4,5,8);
	x1.display();
	cout<<"After Incerment"<<endl;
	++x1;
	x1.display();
}
