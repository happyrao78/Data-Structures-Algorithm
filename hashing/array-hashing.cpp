#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array numbers:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //prestoring the occurence values of array in another array
    int hashh[100000]={0};
    for(int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }

    int q;
    cin>>q; // to check how many numbers you have to check
    while(q--){
        int num;
        cout<<"enter number to check occurence:";
        cin>>num;
        cout<<hashh[num]<<endl;
    }
    return 0;
}