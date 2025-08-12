#include<bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> &arr, int target) {
    int n=arr.size();
    int m=arr[0].size();
    int row=0,col=m-1;
    while(row < n && col >= 0){
        if(arr[row][col]==target) return true;
        else if(arr[row][col] < target) row++;
        else col--;
    }
    return false;
}
int main(){
      int n=3,m=3;
    vector<vector<int>> arr = { {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60} };
    cout<<searchElement(arr,23);
    return 0;
}

