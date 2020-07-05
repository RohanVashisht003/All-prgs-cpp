#include<iostream>
using namespace std;

class Node
{
	public :
	int data;
	Node* next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

class LinkedList
{
	public:
	Node* head;
	Node* tail;
LinkedList()
{
	head=NULL;
	tail=NULL;
}

void insert_at_last(int x)
{
	Node* n=new Node(x);
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

void delete_from_first()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		Node* temp=head;
		head=head->next;
		delete temp;
	}
}

void delete_at_position(int pos)
{
	if(pos==0)
	{
		delete_from_first();
	}
	else
	{
		Node* temp=head;
		Node* number=head;
		for(int i=0; i<pos-1; i++)
		{
			temp=temp->next;
			number=number->next;
		}
		number=number->next;
		temp->next=temp->next->next;
		delete number;
	}
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


int main() {
	LinkedList l1;
	int n,q,v;
	cin>>n>>q;
	while(n--)
    {
        cin>>v;
        l1.insert_at_last(v);
    }

	while(q--)
    {
        cin>>v;
        l1.delete_at_position(v);
        l1.print();
    }
}
