#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;

void kth_closest_number(int arr[], int size, int k, int x)
{
    // Max-heap to store pairs of (difference, element)
    priority_queue<pair<int, int> > maxh;

    // Calculate the difference of each element from x and store in the max-heap
    for(int i = 0; i < size; i++)
    {
        int diff = abs(arr[i] - x);
        // this maxh element on the top will be on the bases of index not the element
        maxh.push(make_pair(diff, arr[i]));

        // Keep the size of the heap to k
        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }

    // Extract k closest elements from the heap
    vector<int> result;
    while(!maxh.empty())
    {
        result.push_back(maxh.top().second);
        maxh.pop();
    }

    // Print the result
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 3};
    int k, x;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the number: ";
    cin >> x;
    kth_closest_number(arr, 6, k, x);
    return 0;
}
