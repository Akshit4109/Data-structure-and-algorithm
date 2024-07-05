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
void insertattail(node* &tail, int d)
{
    node * temp = new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    

}

void printinreverse(node* &tail)
{

    node * temp= tail;
    while(tail!=NULL)
    {
        cout<<tail->data<<"<-";
        tail=tail->prev;
    }
    cout<<"NULL"<<endl;

}


void insertatposition(node* &head, node* &tail, int position, int d)
{
    int current=1;
    if(position==1)
    {
        insertathead(head,d);
        return;
    }
    else
    {
        node* front = head;
        node * back;
        node * temp= new node(d);

        while(current<position)
        {
            back=front;
            front=front->next;
            current++;
            if(front->next==NULL)
            {
                insertattail(tail,d);
                return;
            }
        }
        temp->next=front;
        front->prev=temp;
        back->next=temp;
        temp->prev=back;

    }
}

void deletenode(node* &head, node* & tail, int position)
{
    int current=1;
    node* front=head;
    node * back=head;
    if(position==1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next=NULL;
        delete temp;
        
    }
    else
    {
        while(current<position)
        {
            back=front;
            front=front->next;
            current++;
            if(front->next==NULL)
            {
                back->next=NULL;
                return;
            }
        }
        back->next=front->next;
        front->next->prev=back;
        front->next=NULL;
        front->prev=NULL;
        delete front;
    }
}


int main()
{
    node * n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    // print(head);
    cout<<endl;
    insertattail(tail,0);
    print(head);
    cout<<endl;
    // printinreverse(tail);
    insertatposition(head,tail,4,1000);
    cout<<endl;
    print(head);
    deletenode(head,tail,3); // deletion in between
    cout<<endl;
    print(head);
    // deletenode(head,tail,1); // deletion in beginning of the list
    // cout<<endl;
    // print(head);
    // deletenode(head,tail,4); // deletion at the end of the list
    // cout<<endl;
    // print(head);
    return 0;
}