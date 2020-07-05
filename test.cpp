#include<iostream>
using namespace std;

class node{
public:
int data;
node *next;
//constructor
node(int d){
data=d;
next=NULL;
}

};
void insertAtTail(node *&head, int data){
if(head==NULL){
head=new node(data);
return;
}
node *tail=head;
while(tail->next!=NULL){
tail=tail->next;
}
tail->next=new node(data);
return;
}
void buildInput(node *&head){
int data;
cin>>data;
while(data!=-1){
insertAtTail(head,data);
cin>>data;
}
}
void reverseIterative(node *&head){
node * curr=head;
node * n;
node * prev =NULL;
while(curr!=NULL){
//store the next list
n=curr->next;
//make current node point to previous
curr->next=prev;
//update
prev=curr;
curr=n;
}
head = prev;
}

node* reverseRecursive(node *head{
if(head->next==NULL||head==NULL){
return head;
}
node *smallHead= reverseRecursive(head->next);
node * curr=head;
curr->next->next=curr;
curr->next=NULL;
return smallHead;
}

void print(node *head){
//node *temp=head;
while(head!=NULL){
cout<data;
head=head->next;
}
}
int main(){
node *head=NULL;
buildInput(head);
head = reverseRecursive(head);
print(head);
return 0;}
