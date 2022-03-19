#include<iostream>

using namespace std;
int main()
{
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        a[i]=i+5;
        cout<<a[i]<<" ";

    }
    int i;
    cout<<"to check value of array input array index"<<endl;
    cin>>i;
    cout<<" the value placed in that index is "<<a[i];
}