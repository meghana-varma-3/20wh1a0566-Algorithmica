#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cout<<"Enter the n value : ";
	cin>>n;
	int sum = 0;
	for(int i=1;n!=0;i++)
    {
    	if(i%2 != 0)
    	{
         sum = sum + i;
         n=n-1;
        }
	}
	cout<<"Sum of first n integers: "<<sum<<endl;
	
}
