#include<bits/stdc++.h>
using namespace std;

//TC= O(nlogn) avg+best+worst case
//SC= O(n) uses an extra array but is a stable sort 

// divide and merge
void merge_array(vector<int> &arr,int low, int mid, int high){
    vector <int> temp;
    int left=low;
    int right  = mid+1;
    while(left<=low && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // check for some remaining values if any on left side 
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    // check for some remaining values if any on righ  side
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]= temp[i=low];
    }
}
void ms(vector<int> &arr,int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge_array(arr,low,mid,high);
}
void merge_sort(vector <int> &arr,int n){
    ms(arr,0,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    merge_sort(arr,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}