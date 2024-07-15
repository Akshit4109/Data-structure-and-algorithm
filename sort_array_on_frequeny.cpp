#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

int main()
{
    int arr[]={1,1,1,4,2,2,3,3};
    int k;
    unordered_map<int, int> mp;
    // priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > minh;
    priority_queue<pair<int,int> > minh;

    for(int i=0;i<7;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        minh.push(make_pair(i->second,i->first));// we pushed second beacuse second hold the frequency and we want sorting for frequency
    }
    while(!minh.empty())
    {
        int ans=minh.top().first;
        while(ans!=0)
        {
            cout<<minh.top().second<<" ";
            ans--;

        }
        minh.pop();
        
    }
    return 0; 
}