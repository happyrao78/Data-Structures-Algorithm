#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int start=0,end=s.size()-1;
    while(start<end){
        if(s[start]==s[end]){
            cout<<"palindrome"<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"not pal";
    return 0;
}