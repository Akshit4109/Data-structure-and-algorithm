#include<iostream>
#include<stack>
using namespace std;

int findsuperiorelememt(int arr[],int n)
{
    stack<int> s;
    int ans=0;
    for(int i = n-1;i>=0;i--)
    {
        // if(s.empty())
        // {
        //     s.push(-1);
        // }
        if(s.size()>0 && s.top()>arr[i])
        {
            ans++;
        }
        else if(s.size()>0 && s.top()<arr[i])
        {
            while(s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()>0 && s.top()>arr[i])
            {
                ans++;
            }
        }
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    int arr[]={7,9,5,2,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result= findsuperiorelememt(arr,n);
    cout<<result<<endl;
}