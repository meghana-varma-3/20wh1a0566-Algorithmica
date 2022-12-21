#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i,j,k;
	cout<<"Enter value of n : ";
	cin>>n;
	for(i=n;i>0;i--)
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
}
