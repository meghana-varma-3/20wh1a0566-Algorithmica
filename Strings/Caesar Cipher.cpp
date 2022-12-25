#include<bits/stdc++.h>
using namespace std;
string encrpytWithCaesar(string,int);
int main() {
	string  s;
	int k,pos;
	cout<<"Enter the string :";
	cin>>s;
	cout<<"Enter shift place : ";
	cin>>k;
	cout<< encrpytWithCaesar(s,k);
}
string encrpytWithCaesar(string s,int k)
{
	string res;
	int pos;
  for(int i=0;i<s.size();i++)
	{
		if(s[i]>= 'a' && s[i]<= 'z')
		{
		   pos = int(s[i]) - int('a');
	       pos = (pos+k)%26;
		   res += char(int('a')+pos);
		}
		else if(s[i]>= 'A' && s[i]<= 'B')
		{
		   pos = int(s[i]) - int('A');
	       pos = (pos+k)%26;
		   res += char(int('A')+pos);
		}
		else
		{
			res += s[i];
		}
		
	}
	return res;
}
