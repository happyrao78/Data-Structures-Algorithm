#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t){
    unordered_map<char,char> mapst,mapts;
    if(s.size()!=t.size()) return false;
    for(int i=0;i<s.size();i++){
        char a=s[i],b=t[i];
        if(mapst.count(a) && mapst[a]!=b) return false;
        if(mapts.count(b) && mapts[b]!=a) return false;
        mapst[a]=b;
        mapts[b]=a;
    }
    return true;
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<isIsomorphic(s,t)<<endl;
    return 0;
}