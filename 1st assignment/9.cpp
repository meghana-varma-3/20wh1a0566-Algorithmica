#include<bits/stdc++.h>
using namespace std;
int main() {
	float ft;
	cout<<"Enter the measurment in ft ";
	cin>>ft;
	float in = ft*12;
	cout<<"Inches "<<in<<endl;
	float yd = ft/3;
	cout<<"Yards "<<yd<<endl ;
	float mi = ft/5280;
	cout<<"Miles "<<mi<<endl ;
}
