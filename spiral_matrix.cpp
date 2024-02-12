#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    vector<int> ans;
    int row=n;
    int col=m;
    int count=0;

    int total=n*m;
    int startingrow=0;
    int startingcol=0;
    
    int endingrow=row-1;
    int endingcol=col-1;
    while(count<total){
        for(int index=startingcol; count<total && index<=endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        for(int index=startingrow; count<total && index<=endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        for(int index=endingcol; count<total && index>=startingrow;index++){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        for(int index=endingrow; count<total && index>=startingrow;index++){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
return ans;
}

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralPathMatrix(arr,4,4);
    return 0;
}