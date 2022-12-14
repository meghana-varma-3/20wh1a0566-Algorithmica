#include<bits/stdc++.h>
using namespace std;
int main() {
	string ch;
	int count = 0,range;
	cout<<"Enter the string : ";
	cin>>ch;
	range = ch.size();
	for(int i = 0;i<range;i++)
	{
		ch[i] = tolower(ch[i]);
		if( ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' )
		{
			count++;
		}
	}
	cout<<"Vowels : "<<count<<endl;
	cout<<"Consonants : "<<range-count<<endl;
	
}
