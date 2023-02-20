#include<bits/stdc++.h>
using namespace std;
string* createDeck();
void swap(string deck[52],int i,int j)
{
    string tmp = deck[i];
           deck[i] = deck[j];
           deck[j] = tmp;
}
void shuffleDeck(string deck[52])
{
    srand(time(0));
    for(int i=0;i<52;i++) {
        int rind = rand()%52;
        swap(deck,i,rind);
    }
}
void display(string deck[52]) {
    for(int i=0;i<52;i++)
  {
  	cout<<deck[i]<<" ";
  }
}
int main()
{
  int  n;
  cout<<"Enter no of players : ";
  cin>>n;
  string * deck = createDeck();
  display(deck);
  shuffleDeck(deck);
  cout<<endl;
  display(deck);
  cout<<endl;
  int k=0;
  for(int i=0;i<n;i++)
  {
      cout<<"Player "<<(i+1)<<":";
      for(int j=0;j<5;j++)
      {
          cout<<deck[k++];
      }
      cout<<endl;
  }
  
}
string* createDeck()
{
	string* deck = new string[52];
	string values = "23456789TJQKA";
	string suits = "shdc";
	int i=0;
	for(auto v:values) {
		for(auto s:suits) {
			string temp = " ";
			temp = temp + v + s;
			deck[i++] = temp;
		}
	}
	return deck;
}
