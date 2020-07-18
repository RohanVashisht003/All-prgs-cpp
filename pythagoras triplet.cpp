#include<iostream>
using namespace std;

void pythagoras_triplet(long int n)
{
if(n==1 || n==2)
{
    cout<<"-1";
}

else if(n%2==0)
{
    long int  ans=(1L*n*n)/4;
    cout<<ans-1<<" "<<ans+1;
}

else if(n%2!=0)
{
    long int ans=(1L*n*n)+1;
    cout<<ans/2-1<<" "<<ans/2;
}
}

int main()
{
    int n;
    cin>>n;
    pythagoras_triplet(n);
}
