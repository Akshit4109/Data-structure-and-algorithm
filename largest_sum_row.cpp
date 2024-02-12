#include<iostream>
using namespace std;

void row_wise_sum(int arr[][3],int n){
    int sum=0;
    int previous=0;
    int row;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        if (previous<=sum)
        {
            previous=sum;
            row=i;
        }
        sum=0;
    }
    cout<<previous<<endl;
    cout<< "row "<<row+1<<" has the largest sum"<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    
    row_wise_sum(arr,3);
    return 0;
}