#include<bits/stdc++.h>
using namespace std;

// tc=o(m*n), sc=o(1)
string longestCommonPrefix(vector<string>& strs) {
    for(int i=0;i<strs[0].size();i++){
        char c=strs[0][i];
        for(int j=1;j < strs.size();j++){
            if(i >= strs[j].size() || strs[j][i] !=c) return strs[0].substr(0,i);
        }
    }
    return strs[0];
}
int main(){
    vector<string> strs={"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);
    return 0;
}