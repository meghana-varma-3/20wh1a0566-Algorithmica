#include<bits/stdc++.h>
using namespace std;
void  decode();
void encode();
int main() {
	int n;
	cout<<" 1. Decode "<<endl;
	cout<<" 2. Encode "<<endl;
	cout<<"Enter the option : ";
	cin>>n;
	if(n==1)
	{
		decode();
	}
	if(n==2)
	{
		encode();
	}
}
void  decode()
{
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	cout<<"ASCII - "<<int(ch);
}
void encode()
{
	int ascii;
	cout<<"Enter the ASCII value : ";
	cin>>ascii;
	cout<<"Character - "<<char(ascii);
}

