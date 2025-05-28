#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    map<int, pair<int,int>> mpp;
    mp[1] = 2; //store {1,2}

    // mp.emplace({3,1}); 
    for(auto it:mp){
        cout<<it.first<<it.second;
    }
    return 0;
}