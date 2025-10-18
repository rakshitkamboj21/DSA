#include<iostream>
using namespace std;
class node {
    public:
      int data;
      node *next;
      node(int val){
         data=val;
         next=NULL;
              }
};
class list{
    node *head;
    node *tail;
    public:
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        node *newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        if(head==NULL) return;
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL) return;
            else{
            node *temp=head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }          

        }
    void print(){
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main()
{
    list ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(40);
    ll.pop_front();
    ll.pop_back();
    ll.print();
    return 0;

}