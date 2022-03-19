#include<iostream>

using namespace std;
int main()
{
  int num[100];
  int i;
  int j,x=0;
  cout<<"  enter how many number you want to put for compariso"<<endl;
  cin>>j;
  cout<<" eneter "<<j<<" numbers";

  for (i = 0; i < j; i++)
  {
      cin>>num[i];

  }
  cout<<" the numbers entered are ";

  for ( i = 0; i < j; i++)
  {
    cout<<"   "<<num[i];
      if (num[i]>x)
      x=num[i];

  }cout<<" max number is  "<<x;

  
  
}