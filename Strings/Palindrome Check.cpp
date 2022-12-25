#include<bits/stdc++.h>
using namespace std;
bool  isPalindrome(string);
int main()
{   string s;
	cout<<"Enter the string : ";
	cin>>s;
	if( isPalindrome(s))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
}
bool  isPalindrome(string s)
{
	int i,j;
	for(i=0,j=s.size()-1;i<j;i++,j--)
	{
		if(s[i] != s[j])
		{
			return false;
		}
	}
	return true;
}
