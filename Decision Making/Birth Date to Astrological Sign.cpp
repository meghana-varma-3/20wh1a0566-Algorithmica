#include<bits/stdc++.h>
using namespace std;
int main() {
    string m;	
	int d;
	cout<<"Enter date : ";
	cin>>m;
	cin>>d;
	if( (m == "december"&& (d >= 22 && d<=31)) || (m == "january"&& (d >= 1 && d<=19)))
	{
		cout<<"Capricon";
	}
	else if( (m == "january"&& (d >= 20 && d<=31)) || (m == "february"&& (d >= 1 && d<=18)))
	{
	 	cout<<"Aquarius";	
	}
	else if( (m == "february"&& (d >= 19 && d<=29)) || (m == "march"&& (d >= 1 && d<=20)))
	{
		cout<<"Pisces";
	}
	else if( (m == "march"&& (d >= 21 && d<=31)) || (m == "april"&& (d >= 1 && d<=19)))
	{
		cout<<"Aries";
	}
	else if( (m == "april"&& (d >= 20 && d<=30)) || (m == "may"&& (d >= 1 && d<=20)))
	{
		cout<<"Taurus";	
	}
	else if( (m == "may"&& (d >= 21 && d<=31)) || (m == "june"&& (d >= 1 && d<=20)))
	{
		cout<<"Gemini";	
	}
	else if( (m == "june"&& (d >= 21 && d<=30)) || (m == "july"&& (d >= 1 && d<=22)))
	{
		cout<<"Cancer";
	}
	else if( (m == "july"&& (d >= 23 && d<=31)) || (m == "august"&& (d >= 1 && d<=22)))
	{
		cout<<"Leo";
	}
	else if( (m == "august"&& (d >= 23 && d<=31)) || (m == "september"&& (d >= 1 && d<=22)))
	{
		cout<<"Virgo";	
	}
	else if( (m == "september"&& (d >= 23 && d<=30)) || (m == "october"&& (d >= 1 && d<=22)))
	{
		cout<<"Libra";	
	}
	else if( (m == "october"&& (d >= 23 && d<=31)) || (m == "november"&& (d >= 1 && d<=21)))
	{
		cout<<"Scorpio";	
	}
	else if( (m == "november"&& (d >= 22 && d<=30)) || (m == "december"&& (d >= 1 && d<=21)))
	{
		cout<<"Sagittarius";
	}
	else
	{
		cout<<"Enter valid date";	
	}
}
