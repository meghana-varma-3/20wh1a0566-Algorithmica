#include<bits/stdc++.h>
using namespace std;
int main()
{
   int  i,j,k,n;
   cout<<"Enter value of n : ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	for(j=i;j<n;j++)
   	{
   		cout<<" ";
	}
	for(k=1;k<=2*i-1;k++)
	{
		cout<<"*";
	}
	cout<<endl;
   }
   n = n-1;
    for(i=n;i>0;i--)
   {
   	cout<<" ";
   	for(j=i;j<n;j++)
   	{
   		cout<<" ";
	}
	for(k=1;k<=2*i-1;k++)
	{
		cout<<"*";
	}
	cout<<endl;
   }
   
}
