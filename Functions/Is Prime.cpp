#include<bits/stdc++.h>
using namespace std;
string isPrime(int);
int main() {
	int n;
	cout<<"Enter number : ";
	cin>>n;
	cout<<isPrime(n);
}
string isPrime(int n)
{
	int count = 0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i == 0)
		{
			count++;
		}
	}
	if(count == 0)
	{
		return "True";
	}
	else
	{
		return "False";
	}
}
