//tc=o(n) in optimal case and in brute force tc-> o(nlogn) i.e sorting and then finding the n-1 index
#include<bits/stdc++.h>
using namespace std;
int large(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"elements:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    large(arr,size);
    return 0;
}