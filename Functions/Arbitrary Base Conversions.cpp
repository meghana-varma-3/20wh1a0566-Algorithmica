//sb to decimal and decimal to tb
#include<bits/stdc++.h>
using namespace std;
int convertBase(int,int,long);
int main() {
	int sb,tb;
	long n;
	cout<<"Enter the source base : ";
	cin>>sb;
	cout<<"Enter the target base : ";
	cin>>tb;
    cout<<"Enter the number : ";
    cin>>n;
    if(sb<2 || sb>16 || tb<2 || tb>16)
    {
    	cout<<"Enter base with in the range 2-16"<<endl;
	}
 
    cout<< "Convertion of "<<n<<" from base "<<sb<<" to "<<tb<<" is : "<< convertBase(sb,tb,n) <<endl;
}
int convertBase(int sb,int tb,long n)
{
	int rem,dc = 0,p = 1;
	long tbr = 0;
for(int i=0;i<sb;i++)
{
	rem = n%10;
	dc += rem * pow(sb,i);
	n = n/10;  
}

while(dc>0)
{
	rem = dc%tb;
	tbr +=rem*p;
	dc = dc/tb;
	p *= 10;
	
}

return tbr;	
}
