#include<bits/stdc++.h>
using namespace std;
string isValidTriangle(int,int,int);
int main()
{
	int s1,s2,s3;
	cout<<"Enter the 3 side lenghts : ";
	cin>>s1>>s2>>s3;
	cout<<isValidTriangle(s1,s2,s3);
}
string isValidTriangle(int s1,int s2,int s3)
{
	if(s1 <= 0 || s2 <= 0 || s3 <= 0)
	{
		return false;
	}
	else if(s1+s2 > s3 && s2+s3 > s1 && s1+s3 > s2)
	{
		return "True";
	}
	else
	{
		return "False";
	}
	
	
}
