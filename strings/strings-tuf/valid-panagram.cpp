#include<bits/stdc++.h>
using namespace std;

// tc=o(n),sc=o(1)
//brute force: o(nlogn)
bool validpangram(string a,string b){
    if(a.size()!=b.size()) return false;
    int frq[26]={0};
    for(int i=0;i<a.length();i++){
        frq[a[i]-'A']++;
    }
    for(int i=0;i<b.length();i++){
        frq[b[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(frq[i]!=0) return false;
    }
    return true;
}
int main(){
    string a="anagram";
    string b="nagaram";
    cout<<validpangram(a,b);
    return 0;
}