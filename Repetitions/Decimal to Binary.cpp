#include<bits/stdc++.h>
using namespace std;
int main() {
	int q,r,result = 0,p = 1;
	cout<<"Enter the Decimal no : ";
	cin>>q;
	while(q!=0)
	{
		r = q%2;
		result += (r*p);
		q = q/2;
		p *= 10;
	
	}
	cout<<"Binary : "<<result<<endl;
}

