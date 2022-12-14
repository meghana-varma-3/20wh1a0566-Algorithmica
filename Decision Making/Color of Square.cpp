#include<iostream>
using namespace std;
int main() 
{
	string c;
	cout<<"Enter the coordinates ";
	cin>>c;
	if(c[0]== 'a'|| c[0]== 'c' || c[0] == 'e' || c[0] == 'g')
	{
		if(c[1]%2 !=0)
		{
			cout<<"Black";
		}
		else
		{
			cout<<"White";
		}
	}
	else
	  {
	  	if(c[1] %2 !=0)
		{
			cout<<"White";
		}
		else
		{
			cout<<"Black";
		}
	  	
	  }
}
