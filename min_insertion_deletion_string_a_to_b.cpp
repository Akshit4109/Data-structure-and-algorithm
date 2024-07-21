#include<iostream>
#include<utility>
using namespace std;
int static t[101][101];

pair<int, int> longest_subsequence_subset(string x, string y , int n , int m)
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
    //  for finding number of insertion and deletion
    int lcs=t[n][m];
    int deletion = n - lcs;
    int insertion = m - lcs;
    pair<int,int> p;
    return make_pair(deletion,insertion);

}

int main()
{
    string x = "heap";
    string y = "pea";
    int n = x.length();
    int m = y.length();
    memset(t,-1,sizeof(t));
    pair<int,int> result = longest_subsequence_subset(x,y,n,m);
    cout << "Deletions: " << result.first << ", Insertions: " << result.second << endl;

    return 0;
}