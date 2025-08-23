#include<bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) {
    int n=arr.size();
    int maxi=INT_MIN;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++; // stored frequency of elements
    }
    for(auto it: mpp){
        if(it.first==it.second){
            maxi=max(maxi,it.first);
        }
    }
    return maxi > INT_MIN ? maxi : -1;
}
int main(){
    vector<int> arr={1,2,2,4,4,4,4,5,0};
    cout<<findLucky(arr);
    return 0;
}