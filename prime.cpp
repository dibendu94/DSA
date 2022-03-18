#include<iostream>
using namespace std;

bool prime(int a){
     for (int i = 2; i <= (a/2); i++)
    {
        if (a%i==0)
        {
            return 1;
        }
        
    }
    return 0;
    
}

int main()
{
    int a;
    cout<<"enter the number to check  prime no"<<endl;
    cin>>a;

    if(!prime(a)){
        cout<<a<<" is a prime number ";
    }
    else{
        cout<<a<<" is not a prime number ";
    }
    
}