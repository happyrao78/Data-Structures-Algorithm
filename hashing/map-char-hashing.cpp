#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;

    //pre storing
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    //fetching
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mpp[ch]<<endl;
    }
    return 0;
}