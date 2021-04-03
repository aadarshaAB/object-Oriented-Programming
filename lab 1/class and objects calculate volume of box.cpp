#include<iostream>
using namespace std;
class Box
{
	private:
		float length,breadth,height;
	public:
		void ReadData()
		{
			cout<<"Enter Length:";
			cin>>length;
			cout<<"\nEnter Breadth:";
			cin>>breadth;
			cout<<"\nEnter Height:";
			cin>>height;
		}
		int Volume()
		{
			float vol=length*breadth*height;
			return vol;
		}
};
int main()
{
	Box v1;
	v1.ReadData();
	cout<<"Volume of box:"<<v1.Volume();
	return 0;
}

