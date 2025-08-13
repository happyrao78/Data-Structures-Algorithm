#include<bits/stdc++.h>
using namespace std;

int return_upperbound(vector<int> &arr,int x){
    int low=0;
    int n=arr.size();
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] > x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int blackbox(vector<vector<int>> &arr, int n,int m,int x){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=return_upperbound(arr[i],x);
    }
    return cnt;
}

int median(vector<vector<int>> &arr,int n,int m){
    int low=INT_MIN, high=INT_MAX;
    n=arr.size();
    m=arr[0].size();
    for(int i=0;i<n;i++){
        low=min(low,arr[i][0]);
        high=max(high,arr[i][m-1]);
    }
    int req=(n*m)/2;
    while(low<=high){
        int mid=(low+high)/2;
        int smallEquals= blackbox(arr,n,m,mid);
        if(smallEquals <= req){
            low=mid+1;
        }
        else high=mid-1;
    }
    return low;
}
int main(){
    int n=5,m=5;
    vector<vector<int>> arr = {{1, 5, 7, 9, 11},{2, 3, 4, 8, 9},{4, 11, 14, 19, 20},{ 6, 10, 22, 99, 100},{7, 15, 17, 24, 28}};
    cout<<median(arr, n, m);
    return 0;
}