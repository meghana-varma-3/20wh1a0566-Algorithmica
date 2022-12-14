#include<iostream>
using namespace std;
int main() {
	float r;
	cout<<"Enter the radius ";
	cin>>r;
	float area = 3.14159*r*r;
	float volume = 1.333*3.14159*(r*r*r);
	cout<<"Area of circle "<<area<<endl;
	cout<<"Volume of sphere "<<volume<<endl;
}
