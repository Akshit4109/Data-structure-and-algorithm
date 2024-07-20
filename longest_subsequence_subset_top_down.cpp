#include<iostream>
using namespace std;
int static t[101][101];

int longest_subsequence_subset(string x, string y , int n , int m)
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
            // if both character are same then increase by one and pass smaller array;
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
    return t[n][m];
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