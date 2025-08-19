#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n=nums.size();
    vector<int> res;
    int i=0, j=n-1;
    while(i<=j){
        if(nums[i]*nums[i] > nums[j]*nums[j]){
            res.push_back(nums[i]*nums[i]);
            i++;
        }
        else{
            res.push_back(nums[j]*nums[j]);
            j--;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}