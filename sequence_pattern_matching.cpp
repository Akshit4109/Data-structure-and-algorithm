#include<iostream>
using namespace std;
int static t[102][1002];
bool sequence_pattern_matching(string x, string y , int n , int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]= max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    if(t[n][m]==n)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    string x = "axyz";
    string y = "adxcpy";
    int n = x.length();
    int m = y.length();
    bool result = sequence_pattern_matching(x,y,n,m);
    cout<< result << endl;
    return 0;

}