#include<bits/stdc++.h>
using namespace std;

void rev(int i, int arr[], int size){
    if(i>=size/2) return;
    swap(arr[i],arr[size-i-1]);
    rev(i+1, arr, size); 
}
int main(){
    int size;
    cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
rev(0,arr,size);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}