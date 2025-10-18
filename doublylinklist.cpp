#include<iostream>
#include<list>
using namespace std;

class Node
{
    public:
     int data;
     Node *next;
     Node *prev;

     Node(int val)
     {
        data=val;
        next=prev=NULL;
     }
};
class doublylist
{
   
   Node* head;
   Node* tail;
 
   public:
   doublylist()
   {

    head=tail=NULL;

   }

   void push_front(int val)
   {
      Node* newnode=new Node(val);
   if(head==NULL)
   {
       head=tail=newnode;
   }
   else{
       newnode->next=head;
       head->prev=newnode;
       head=newnode;
   }

}
void push_back(int val)
{
    if(head==NULL)
    {
        cout<<"doubly linklist is empty\n";
        return;
    }
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
void pop_front()
{
    Node* temp=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;

    }
    temp->next=NULL;
    delete temp;
}
void pop_back()
{
    if(head==NULL)
    {
        cout<<"doubly link list is empty\n";
    }
    Node *temp=tail;
    tail=tail->prev;
    if(tail!=NULL)
    {
        tail->next=NULL;

    }
    temp->prev=NULL;
    delete temp;
}

void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}


};
int main()
{
    doublylist dl;
    dl.push_front(10);
    dl.push_front(20);
    dl.push_front(30);
    dl.push_back(45);
    dl.pop_front();
    dl.pop_back();
    dl.display();
    return 0;

}

