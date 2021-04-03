//Nesting member function
#include <iostream>
using namespace std;
class total
{
	float principle,rate,time;
	float findintrest()
	{
		return principle*rate*time;
	}
	public:
		void get_value(int p,int r,int t)
		{
			principle=p;
			rate=r;
			time=t;
		}
		float totl_amount()
		{
			return principle+findintrest();
		}
		void pr_intrest()
		{
			cout<<"The Intrest is:"<<findintrest()<<endl;
		}
};
int main()
{
	total ta;
	float p,t,r;
	cout<<"Enter principle,rate,time:";
	cin>>p>>t>>r;
	ta.get_value(p,t,r);
	ta.pr_intrest();
	cout<<"Total amount="<<ta.totl_amount()<<endl;
	return 0;
}


