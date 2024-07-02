#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node * prev;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
    ~node()
    {
        int value = this->data;
        // memory free
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;

        }
        cout<<endl;
        cout<<"memory with data value "<<value<<" is deleted "<<endl;
    }


};

void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}

int getlength(node* & head)
{

    node* temp=head;
    int length=0;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}

void insertathead(node* &head, int d)
{
    node * temp = new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
// void insertattail(node* &head,node* & tail, int d)
// {
//     node * temp = new node(d);
//     node * curr = head;
//     while(curr->next!=NULL)
//     {
//         curr=curr->next;
//     }
//     curr->next = temp;
//     tail = temp;

// }

void printinreverse(node* &head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<"<-";
        temp=temp->prev;
    }
    cout<<"NULL";
}

int main()
{
    node * n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    print(head);
    cout<<endl;
    printinreverse(head);
    // insertattail(head,tail,0);
    return 0;
}