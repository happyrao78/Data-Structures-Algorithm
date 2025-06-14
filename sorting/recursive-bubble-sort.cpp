#include<bits/stdc++.h>
using namespace std;
// push the max element to last
void bubble_sort(int arr[],int n){
    if(n==1) return;
    int didswap=0;
    for(int j=0;j<=n-2;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didswap++;
        }
    }
    if(didswap==0) return;
    bubble_sort(arr,n-1);
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
    bubble_sort(arr,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}