#include <iostream>
#include <stdlib.h>
using namespace std;

class cal
{
	private:
		int a,b;
		char z;
	public:
		cal()
		{
			a=0,b=0;
		}
		void getdata()
		{
			
			
		}
		void oper()
		{
			cout<<"Choose the arithmetic operation (+,-,*,/,%) : ";
			cin>>z;
			switch(z)
			{
				case '+':cout<<"Enter two numbers: ";
						 cin>>a>>b;
				         cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
				         break;
				case '-':cout<<"Enter two numbers: ";
						 cin>>a>>b;
						 cout<<"Subtraction of "<<b<<" from "<<a<<" is "<<a-b;
				         break;
				case '*':cout<<"Enter two numbers: ";
			  			 cin>>a>>b;
						 cout<<"Multiplication of "<<a<<" with "<<b<<" is "<<a*b;
				         break;
				case '/':cout<<"Enter two numbers: ";
						 cin>>a>>b;
						 cout<<"Division of "<<a<<" by "<<b<<" is "<<a/b;
				         break;
				case '%':cout<<"Enter two numbers: ";
						 cin>>a>>b;
						 cout<<"Modulo division of "<<a<<" by "<<b<<" is "<<a%b;
				         break;
				default:cout<<"Invalid Operation";
			}
		}
		~cal()
		{
			cout<<"\nDestructor Called";
		}
};

int main()
{
	string decision="yes";
	cal x;
	while(decision=="yes")
	{
	x.getdata();
	x.oper();
	cout<<"\nDo you want to perform another operation?(yes/no) : ";
	cin>>decision;
	system("CLS"); 
	}
	return 0;
}
