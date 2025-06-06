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

    //prestoring the occurence values of array in map key value pairs so only  necessary values are stored
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q; // to check how many numbers you have to check
    while(q--){
        int num;
        cout<<"enter number to check occurence:";
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}