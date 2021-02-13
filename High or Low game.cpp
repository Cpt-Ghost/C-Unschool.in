#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int k=rand();
	while(k>50)
	k=rand();
	int n,i;
	cout<<"Welcome to the game of Higher or Lower"<<endl;
	cout<<"-------------------------------------------------------------------";
	cout<<"\nIn this game you need to guess a number between 1 and 50. ";
	cout<<"\nBut you will only get 5 turns to reach towards the correct number"<<endl;
	cout<<"-------------------------------------------------------------------";
	cout<<"\nChoose a number: ";
	for(i=5;i>=1;i--)
	{
	    cin>>n;
		cout<<endl<<endl;
		if(n==k)
		{
			cout<<"You are right"<<endl;
			cout<<"WINNER"<<endl;
			break;
		}
		if(i!=1)
		{
			if(n>k)
			{
				cout<<"Your guess is higher than right number, Turns left: "<<i-1<<endl;
				cout<<"Try again, entering a number lower than previous: ";
			}
			else 
			{
				cout<<"Your guess is lower than right number, Turns left: "<<i-1<<endl;
				cout<<"Try again, entering a number higher than previous: ";
			}
		}
		
	}
	if(i==0)
	{
		cout<<"\nGame Over"<<endl;
		cout<<"The number was "<<k;
	}	
	getch();
}