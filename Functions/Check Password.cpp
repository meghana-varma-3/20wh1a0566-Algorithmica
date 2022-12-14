#include<bits/stdc++.h>
using namespace std;
string checkPassword(string);
int main()
{
	string p;
	cout<<"Enter the password : ";
	cin>>p;
	cout<< checkPassword(p);
}
string checkPassword(string p)
{
	int ul = 0, ll = 0, n = 0;
	for(int i=0;i<p.size();i++)
	{
		if(p[i]>=65 && p[i]<=90)
		{
			ul++;
		}
		if(p[i]>=97 && p[i]<=122)
		{
			ll++;
		}
		if(p[i]>=48 && p[i]<=57)
		{
			n++;
		}
		
	}
	if(p.size()>=8 && ul>=1 && ll>=1 && n>=1)
	{
		return "true";
	}
	else
	{
		return "false";
	}
}
