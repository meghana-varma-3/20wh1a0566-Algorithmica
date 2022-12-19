#include<bits/stdc++.h>
using namespace std;
int nextPrime(int);
bool isPrime(int);
int main() {
	int n;
	cout<<"Enter number : ";
    cin>>n;
    cout<<"Next prime is : "<<nextPrime(n);
}
int nextPrime(int n)
{
  while(true)
  {
  	n = n+1;
  	if(isPrime(n))
  	return n;
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
