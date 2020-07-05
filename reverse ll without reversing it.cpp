#include<iostream>
using namespace std;

class node{
    public:
  int data;
  node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class LinkedList
{
    public:
    node *head;
    node *tail;

    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }

    void insert_data_last(int x)
    {
        node *n=new node(x);
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }
    }

    void reverse_linkedlist()
    {
        if(head==NULL)
        {
            return;
        }
        reverse_linkedlist(head->next);
        cout<<head->data<<" ";
    }
};



int main()
{
int n;
cin>>n;
int t;
LinkedList l1;
while(n>0)
{
    cin>>t;
    l1.insert_at_last(t);
    n--;
}
l1.reverse_linkedlist();
}
