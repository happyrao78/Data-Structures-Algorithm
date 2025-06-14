#include<bits/stdc++.h>
using namespace std;

// push the max element to last
void insertion_sort(int arr[],int i,int n){
    if(i==n) return;
        int  j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    insertion_sort(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort(arr,0,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}