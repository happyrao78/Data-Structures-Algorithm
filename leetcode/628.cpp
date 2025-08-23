#include<bits/stdc++.h>
using namespace std;


// tc=o(n), sc=o(1)
int maxprod(vector<int> &arr){
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;
    for(auto x :arr){
        if(x > max1){
            max3=max2;
            max2=max1;
            max1=x;
        }
        else if(x > max2){
            max3=max2;
            max2=x;
        }
        else if(x > max3) max3=x;
        if(x < min1){
            min2=min1;
            min1=x;
        }
        else if(x < min2) min2=x;
        }
        return max(max1*max2*max3,min1*min2*max1);
}
int main(){
    vector<int> nums={1,-2,-3,4};
    cout<<maxprod(nums);
    return 0;
}