#include<bits/stdc++.h>
using namespace std;
int main() {
    string m;	
	int d;
	cout<<"Enter date : ";
	cin>>m;
	cin>>d;
	if(m == "april" || m == "may")
	{
		cout<<"Spring";
	}
	else if( m == "july" || m == "august")
	{
		cout<<"Summer";
	}
	else if(m == "october" || m == "november")
	{
		cout<<"Fall";
	}
	else if(m == "january" || m == "february")
	{
		cout<<"Winter";
	}
	else if( (m == "march"&& (d >= 20 && d<=31)) || (m == "june"&& (d >= 1 && d<=20)))
	{
		cout<<"Spring";
	}
	else if( (m == "june"&& (d >= 21 && d<=30)) || (m == "september"&& (d >= 1 && d<=21)))
	{
		cout<<"Summer";
	}
	else if( (m == "september"&& (d >= 22 && d<=30)) || (m == "december"&& (d >= 1 && d<=20)))
	{
		cout<<"Fall";
	}
	else if( (m == "december"&& (d >= 21 && d<=31)) || (m == "march"&& (d >= 1 && d<=19)))
	{
		cout<<"Winter";
	}
	else
	{
		cout<<"Enter valid date";
	}	
	
}
