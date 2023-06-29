#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag=0;
    cout<<"enter the no::";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"prime";
    }
}