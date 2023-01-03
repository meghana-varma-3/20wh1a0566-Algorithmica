#include<bits/stdc++.h>
using namespace std;
int diceGame();
int main()
{
 cout<<"Number of times 6 will appear : "<<	diceGame()<<endl;
}
int diceGame()
{
	srand(time(0));
	int diceno,flag = 0;
	for(int i=0;i<10;i++)
	{
		diceno = 1+ rand()%6;
		cout<<diceno<<endl;
		if(diceno == 6)
		{
			flag++;
		}
	}
	return flag;
}
