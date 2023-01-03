#include<bits/stdc++.h>
using namespace std;
void randomLicencePlate();
int main()
{
	randomLicencePlate();
}
void randomLicencePlate()
{
	srand(time(0));
	int type = 1+ rand()%2;
	if(type == 1)
	{
	 cout<<"Old license plate"<<endl;
	 char l,d;
	 string res;
	 for(int i=0;i<3;i++)
	 {
	 	l = 65 + rand()%26;
	 	res = res+l;
	 }
	 for(int i=0;i<3;i++)
	 {
	 	d = 48 + rand()%10;
	 	res = res+d;
	 }
	 cout<<res<<endl;
	 
	}
	else
	{
	 cout<<"New license plate"<<endl;
	 char l,d;
	 string res;
	  for(int i=0;i<4;i++)
	 {
	 	d = 48 + rand()%10;
	 	res = res+d;
	 }
	 for(int i=0;i<3;i++)
	 {
	 	l = 65 + rand()%26;
	 	res = res+l;
	 }
	 cout<<res<<endl;
	 
	}
}
