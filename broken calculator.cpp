#include<iostream>

using namespace std;

void facto(int x)
{
    int arr[100000];
    arr[0]=1;
    int ans_size=0;

    for(int n=x; n>=2; n--)
    {
        int carry=0;
        for(int i=0; i<=ans_size; i++)
        {
            carry=arr[i]*n+carry;
            arr[i]=carry%10;
            carry=carry/10;
        }
        while(carry>0)
        {
            arr[++ans_size]=carry%10;
            carry=carry/10;
        }
    }

    for(int i=ans_size; i>=0; i--)
    {
        cout<<arr[i];
    }
}

int main()
{
    int x;
    cin>>x;
    facto(x);
}
