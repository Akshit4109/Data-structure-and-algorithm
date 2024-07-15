#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> kth_sorted(int arr[], int size)
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
    int arr[]={1,3,12,5,15,11};
    vector<int> v=kth_sorted(arr,6);
    int sum=0;
    int k1,k2;
    cout<<"enter the value of k1 = "<<endl;
    cin>>k1;
    cout<<"enter the value of k2 = "<<endl;
    cin>>k2;
    for(int i=k1;i<k2-1;i++)
    {
        // cout<<v[i]<<" ";
        sum=sum+v[i];
    }
    cout<<sum;
    return 0;
}
