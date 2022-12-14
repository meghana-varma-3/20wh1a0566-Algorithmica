#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float s1,s2,s3,s;
	cout<<"Enter the sides of triangle ";
	cin>>s1>>s2>>s3;
     s = ((s1+s2+s3)/2);
    float area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"area: "<<area<<endl;
}
