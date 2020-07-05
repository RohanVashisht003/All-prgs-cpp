#include<iostream>
using namespace std;

//int powerlog(int n, int p)
//{
//    int ans=1;
//    while(p>0)
//    {
//        if(p&1)
//        {
//            ans=ans*n;
//        }
//        n=n*n;
//        p=p>>1;
//    }
//    return ans;
//}


int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return n*power(n,p-1);
    }

}


int main()
{
    int n,p;
    cin>>n>>p;
    //cout<<powerlog(n,p);
    cout<<power(n,p);
}
