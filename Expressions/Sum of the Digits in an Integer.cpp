#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the integer : ";
	cin>>n;
	int rem,sum = 0;
         rem = n%10;
         sum += rem;
         n = n/10;
        
         rem = n%10;
         sum += rem;
         n = n/10;
    
         rem = n%10;
         sum += rem;
         n = n/10;
         
         rem = n%10;
         sum += rem;
         n = n/10;
         
   cout<<"Sum of 4 digits : "<<sum;
}
