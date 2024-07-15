#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>, greater<int> > pq;
    int arr[]={1,2,3,4,5};
    int cost=0;
    for(int i=0;i<5;i++)
    {
        pq.push(arr[i]);
    }
    while(pq.size()>=2)
    {
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        
        pq.push(first+second);
        cost=cost+first+second;
        
    }
    cout<<cost<<endl;
    
}