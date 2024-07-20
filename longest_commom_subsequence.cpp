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
    // if both character are same then increase by one and pass smaller array;
    if(x[n-1]==y[m-1])
    {
        return t[n][m]=1+longest_subsequence_subset(x,y,n-1,m-1);
    }
    else
    {
        // n-1,m means that we reduced the size of first string and passed second  string as it is because (n-1 == m)-> this can also happen. character present at n-1 may be equal to m. 
        // n,m-1 means that we reduced the size of first string and passed second  string as it is because (n == m-1)-> this can also happen. character present at n may be equal to m-1.
        // max of both is stored because we want longest substring 

        return t[n][m]= max(longest_subsequence_subset(x,y,n-1,m),longest_subsequence_subset(x,y,n,m-1));
    }
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