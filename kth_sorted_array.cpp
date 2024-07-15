#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector <int> kth_sorted_array(int arr[],int size, int k)
{
    priority_queue<int, vector<int>, greater<int> > minh;
    vector<int> sorted;
    for(int i=0;i<size;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>=k)
        {
            sorted.push_back(minh.top());
            minh.pop();
        }

    }
    while(!minh.empty()){
        sorted.push_back(minh.top());
        minh.pop();
    }
    return sorted;
}

int main()
{
    int arr[]={6,5,3,2,8,10,9};
    vector<int> v= kth_sorted_array(arr,7,4);
    for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}