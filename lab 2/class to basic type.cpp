#include<iostream>
using namespace std;
class conversion{
	float fah;
	public:
		conversion(float f)
		{
			fah=f;
		}
		operator float()
		{
			float c;
			c=0.5556*(fah-32);
			return c;
		}
};
int main()
{
	conversion c(52);
	float x;
	x=c;
	cout<<"The temperature in Celsius is:"<<x<<endl;
}
