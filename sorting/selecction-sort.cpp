#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i; // phle index ko mini ghoshit krdia
        for(int j=i;j<=n-1;j++){
            if(arr[j] < arr[mini]) mini=j; // check and store
        }
        // swap here
        int temp= arr[mini];
        arr[mini] = arr[i];
        arr[i]= temp;
    }
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
    selection_sort(arr,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}