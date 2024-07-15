#include<iostream>
#include<queue>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;


int main()
{
    priority_queue<pair<int,pair<int,int> > > pq;
    pair<int,int> arr[]={
    make_pair(1,3),
    make_pair(-2,2),
    make_pair(5,8),
    make_pair(0,1)};
    int k;
    cout<<"enter the value of k ";
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int x=arr[i].first;
        int y=arr[i].second;
        int sum=(x*x)+(y*y);
        
        pq.push(make_pair(sum,make_pair(x,y)));
        if(pq.size()>k)
        {
            pq.pop();
        }
        
    }
    while(!pq.empty())
    {
        pair<int,int> p=pq.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        pq.pop();
    }
    return 0;
}