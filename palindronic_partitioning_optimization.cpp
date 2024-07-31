

#include<iostream>
#include<climits>
#include<algorithm>
#include<cstring> // for memset
using namespace std;

int static t[1001][1001];

bool ispalindronic(string arr, int i, int j)
{
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int palindromic_partitioning(string arr, int i, int j)
{
    if (i >= j || ispalindronic(arr, i, j))
    {
        return 0;
    }

    if (t[i][j] != -1)
    {
        return t[i][j];
    }

    int mini = INT_MAX;

    for (int k = i; k < j; k++)
    {
        int left, right;

        if (t[i][k] != -1)
        {
            left = t[i][k];
        }
        else
        {
            left = palindromic_partitioning(arr, i, k);
            t[i][k] = left;
        }

        if (t[k+1][j] != -1)
        {
            right = t[k+1][j];
        }
        else
        {
            right = palindromic_partitioning(arr, k+1, j);
            t[k+1][j] = right;
        }

        int temp_ans = 1 + left + right;
        mini = min(mini, temp_ans);
    }

    t[i][j] = mini;
    return mini;
}

int main()
{
    string arr = "niti";
    memset(t, -1, sizeof(t));
    int n = arr.size();
    int result = palindromic_partitioning(arr, 0, n-1);
    cout << "Minimum number of partitions: " << result << endl;
    return 0;
}
