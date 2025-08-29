#include<bits/stdc++.h>
using namespace std;

int maxdepth(string s){
    int maxi=0,cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') cnt++;
        if(s[i]==')') cnt--;
        maxi=max(maxi,cnt);
    }
    return maxi;
}
int main(){
    string s="(1+(2*3)+((8)/4))+1";
    cout<<maxdepth(s);
    return 0;
}