#include<bits/stdc++.h>
using namespace std;
string add(string ,string);
int main()
{
	string s1,s2;
	cout<<"Enter the numbers ";
	cin>>s1>>s2;
	cout<<"On addition : "<<add(s1,s2);
}
string add(string first,string second)
{
	int flen = first.size();
	int slen = second.size();
	int res[max(flen,slen)] = {0};
	int carry = 0;
	string res ;
	for(int i=flen-1,j = slen-1;i>=0 || j>=0;i--,j--)
	{
		int fdigit = first[i] - '0';
		int sdigit = second[j] - '0';
		res = (char)((fsigit+sdigit+carry)%10 + '0')+res;
		carry = (fsigit+sdigit+carry)/10;
		
	}
	if(carry>0)
	 res = (char) (carry + '0') + res;
	return res;
}
