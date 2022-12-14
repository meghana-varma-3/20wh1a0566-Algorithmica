#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cout<<"Enter the month ";
	cin>>n;
	if(n=="january"||n=="march"||n=="may"||n=="july"|| n== "august"|| n == "october" || n == "december" )
	{
	 cout<<"31 days";	
	}
	else if(n == "february")
	{
		cout<<"28 or 29 days";
	}
	else
	{
		cout<<"30 days";
	}
}
