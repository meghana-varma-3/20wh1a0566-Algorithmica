#include<bits/stdc++.h>
using namespace std;
void getHypotenuse(float,float);
int main()
{
	float s1,s2;
	cout<<"Enter lengths of the two shorter sides of a right triangle ";
	cin>>s1>>s2;
	getHypotenuse(s1,s2);

}
void getHypotenuse(float s1,float s2)
{
	float x,y,z;
	x = s1*s1;
	y = s2*s2;
	z = sqrt(x+y);
	cout<<"hypotenuse of the triangle : "<<z<<endl;
}

