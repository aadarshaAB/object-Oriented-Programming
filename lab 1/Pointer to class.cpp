//pointer as objects
#include<iostream>
class iteam
{
	int cp,sp;
	public:
		void get_data()
		{
			cout<<"Enter CP and SP of product:"<<cp<<sp<<endl;	
		}
		void calc()
		{
		cout<<"The profit of product of is:"<<sp-cp<<endl;
		}
};
int main()
{
	item *b=new item();
	b->getdata();
	b->calc();
	return 0;
}
