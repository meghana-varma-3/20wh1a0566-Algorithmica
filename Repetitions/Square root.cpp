#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cout<<"Enter X :";
	cin>>x;
	float guess = x/2;
	float y = pow(10,-12);
	while(abs(guess*guess-x)>= y)
	{
		guess = (guess + (x/guess))/2;
	}

  cout<<"Guess  "<<guess<<endl;
}


