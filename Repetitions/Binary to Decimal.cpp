#include<bits/stdc++.h>
using namespace std;
int main() {
	long long b;
	int rem,i = 0,m,result = 0;
	cout<<"Enter the Binary no : ";
	cin>>b;
    while(b!=0)
    {
	  rem = b%10;
	  b = b/10;
	  m = pow(2,i);
	  result +=(rem*m); 
	  i++; 	
	}
	
	cout<<"Decimal : "<<result;

	
}


