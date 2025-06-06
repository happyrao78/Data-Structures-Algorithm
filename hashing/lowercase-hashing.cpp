#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string:"<<endl;
    cin>>s;
    //prestoring in hash array

    int hashh[26]={0}; //total small chars
    cout<<"prestore started!"<<endl;
    for(int i=0;i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    cout<<"prestore done!"<<endl;

    // take char input
    int q;
    cout<<"enter loop count:"<<endl;
    cin>>q; //kitne char check krne h
    while(q--){
        char c;
        cout<<"enter char:"<<endl;
        cin>>c;
        cout<<hashh[c-'a']<<endl;;
    }
    return 0;
}