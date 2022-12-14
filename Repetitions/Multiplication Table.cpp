#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=10;i++)
	{
		if(i==0)
		{
			cout<<setw(4)<<" ";
		}
		else
		{
			cout<<setw(4)<<i;
		}
	}
	cout<<endl;
	for(i = 1;i<=10;i++)
	{   cout<<setw(4)<<i;
		for(j=1;j<=10;j++)
		{
			cout<<setw(4)<<i*j;
		}
		cout<<endl;
	}
}
