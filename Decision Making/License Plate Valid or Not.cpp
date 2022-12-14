#include<iostream>
using namespace std;
int main() {
	string l;
	cout<<"Enter the licence number ";
	cin >>l;
	if((l[0]>= 'A' && l[0]<= 'Z') && (l[1]>= 'A' && l[1]<= 'Z') && (l[2]>= 'A' && l[2]<= 'Z') && (l[3]>= '0' && l[3]<= '9') && (l[4]>= '0' && l[4]<= '9') && (l[5]>= '0' && l[5]<= '9'))
	{
	 cout<<"Old style licence plate";	
	}
	else if( (l[0]>= '0' && l[0]<= '9') && (l[1]>='0' && l[1]<= '9') && (l[2]>= '0' && l[2]<= '9') && (l[3]>= '0' && l[3]<= '9') && (l[4]>= 'A' && l[4]<= 'Z') && (l[5]>= 'A' && l[5]<= 'Z') && (l[6]>= 'A' && l[6]<= 'Z'))
	{
		cout<<"New style licence plate";
	}
	else
	{
		cout<<"Invalid licence plate";
	}
	
		
}
