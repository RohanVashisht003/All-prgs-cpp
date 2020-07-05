#include<iostream>
using namespace std;

    class Node
    {
    public:
        int data;
        Node* next;

        Node(int x)
        {
            data=x;
            next=NULL;
        }
    };

    class LinkList
    {
    public:

        Node* head;
        Node* tail;

        LinkList()
        {
            head=NULL;
            tail=NULL;
        }


        void Insert_at_first(int x)
        {
            //create new node
        Node* n=new Node(x);

        //insertion
        if(head==NULL)
        {
            //first node

            head=n;
            tail=head;
        }
        else
        {
            n->next=head;
            head=n;
        }
        }


//length of a linked list

       int length()
       {
           int len=0;
           Node* temp=head;
           while(temp!=NULL)
           {
               len++;
               temp=temp->next;
           }
           return len;
       }


        void Insertion_at_last(int x)
       {
           Node* n=new Node(x);
           if(head==NULL)
           {
               head=n;
               tail=n;
           }
           else{
            tail->next=n;
            tail=n;
           }
       }


         void print()
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
        }

    //find element
    bool find_ele(int key)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return true;

            }
            temp=temp->next;
        }
                return false;
    }


//Insert at position
    void Insert_at_position(int x,int pos)
    {
        if(pos==0)
        {
            Insert_at_first(x);
        }

        else if(pos>length())
        {
            Insertion_at_last(x);
        }

        else
        {
            Node* temp=head;
            int moveno=1;
            while(moveno<pos-1)
            {
                moveno++;
                temp=temp->next;
            }

            Node* n=new Node(x);
            Node* aagewalinodes=temp->next;
            head->next=n;
            n->next=aagewalinodes;
        }
    }

//Deletion from start
    void delete_from_first()
    {
        if(head!=NULL)
        {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    }

//Deletion from last
    void delete_from_last()
    {
        Node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }

//Deletion at position
  void delete_at_position(int pos)
  {
      if(pos==1)
      {
          delete_from_first();
      }

      else if(pos==length())
      {
          delete_from_last();
      }

      else if(pos>length())
      {
          return;
      }

      else
      {
          Node* temp=head;
          Node* number=head;
          for(int i=1; i<pos-1; i++)
          {
              temp=temp->next;
              number=number->next;
          }
           number=number->next;
          temp->next=temp->next->next;
          delete number;
      }
  }

   Node* mid_of_ll()
  {
      Node* fast=head->next;
      Node* slow=head;
      while(fast!=NULL && fast->next!=NULL)
      {
          fast=fast->next->next;
          slow=slow->next;
      }
      return slow;
  }
    };

