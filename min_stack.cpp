#include<iostream>
#include<stack>
using namespace std;
stack<int> s; // main stack
stack<int>ss; //supporting stack for storing the min heap
int min_element=-1;

void push(int a)
{
    s.push(a);
    if(ss.size()==0 || ss.top()>=a)
    {
        ss.push(a);
        
    }
}

int pop()
{
    if(ss.size()==0)
    {
        return -1; 
    }
    int ans=s.top();
    s.pop();
    if(ss.top()== ans)
    {
        ss.pop();
    }
    return ans;
    
}
int getmin()
{
    if(ss.size()==0)
    {
        return -1;
    }
    return ss.top();
}

int main()
{
    push(18);
    cout<<"main stack top = "<<s.top()<<"supporting stack top =  "<<ss.top()<<endl;
    push(19);
    cout<<"main stack top = "<<s.top()<<"supporting stack top =  "<<ss.top()<<endl;
    push(29);
    cout<<"main stack top = "<<s.top()<<"supporting stack top =  "<<ss.top()<<endl;
    push(15);
    cout<<"main stack top = "<<s.top()<<"supporting stack top =  "<<ss.top()<<endl;
    push(6);
}