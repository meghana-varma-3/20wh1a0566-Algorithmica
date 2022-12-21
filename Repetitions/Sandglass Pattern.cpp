#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
	cout<<"Enter value of n : ";
    cin >> n;
    for(i = n; i > 0; i--)
    {
    	for(j = i; j < n; j++)
		{
            cout << " ";
        }
        for(k = i; k>0; k--)
        {
            cout << "* ";
        }
        cout << "\n";
    }	

    for(i = 1; i<=n ; i++)
    {
    	for(j = i; j < n; j++)
		{
            cout << " ";
        }
        for(k = i; k>0; k--)
        {
            cout << "* ";
        }
        cout << "\n";
    }	
   
}
