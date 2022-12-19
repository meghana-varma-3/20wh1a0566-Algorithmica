#include<bits/stdc++.h>
using namespace std;
double approximatePI(int);
int main() {
int n;
cout<<"Number of approximations required : ";
cin>>n;
cout<<"Approximate pi value is : "<<approximatePI(n)<<endl;
}
double approximatePI(int n)
{
	int sign = 1,i,j;
	double apr = 0;
	for(i=1,j=2;i<=n;i++,j+=2)
	{
		apr += (double)1/(j*(j+1)*(j+2)) * sign;
		sign *= -1;
	}
	return (4*apr) + 3;
}
