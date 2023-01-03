#include<bits/stdc++.h>
using namespace std;
int getNumOfFlips();
int main()
{
	int min = 1000000 ,max = 0,avg,no_of_flips,sum = 0;
	for(int i=0;i<10;i++)
	{
	  no_of_flips  = getNumOfFlips();
	  sum = sum +  no_of_flips;
	  if(no_of_flips<min)
	  {
		  min = no_of_flips;
	  }
	  if(no_of_flips>max)
	  {
		  max = no_of_flips;
	  }
	}
	cout<<"Min Flips : "<<min<<endl;
    cout<<"Max Flips: "<<max<<endl;
	cout<<"Avg Flips : "<<(float)sum/10<<endl;

}
int getNumOfFlips()
{
	srand(time(0));
	int prev = -1,curr,flip=1;
	while(true)
	{
    curr = rand()%2;
	cout<<curr<<endl;
	if((curr == 0 && prev == 0) || (curr == 1 && prev == 1))
	{

		return flip;
	}
	flip++;
	prev = curr;
	}

}

