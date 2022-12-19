#include<bits/stdc++.h>
using namespace std;
int main(){
	int sec,min,hr,days;
	cout<<"Enter seconds : ";
	cin>>sec;
    if(sec>=60)
    {
    	days = sec/86400;
    	hr = (sec - days*86400)/3600;
    	min = (sec - (hr*3600) - (days * 86400))/60;
    	sec = (sec - (min*60)-(hr*3600) - (days * 86400));
    	cout<<days<< " : "<<setprecision(2)<<hr<<" : "<<setprecision(2)<<min<<" : "<<setprecision(2)<<sec<<endl;   
	}
	else
	{
		cout<<" 0 : 0 : 0 : "<<sec<<endl;
	}
} 
