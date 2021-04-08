//program to illustrate binary operator overloadhing using friend function
//multiply operator
#include<iostream>
using namespace std;
class area{
	float len,brt;
	float ara;
	public:
		area()
		{
		}
		area(float x,float y )
		{
			len=x;
			brt=y;
		}
		friend area operator *(area a1,area a2)
		{
			area temp;
			temp.len=a1.len+a2.len;
			temp.brt=a1.brt+a2.brt;
			temp.ara=temp.len*temp.brt;
			return temp;
		}
		void display()
		{
			cout<<"The area:"<<ara<<endl;
		}
};
int main()
{
	area dimension1(4,7);
	area dimension2(2,3);
	area total;
	total=dimension1*dimension2;
	total.display();
}
