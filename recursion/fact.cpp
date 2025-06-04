#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 ||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int  n;
    cin>>n;
    vector<int> arr;
    for(auto i=1;i<=n;i++){
        if(fact(i) > n){
            break;
        }
        arr.push_back(i);
    }
    for(auto it: arr){
        cout<<it;
    }
    return 0;
}