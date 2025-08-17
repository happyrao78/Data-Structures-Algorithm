#include<bits/stdc++.h>
using namespace std;

// time complexity: o(n*logm)

int lower_bound_find(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] >= x){
            high=mid-1;
        }
        low=mid+1;
    }
    return low;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m){
    int cntMax=0; 
    int indx=-1;
    for(auto i=0;i<n;i++){
        int cnt_ones=m-lower_bound_find(matrix[i],m,1);
        if(cnt_ones > cntMax){
            cntMax=cnt_ones;
            indx=i;
        }
    }
    return indx;
}
int main(){
    int n=3,m=3;
    vector<vector<int>> arr = {{0,0,1},{0,0,1},{1,1,0}};
    cout<<rowWithMax1s(arr, n, m);
    return 0;
}