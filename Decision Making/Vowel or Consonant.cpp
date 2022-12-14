#include<iostream>
using namespace std;
int main() {
	char ch;
	cout<<"Enter the character ";
	cin>>ch;
	if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout<<"It ia a vowel";
	}
	else if(ch == 'y')
	{
		cout<<"Sometime y is vowel and sometimes y is consonent";
	}
	else
	{
		cout<<"It is consonent";
	}
}
