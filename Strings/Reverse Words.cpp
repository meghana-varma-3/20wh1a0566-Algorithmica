#include<bits/stdc++.h>
using namespace std;
string  reverseWords(string);
int main()
{   string s,r;
	cout<<"Enter the string : ";
	getline(cin,s);
	r = reverseWords(s);
	cout<<r<<endl;
}
string reverseWords(string s)
{
	int i = 0,j,n;
	string result,sub;
	n = s.size();
	while(i<n)
	{
		while(s[i] == ' ' && i<n)
		{
			i++;
		}
		if(i>=n)
		 break;
		 
		j = i+1;
		while(s[j] != ' ' && j<n)
		{
			
			j++;
		}
		sub = s.substr(i,j-i);
	
		if(result.size() == 0)
		{
			result = sub;
		}
		else
		{
		result = sub+ " " +result; 
	    }
	   	i = j+1;
	}
	return result;
}
