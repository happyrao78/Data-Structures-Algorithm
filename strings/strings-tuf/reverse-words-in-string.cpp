#include<bits/stdc++.h>
using namespace std;

string reversewords(string s){
    int n=s.size();
    string temp=""; // took one temp string

    int i=0;

    while(i < n && s[i]==' ') i++; // skip white spaces

    while(i < n){
        while(i < n && s[i]!=' '){
            temp+=s[i];
            i++;
        }
        while(i < n && s[i]==' ') i++;
        if(i < n) temp+=' ';
    }
    reverse(temp.begin(),temp.end());
    int start=0;
    for(int end=0;end<=temp.size();end++){
        if(end==temp.size() || temp[end]==' '){
            reverse(temp.begin()+start,temp.begin()+end);
            start=end+1;
        }
    }
    return temp;
}
int main(){
    string s="the sky is blue";
    cout<<reversewords(s);
    return 0;
}