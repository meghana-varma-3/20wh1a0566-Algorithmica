#include<bits/stdc++.h>
using namespace std;
int wordScore(string);
int main()
{
	string s;
	cout<<"Enter the string ";
	cin>>s;
	cout<<"Score : "<<wordScore(s);
}
int wordScore(string s)
{
	int arr[] ={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int l = s.size();
	int score = 0;
	for(int i=0;i<l;i++)
	{ 
		score += arr[s[i] - 'a'];
	}
	return score;
}
