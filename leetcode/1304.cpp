#include<bits/stdc++.h>
using namespace std;

vector<int> sumZero(int n) {
        vector<int> arr;
        for(int i=1; i<=n/2; i++){
            arr.push_back(i);
            arr.push_back(-i);
        }
        if(n % 2 == 1) arr.push_back(0);
        return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> result = sumZero(n);
    for(int i : result) cout<<i<<" ";
    return 0;
}