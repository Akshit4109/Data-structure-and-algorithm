#include<iostream>
using namespace std;
int static t[101][101];

int longest_subsequence_subset(string x, string y , int n , int m)
{
    //base condition
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     {
    //         if(x==0 || y==0)
    //             t[i][j]=0;
    //     }
    // }
    if(n==0 || m==0)
    {
        return 0;
    }

    // choise diagram
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     {
            // if both character are same then increase by one and pass smaller array;
            if(x[n-1]==y[m-1])
            {
                return t[n][m]=1+longest_subsequence_subset(x,y,n-1,m-1);
            }
            else
            {
                return t[n][m]= max(longest_subsequence_subset(x,y,n-1,m),longest_subsequence_subset(x,y,n,m-1));
            }
    // return t[n][m];
    //     }
    // }
}

int main()
{
    string x = "abcdgh";
    string y = "abedfha";
    int n = x.length();
    int m = y.length();
    memset(t,-1,sizeof(t));
    int result = longest_subsequence_subset(x,y,n,m);
    cout<<"length of lcs is "<<result;
    return 0;
}