#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);// to insert element in the stack
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"size of stack is "<<s.size()<<endl;// to find the size of stack
    while(!s.empty())//empty is used to check wheather stack is empty or not
    {
        cout<<s.top()<<endl;// this is used to pop the top element of the stack
        s.pop();// this help to pop the element
    }
    return 0;
}