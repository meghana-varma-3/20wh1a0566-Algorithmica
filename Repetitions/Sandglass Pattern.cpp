#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
	cout<<"Enter value of n : ";
    cin >> n;
    for(i = 0; i <= n-1; i++)
    {
    	for(j = 0; j < i; j++)
		{
            cout << " ";
        }
        for(k = i; k <= n-1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }	

    for(i = n-1; i >= 0; i--)
    {
    	for(j = 0; j < i; j++)
		{
            cout << " ";
        }
        for(k = i; k <= n-1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }	
   
}
