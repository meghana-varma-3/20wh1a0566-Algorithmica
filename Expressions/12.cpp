#include<bits/stdc++.h>
using namespace std;
int main(){
	int seconds,minutes,hours,days;
	cout<<"Enter seconds : ";
	cin>>seconds;
	minutes=seconds/60;
	hours=minutes/60;
	days=hours/24;
	cout<<days<<":"<<hours<<":"<<minutes<<":"<<seconds;
	return 0;
} 
