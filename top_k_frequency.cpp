#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

int main()
{
    int arr[]={1,1,1,3,2,2,4};
    int k;
    unordered_map<int, int> mp;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > minh;
    // priority_queue<pair<int,int> > minh;

    cout<<"enter value of k "<<endl; 
    cin>>k;
    for(int i=0;i<7;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        minh.push(make_pair(i->second,i->first));// we pushed second beacuse second hold the frequency and we want sorting for frequency
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    while(!minh.empty())
    {
        cout<<minh.top().first<<" ";
        minh.pop();
    }
    return 0; 
}