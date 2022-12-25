#include<bits/stdc++.h>
using namespace std;
string removeMysteryLength(string);
int main()
{
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	cout<<removeMysteryLength(s);
}
string removeMysteryLength(string s)
{

	string m,r;
	int l;
	l = s.size();
	for(int i=l-1;i>=0;i--)
	{
	  m = s[i] + m;
	  l--;
	  if(l == stoi(m))
	  {
	  	r = s.substr(0,l);
	  	break;
	  }
	  	
	}
	return r;
}
