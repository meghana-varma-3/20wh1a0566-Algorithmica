#include<bits/stdc++.h>
using namespace std;
bool isInteger(string);
int main() {
	string s;
	cout<<"Enter the string : ";
	getline(cin,s);
	if(isInteger(s))
	{
		cout<<"Its Integer";
	}
	else
	{
		cout<<"Its not an Integer";
	}
}
bool isInteger(string s)
{
	int n,m,i=0;
	string r;
	n= s.size();
		while(i<n)
		{
			if(s[i] != ' ')
			{
			  r =  r + s[i];
			}
			i++;
		}

	m = r.size();
		
	if((r[0] == '+' || r[0] == '-'|| isdigit(r[0])) && m>1)
	{
	
	  for(int j=1;j<m;j++)
     	{
     		
		 if(r[j] < '0' ||  r[j]>'9')
		 {
	
		   return false;
	     }
	     
	    }
	    return true;
    }
    return false;
}
