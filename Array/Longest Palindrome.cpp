#include<bits/stdc++.h>
using namespace std;
int findLenghtOfLongPal(string);

int main()
{
	string s;
	cout<<"Enter the string ";
	cin>>s;
	cout<<"Output : "<<findLenghtOfLongPal(s);
}
int findLenghtOfLongPal(string s)
{
  int freq[58] = {0};
  int count = 0;
  bool isoddfreqexit = false;
  for(int i = 0 ;i<s.size();i++) {
  	if(s[i]>'a' && s[i] <= 'z')
  	{
  		++freq[s[i] - 'a'+ 6];
	}
	else
	{
  	 ++freq[ s[i] - 'A'];
    }
}
  
  for(int i=0;i<52;i++)
  {
  	if(freq[i]%2 == 0)
  	  count += freq[i];
  	else
  	{
	    isoddfreqexit = true;
	    count += freq[i] - 1;
    }
  }
  if(isoddfreqexit)
  {
    ++count;
 }
    return count; 
}
