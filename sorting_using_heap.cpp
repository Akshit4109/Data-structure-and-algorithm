#include<iostream>
#include<queue>
using namespace std;

vector<int> kth_smallest_element(int arr[], int size)
{
    vector<int> sorted;
    priority_queue<int, vector<int>, greater<int> > minh;
    for(int i=0;i<size;i++)
    {
        minh.push(arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sorted.push_back(minh.top());
        minh.pop();
    }
    return sorted;
    
}

int main()
{
    int arr[]={7,10,4,3,20,1};
    vector<int> v=kth_smallest_element(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
