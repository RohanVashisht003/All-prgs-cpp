#include<iostream>
using namespace std;

class node
{
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
		head= NULL;
		tail= NULL;
	}
	void Insert_at_last(int x);
	void print();
};

void LinkedList :: Insert_at_last(int x)
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


void LinkedList :: print()
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		cout<<temp->data<<" ";
	}
}



int main()
{
	LinkedList l1;
	int n;
	cin>>n;
	while(n>0)
	{
		int no;
		cin>>no;
		l1.Insert_at_last(no);
		n--;
	}
	l1. print();
}