#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }


};

void insertathead(node* & head, int d)
{
    node* temp= new node(d);
    temp->next=head;
    head=temp;

}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}

int main()
{
    // created a new node
    node* n1= new node(10);
    // cout<<n1->data<<" "<<n1->next<<" ";
    // head pointed to node
    node* head=n1;
    // insert data at head
    insertathead(head, 20);
    insertathead(head, 140);
    print(head);

    return 0;
}