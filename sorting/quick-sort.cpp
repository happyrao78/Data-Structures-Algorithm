/*
1. it has TC=O(nlogn) but SC=O(1) as it doesnt use any extra array so it is better than merge sort where SC=O(n)
2. divide and conquer algorithm as we  divide and sort it 
*/

#include<bits/stdc++.h>
using namespace std;

// divide and merge
int parting(vector<int> &arr, int low, int high){
int pivot=arr[low]; //correct position of the current value
int i=low;
int j=high;
while(low<high){
    // number jo pivot se just bd haiwo dhund rhe hai
    while(arr[i] <=pivot && i<=high-1){
        i++;
    }
    // number jo pivot se just chota hai wo search kr rhe hai
    while(arr[j] > pivot && j>=low+1){
        j--;
    }
    // jse hi i j ko cross krtae usko swap krdo
    if(i<j){
        swap(arr[i],arr[j]);
    }
}
swap(arr[low], arr[j]);
return j;

}
void qs(vector<int> &arr,int low, int high){
if(low<high){
    int pIndex= parting(arr,low,high);
    qs(arr,low,pIndex-1);
    qs(arr,pIndex+1,high);
}
}
void quick_sort(vector <int> &arr,int n){
    qs(arr,0,n-1);
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
    quick_sort(arr,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}