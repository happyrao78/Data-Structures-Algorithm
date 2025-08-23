#include<bits/stdc++.h>
using namespace std;

// tc= o(n), sc=o(1) two pointer approach
int removelement(vector<int> &arr, int element){
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=element){
            arr[k]=arr[i];
            k++;
        }
        return k;
    }
}
int main(){
    vector<int> arr={1,1,2,4,5,0};
    int x=1;
    cout<<removelement(arr,x);
    return 0;
}