#include<iostream>
 using namespace std;
 int main() {
 	int y;
 	cout<<"Enter the year";
 	cin>>y;
 	if( (y%100 != 0  && y%4 == 0) || y%400 == 0)
 	
 	{
 		cout<<"Leap year";
	}
	else
	{
		cout<<"Not leap year";
	}
 }
