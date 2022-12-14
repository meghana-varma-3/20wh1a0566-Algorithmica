#include<iostream>
using namespace std;
int main()
{
	int c1,c2;
	cin>>c1>>c2;
	float deposit = c1*0.25 + c2*0.50;
	printf("refund recived: $ %.2f",deposit);
}
