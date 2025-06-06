#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;

    //pre storing
    int hashh[256]={0};
    for(int i=0;i<s.size();i++){
        hashh[s[i]]++;
    }

    //fetching
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<hashh[ch]<<endl;
    }
    return 0;
}