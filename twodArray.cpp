#include<iostream>
using namespace std;

int main()
{
    int a[4][4];
    int x;
    cout<<"   enter the value of the matrixes arrays";
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             cout<<a[i][j];
        }
        
    }
    for (int l = 0; l < 4; l++)
    {
        for (int k = 0; k < 4; k++) // linear display 
        {
             cout<<a[l][k];
        }

        
    }
}

    
