#include<bits/stdc++.h>
using namespace std;
bool isPrime(int);
int main() {
	int n;
	cout<<"Enter number : ";
	cin>>n;
	if(isPrime(n))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
}
bool isPrime(int n)
{
  for(int i=2;i<n;i++)
  {
  	if(n%i == 0)
  	 return false;
  }
  return true;
}
