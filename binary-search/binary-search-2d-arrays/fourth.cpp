#include<bits/stdc++.h>
using namespace std;

int findmaxrowind(vector<vector<int>> &arr,int n,int m,int col){
        int maxval=-1;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(arr[i][col] > maxval){
                maxval=arr[i][col];
                ind=i;
            }
        }
        return ind;
}

vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxRowInd=findmaxrowind(arr,n,m,mid);
            int left= mid-1 >=0 ? arr[maxRowInd][mid-1]: -1;
            int right= mid+1 < m ? arr[maxRowInd][mid+1]: -1;
            if(arr[maxRowInd][mid] > left && arr[maxRowInd][mid] > right){
                return {maxRowInd,mid};
            }
            else if(arr[maxRowInd][mid] < left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
}
// tc= o(logmn)
int main(){
    int n=3,m=3;
    vector<vector<int>> arr = {{10,20,15},{21,30,14},{7,16,32}};
    vector<int> result = findPeakGrid(arr);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}