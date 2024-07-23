#include<iostream>
using namespace std;
int static t[101][101];

int longest_subsequence_subset(string x, string y , int n , int m)
{
    //base condition
    if(n==0 || m==0)
    {
        return 0;
    }

    // choise diagram
    if(x[n-1]==y[m-1] && n!=m) // i!=j or n!=m as we want two differenct character
    {
        return t[n][m]=1+longest_subsequence_subset(x,y,n-1,m-1);
    }
    else
    {
        return t[n][m]= max(longest_subsequence_subset(x,y,n-1,m),longest_subsequence_subset(x,y,n,m-1));
    }
}

int main()
{
    string x = "aabebcdd";
    string y = x;
    int n = x.length();
    int m = y.length();
    memset(t,-1,sizeof(t));
    int result = longest_subsequence_subset(x,y,n,m);
    cout<<"length of lcs is "<<result;
    return 0;
}