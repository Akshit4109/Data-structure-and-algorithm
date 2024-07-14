#include<iostream>
#include<queue>
using namespace std;

int kth_smallest_element(int arr[], int size, int k)
{
    priority_queue<int,vector<int>, greater<int> > minh;
    for(int i=0;i<size;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    return minh.top();
}

int main()
{
    int arr[]={7,10,4,3,20,15};
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    int element=kth_smallest_element(arr,6,k);
    cout<<k<<" th smallest element found in array is "<<element<<endl;
}

