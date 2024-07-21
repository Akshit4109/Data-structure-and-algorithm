#include<iostream>
using namespace std;
int static t[101][101];

string longest_subsequence_subset(string x, string y , int n , int m)
{
    // base condition
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i ==0 ||  j ==0)
                {
                t[i][j] = 0;
                }
        }
    }
    

    // choise diagram
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(x[i-1]==y[j-1])
            {
                t[i][j]= 1 + t[i-1][j-1];
            }
            else
            {
                t[i][j]= max(t[i-1][j],t[i][j-1]);
            }
    
        }
    }
    int i = n , j = m;
    string ans;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            ans.push_back(x[i-1]);
            i--;
            j--;
        }
        else
        {
            if(t[i-1][j]>t[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    // we got the LCS in reverse order as we were traversing form the back of the string , so first reverse the ans and return it
    reverse(ans.begin(),ans.end());
    return ans;

}

int main()
{
    string x = "abcdgh";
    string y = "abcdfha";
    int n = x.length();
    int m = y.length();
    memset(t,-1,sizeof(t));
    string result = longest_subsequence_subset(x,y,n,m);
    cout<<"longest substring obtained is  "<<result;
    return 0;
}