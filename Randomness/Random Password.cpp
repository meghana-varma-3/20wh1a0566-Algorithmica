#include<bits/stdc++.h>
using namespace std;
void randomPassword();
int main()
{
  randomPassword();
}
void randomPassword()
{
	char ch;
	string pwd;
	int length;
	length = 7+ rand()%4;
	for(int i=0;i<length;i++)
	{
		char ch = 33+ rand()%94;
		pwd = pwd+ch;
	}
	cout<<pwd<<endl;
}
