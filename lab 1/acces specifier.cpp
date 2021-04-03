//Acess specifier 
#include<iostream>
using namespace std;
class check
{
	private:
		int x;
	public :
		int y;
		void getdata()
		{
			cout<<"Enter value of x and y:"<<endl;
			cin>>x>>y;
		}
		void display()
		{
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
int main()
{
	check c;
	c.getdata();
	cout<<"Enter  the valu of x"<<endl;
	//cin>>c.x;   //not accesible as it is private
	cout<<"Enter the value of y"<<endl;
	cin>>c.y;
	c.display();
	return 0;
}
