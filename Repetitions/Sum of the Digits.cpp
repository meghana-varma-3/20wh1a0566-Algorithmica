#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the integer : ";
	cin>>n;
	int rem,sum = 0;
	while(n>0)
	{
	
         rem = n%10;
         sum = sum + rem;
         n = n/10;
	}
	cout<<"Sum of digits : "<<sum<<endl;
}
