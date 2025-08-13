#include<bits/stdc++.h>
using namespace std;

// time complexity: o(log(m*n));

bool searchInTwodMatrix(vector<vector<int>> &matrix,int target){
    int row_size=matrix.size();
    int col_size=matrix[0].size();
    int low=0;
    int high=(row_size*col_size-1);
    while(low<=high){
        int mid=(low+high)/2;
        int row_ind=mid/col_size;
        int col_ind=mid%col_size;
        int transformed_matrix=matrix[row_ind][col_ind];
        if(transformed_matrix == target) return true;
        else if(transformed_matrix < target) low=mid+1;
        else high=mid-1; 
    }
    return false;
}
int main(){
     int n=3,m=3;
    vector<vector<int>> arr = {{0,0,1},{0,67,1},{1,1,0}};
    cout<<searchInTwodMatrix(arr,67);
    return 0;
}