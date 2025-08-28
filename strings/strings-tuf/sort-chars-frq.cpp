#include<bits/stdc++.h>
using namespace std;
// tc=o(n) optimal
// brute and better : o(nlogk) tc
string frequencysort(string s){
    unordered_map<char,int> frq;
    int maxfrq=0;
    for(char c:s){
        frq[c]++;
        maxfrq=max(maxfrq,frq[c]);
    }
    vector<vector<char>>  bucket(maxfrq+1);
    for(auto it:frq){
        bucket[it.second].push_back(it.first);
    }
    string ans="";
    for(int i=maxfrq;i>=1;i--){
        for(char c:bucket[i]){
            for(int j=0;i<i;j++){
                ans+=c;
            }
        }
    }
    return ans;
}
int main(){
    string s ="tree";
    cout<<frequencysort(s);
    return 0;
}