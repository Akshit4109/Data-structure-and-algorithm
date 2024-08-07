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

void insertathead(node* & head, int d)
{
    node* temp= new node(d);
    temp->next=head;
    head=temp;

}

void insertattail(node* & tail, int d)
{
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;
}


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

void insertinposition(node* &tail,node* &head,int position, int d)
{
    if(position==1)
    {
        insertathead(head,d);
        return;
    }
    
    node* temp=head;
    int current=1;

    while(current<position-1)
    {
        temp=temp->next;
        current++;
    }

    if(temp->next== NULL)
    {
        insertattail(tail,d);
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next=nodetoinsert;

}

void deletion(node* & head, int position)
{

    if(position==1)
    {
        // if pos =1 then we need to shift the head and we need to free the memnory
        node* temp=head;
        head=head->next;
        // memory free by using the destructor function
        temp->next= NULL; // for removing the pointer or to cut its connection with the next node which it is still pointing
        delete temp;
    }
    else
    {

        int current=1;
        node* prev = NULL ;
        node * curr = head;
        while(current<position)
        {
            prev=curr;
            curr=curr->next;
            current++;
        }
        prev->next=curr->next;
        if(curr->next==NULL)
        {
            prev->next=NULL;
        }
        curr->next=NULL; // we did this because curr is still pointing to the next node, so we need to delete the pointer pointing to the next 
        delete curr;
        
    
    }


}

int main()
{
    // created a new node
    node* n1= new node(10);
    // cout<<n1->data<<" "<<n1->next<<" ";
    // head pointed to node
    node* head=n1;
    node* tail=n1;
    // insert data at head
    insertathead(head, 20);
    insertathead(head, 140);


    insertattail(tail,100);
    insertathead(head,100);
    print(head);
    cout<<endl;
    insertinposition(tail,head,3, 1);
    print(head);
    deletion(head,6);
    // deletion(head,5);
    print(head);

    return 0;
}