//program to illustrate binary operator overloadhing
//concat binary operator using binary plus
#include<iostream>
#include<string.h>
using namespace std;
class concat
{
	private:
	char string[50];
	public:
		concat(){
			strcpy(string,"");
		}
		concat(char *s1)
		{
		strcpy(string,s1);
		
		}
	    concat operator +(concat c)
		{
			concat temp;
			strcpy(temp.string,string);
//			temp.string=string;
			strcat(temp.string,c.string);
			return temp;
		}
		void display()
		{
			cout<<string;
		}

};
int main()
{
	concat s1,s2,s3;
	s1=concat("Aadarsha");
	s2=concat("Bhattarai");
	s1.display();
	cout<<"+";
	s2.display();
	cout<<"=";
	s3=s1+s2;
	s3.display();
}

		
