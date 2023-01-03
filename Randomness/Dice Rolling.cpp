#include<bits/stdc++.h>
using namespace std;
void rollDice();
int main()
{
	rollDice();
}
void rollDice()
{
 srand(time(0));
 int d1,d2,d3,d4,d5;
 for(int i=0; i<10000;i++)
 {
	d1 = 1+ rand()%6;
	d2 = 1+ rand()%6;
	d3 = 1+ rand()%6;
	d4 = 1+ rand()%6;
	d5 = 1+ rand()%6;
	if(d1 == 5 && d2 == 5 && d3 == 5 && d4 == 5 && d5 == 5 )
	{
		cout<<"Yahooo"<<endl;
		break;
	}
	else
	{
	   cout<<"Try Again"<<endl;
	}
 }
	
}
