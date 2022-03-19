#include<iostream>
using namespace std;

int main()
{
    string name;
    float balance;
    int acno,x;

    cout<<" enter the name of account holder "<<endl;
    cin>>name;
    cout<<" select account type ";
    cout<<"  enter 1 for current ac   "<< "  enter 2 for savings ac  "<<endl;
    cin>>x;
    if (x==1)
    {
        cout <<"  you opted for current ac "<<endl;

    }
        else if (x==2)
       {
           cout<<"  you opted for savings account  "<<endl;
       }
    else
    cout<<"  the entered object is out of scope "<<endl;

    cout<<" enetr your account nu7mber"<<endl;
    cin>>acno;
    

}