#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main()
{
    int arr[]={10,5,10,15,10,5};
    unordered_map<int,int> mp;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        cout<<"element "<<i->first<<" occured "<<i->second<<" times "<<endl;
    }
    return 0;
}