#include<iostream>
using namespace std;

void odd_even(int n)
{
    int sum_e=0,rem=0,sum_o=0,flag=0;
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        {
            sum_e=sum_e+rem;
        }
        if(rem%2!=0)
        {
            sum_o=sum_o+rem;
        }
        n=n/10;
    }

     if(sum_e%4==0 || sum_o%3==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
    odd_even(n);
    }
}
