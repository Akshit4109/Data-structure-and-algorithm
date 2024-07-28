#include<iostream>
using namespace std;

void merge_sorted_array(int *arr,int s , int e)
{
    int mid=s+((e-s)/2);
    int len1=mid-s+1; // length of first sorted array;
    int len2=e-mid; // length of second sorted array;
    int *first = new int[len1]; // created new array first which will store the first sorted array
    int *second = new int[len2]; // created new array first which will store the first sorted array

    
    // copy first half array till mid in first arr;
    int main_arr_index = s;
    for(int i = 0; i<len1;i++)
    {
        first[i]=arr[main_arr_index++];
    }
    // copy other half array till end form mid in second arr;
    main_arr_index=mid+1;
    for(int i = 0; i<len2;i++)
    {
        second[i]=arr[main_arr_index++];
    }
    // now insert element according to the order by comparing from first and second array;
    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    main_arr_index = s;
    while(index1 < len1 && index2 < len2 )
    {
        if(first[index1]<second[index2])
        {
            arr[main_arr_index++]=first[index1++];
        }
        else 
        {
            arr[main_arr_index++]=second[index2++];
        }
    }
    // empty array completly
    while(index1<len1)
    {
        arr[main_arr_index++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[main_arr_index++]=second[index2++];
    }

}

void merge_sort(int *arr,int s , int e)
{
    if(s>=e)
    {
        return;
    }
    int mid = s + ((e-s)/2);
    merge_sort(arr,s,mid); // it will return the left sorted array (recursion apne app krr legi sort)
    merge_sort(arr,mid+1,e); // it will return the right sorted array (recursion apne app krr legi sort)
    merge_sorted_array(arr,s,e);
}

int main()
{
    int arr[16]={2,34,56,23,12,45,864,34,29,3,6,8,0,5,55,44};
    int n=16;
    merge_sort(arr,0,n-1);  // passed arr , starting index , ending index;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}