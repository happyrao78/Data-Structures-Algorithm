#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j] >arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
                didswap++;
            }
        }
        if(didswap==0){
            break;
        }
        cout<<"runs"<<endl;
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
    bubble_sort(arr,n);
    cout<<endl<<"sorted:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}