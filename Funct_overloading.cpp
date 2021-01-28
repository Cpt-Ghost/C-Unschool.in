#include<iostream>
using namespace std;
float area (float r)
{
	cout<<"Area of circle: "<<3.14*r*r<<" sq. units";
}
float area (float b, float h)
{
	cout<<"Area of triangle: "<<0.5*b*h<<" sq. units";
}
float area (double l, float b)
{
	cout<<"Area of rectangle: "<<l*b<<" sq. units";
}
int main()
{
	string s;
	float r,b,h;
	double l;
	cout<<"Choose a shape(circle/triangle/rectangle): ";
	cin>>s;
	if (s=="circle")
	{
		cout<<"Enter radius of circle: ";
		cin>>r;
		area(r);
	}
	else if (s=="triangle")
	{
		cout<<"Enter base and height of triangle: ";
		cin>>b>>h;
		area(b,h);
	}
	else if (s=="rectangle")
	{
		cout<<"Enter length and breadth of rectangle: ";
		cin>>l>>b;
		area(l,b);
	}
	else
	cout<<"Invalid Shape";
	
	return 0;
}
