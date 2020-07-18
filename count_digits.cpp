#include<iostream>
using namespace std;

void count_digits(int n,int no)
{
    int rem,coun=0;
 while(n>0)
 {
     rem=n%10;
     if(rem==no)
     {
         ++coun;
     }
     n=n/10;
 }
 cout<<coun;
}

int main()
{
int n,no;
cin>>n;
cin>>no;
count_digits(n,no);
}
