//Area and Perimeter Rectangle
//Member Function Ouside the class
#include<iostream>
using namespace std;
class rectangle
	{
		private:
			int length,breadth;
		public:
			void setdata(int l,int b)
			{
				lenght=l;
				breadth=b;
			}
			void showdata();
			int ar_rect();
			int pr_rect();
	};
int main()
{
	int rectangle::setdata()
			{
				count<<"Length:"<<lenght<<endl;
				cout<<"Breadth:"<<breadth<<endl;
			}
	int rectangle::ar_rect()
			{
				return length*breadth;
			}
	int rectangle::pr_rect()
			{
				return 2*(length+breadth);
			}
	rectangle r;
	r.setdata(4,5);
	r.showdata();
	cout<<"The Area of Rectangle:"<<r.ar_rect()<<endl;
	cout<<"The Perimeter of Rectangle:"<<r.pr_rect()<<endl;
	return 0;
}


