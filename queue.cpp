#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int data;
     node *next;
     node(int val)
     {
        data=val;
        next=NULL;
     }
};

class queue
{
    node *head;
    node *tail;
    public:
    queue()
    {
        head=tail=NULL;
    }
    void push(int data)
    {
      node *newNode=new node(data); 
      if(empty())
      {
        head=tail=newNode;
      }
      else{
        tail->next=newNode;
        tail=newNode;
      }
 }

 void pop()
 {
    if(empty())
    {
        cout<<"LL is empty\n";
        return;
    }
    else{
        node *temp=head;
        head=head->next;
        delete temp;
    }
 }
    int front()
    {
        if(empty())
    {
        cout<<"LL is empty\n";
        return -1;
    }
        return head->data;
    }

    bool empty()
    {
        return head==NULL;
    }


};


int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
        
    }
    cout<<endl;
    return 0;
}