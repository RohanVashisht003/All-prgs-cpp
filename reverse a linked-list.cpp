#include<iostream>
using namespace std;

class Node{

 public:
     Node *next;
     int data;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

class LinkedList
{
    public:
    Node *head;
    Node *tail;
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }

void insert_at_last(int x)
{
    Node *n=new Node(x);
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


void reverse_a_linkedlist()
{
    Node *mynext=NULL;
    Node *curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        mynext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=mynext;
    }
    head=prev;
}


void print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


};



int main()
{
 LinkedList l1;
 int n,t;
 cin>>n;
 while(n>0)
 {
     cin>>t;
     l1.insert_at_last(t);
     n--;
 }
 //l1.print();
 l1.reverse_a_linkedlist();
 l1.print();
}
