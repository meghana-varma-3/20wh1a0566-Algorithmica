#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int);
int main() {
	
int n;
cout<<"Enter the number ";
cin>>n;
if(isPerfect(n))
{
	cout<<"True";
}
else
{
	cout<<"False";
}

}
bool isPerfect(int n)
{
	int sum = 0;
	for( int i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			sum = sum + i;
		}
	}
return(sum == n);
}
