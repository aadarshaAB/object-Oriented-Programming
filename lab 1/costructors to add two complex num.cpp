#include<iostream>
using namespace std;
class Complex
{

	private:
		float rl,img;
	public:
		Complex()
		{
			rl=0;
			img=0;
		}
		Complex(float x,float y)
		{
			rl=x;
			img=y;
		}
		add_complex(Complex c1,Complex c2)
		{
			rl=c1.rl+c2.rl;
			img=c1.img+c2.img;
		}
		void display()
		{
			cout<<"The Sum is:"<<endl;
			cout<<rl<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	float x1=4,y1=7,x2=13,y2=2;
//	cout<<"Enter data of 1st complex number:";
//	cin>>x1>>y1;
//	cout<<"\nEnter data of 2nd complex number:";
//	cin>>x2>>y2;
	Complex c1(x1,y1);
	Complex c2(x2,y2);
	Complex c3;
	c3.add_complex(c1,c2);
	c3.display();
	return 0;
}
