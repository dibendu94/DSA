#include<iostream>
using namespace std;

int main()
{
    string name;
    float balance=10000000.555;
    int acno,x,y,z;

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

    cout<<"  your details are  "<<endl;
    cout<<name<<endl;
    cout<<acno<<endl;


    cout<<" please enetr the amount you want to eithdraw "<<endl;
    cin>>y;
    if (y>balance)
    {
        cout<<" you have insufficient balance for the request";
    }
    else{
    z=(balance-y);
     cout<<" your remaining balance is : "<<endl<<z;
     cout<<"  thankyou for connecting with us ";
    }
    return 0;

}