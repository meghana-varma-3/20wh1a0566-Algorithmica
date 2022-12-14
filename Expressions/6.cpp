#include<bits/stdc++.h>
using namespace std;
int main(){
	float cost,tax,tip;
	cout<<"Enter Cost of a meal:";
	cin>>cost;
	tax=(cost *18)/100.;
	tip= (cost*5)/100;
	printf("tax amount is:%.2f \n",tax);
	printf("tip amount is: %.2f \n",tip);
	printf("Grand total for the meal is: %.2f",tax+tip+cost);
	return 0;
	
}
