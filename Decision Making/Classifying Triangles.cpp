#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 sides of triangle ";
	cin>>a>>b>>c;
	if(a==b && b==c)
	{
		cout<<"Equilateral triangle";
	}
	else if(a==b || b==c || a==c)
	{
		cout<<"Isosceles triangle";
	}
	else
	{
		cout<<"Scaler triangle";
	}
}
