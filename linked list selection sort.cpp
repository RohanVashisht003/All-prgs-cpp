#include<iostream>
#include "ll2.h"
using namespace std;


int main()
{
LinkedList l;
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    int no;
    cin>>no;
    l.Insert_at_last(no);
}
cout<<endl;
l.print(l.head);
cout<<endl;
l.selectionSort(l.head);

}
