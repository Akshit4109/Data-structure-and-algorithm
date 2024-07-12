#include<iostream>
#include<stack>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    vector<int> v;
    int arr[7]={100,80,60,70,60,75,85};
    stack<int> s;
    for(int i=0;i<7;i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);

    }
    for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}