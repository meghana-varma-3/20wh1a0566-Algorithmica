#include<bits/stdc++.h>
using namespace std;
char getUserMove();
char getComputerMove();
int getResult(char,char);
int main()
{
	int r,won = 0,lost = 0,draw = 0;
	char u,c;
	for(int i=0;i<10;i++)
	{
	  u = getUserMove();
	  c = getComputerMove();
	  r = getResult(u,c);
	  if(r == 1)
	  {
	  	won++;
	  }
	  else if(r == -1)
	  {
	  	lost++;
	  }
	  else
	  {
	  	draw++;
	  }
	}
	cout<<"Wins : "<<won<<endl;
	cout<<"Losses : "<<lost<<endl;
	cout<<"Draws : "<<draw<<endl;
	
}
char getUserMove()
{
	char ch;
	cout<<"Enter your move (r,p,s) : ";
	cin>>ch;
	return ch;
}
char getComputerMove()
{
	srand(time(0));
	char ch[3] ={'r','p','s'};
	char cm = ch[rand()%3];
	cout<<"Computers move : "<<cm<<endl;
	return cm;
}
int getResult(char u,char c)
{
	if(u == c )
	{
		cout<<"Draw!!"<<endl;
		return 0;
	}
	else if((u == 'r' && c == 'p') || (u == 'p' && c == 's') || (u == 's' && c == 'r') )
	{
		cout<<"Lost!!"<<endl;
		return -1;
	}
	else
	{  
	    cout<<"Won!!"<<endl;
		return 1;
	}
}
