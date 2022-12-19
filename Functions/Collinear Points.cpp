#include<bits/stdc++.h>
using namespace std;
bool isCollinear(int,int,int,int,int,int);
int main()
{
    int x1,y1,x2,y2,x3,y3;
	cout<<"Enter 1st point : ";
	cin>>x1>>y1;
	cout<<"Enter 2nd point : ";
	cin>>x2>>y2;
	cout<<"Enter 3rd point : ";
	cin>>x3>>y3;
	if(isCollinear(x1,y1,x2,y2,x3,y3))
  {
	cout<<"True";
  }  
 else
  {
	cout<<"False";
  }  
 
}
 bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3)
{
	float s1,s2;
	s1  = (x2-y1)/(x2-x1);
	s2  = (x3-y2)/(x3-x2);
	return(s1 == s2);
}
