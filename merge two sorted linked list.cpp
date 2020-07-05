#include<iostream>
#include "ll.h"
using namespace std;

Node* mergell(Node *ll1, Node* ll2)
{
    //base case
    if(ll1==NULL)
    {
        return ll1;
    }
    if(ll2==NULL)
    {
        return ll2;
    }

    Node *ll3;
    if(ll1->data > ll2->data)
    {
        ll3=ll2;

        ll3->next=mergell(ll1,ll2->next);
    }
    else
    {
        ll3=ll1;
        ll3->next=mergell(ll1->next, ll2);
    }
    return ll3;
}


void print(Node *head)
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        }

int main()
{
    LinkList l1;
    LinkList l2;
 /*   int n1,n2;
    cin>>n1>>n2;
    int i;
    while(n1>0)
    {

        cin>>i;
    l1.Insertion_at_last(i);
    n1--;
    }

    int j;
    while(n2>0)
    {

        cin>>j;
    l2.Insertion_at_last(j);
    n2--;
    }*/

    l1.Insertion_at_last(90);
    l1.Insertion_at_last(190);
    l1.Insertion_at_last(80);
    l1.Insertion_at_last(12);

    l2.Insertion_at_last(-90);
    l2.Insertion_at_last(0);

    Node *ans=mergell(l1.head,l2.head);
    print(ans);
    return 0;
}
