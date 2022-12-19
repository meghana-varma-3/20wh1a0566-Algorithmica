#include<bits/stdc++.h>
using namespace std;
int medianOfThree(int,int,int);
int main() {
int a,b,c;
cout<<"Enter the 3 values : ";
cin>>a>>b>>c;
cout<<"Median is : "<< medianOfThree(a,b,c);
}
 int medianOfThree(int a,int b,int c) {
 	
 	 if( a>b)
 	 {
 	 	if(b>c)
	    {
 	 	 return b;
	    }
		else
		{
		  if(a>c)
		  	return c;
		  
		  else
		  	return a;
		}
     }
		else
		{
			if(a>c)
			{
				return a;
		    }
			else
			{
				if(b<c)
					return b;
				
				else
					return c;
			}
		}
 	 		
	}
 	

