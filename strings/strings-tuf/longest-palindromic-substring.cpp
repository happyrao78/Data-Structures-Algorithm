#include<bits/stdc++.h>
using namespace std;

string longestpalindromicsubstr(string s){
    int n=s.size();
        if(n<=1) return s;
        int start=0;
        int maxlen=1;
        auto expand =[&](int left,int right){
            while(left >= 0 && right < n && s[left]==s[right]){
                int currlen=right-left+1;
                if(currlen >  maxlen){
                    maxlen=currlen;
                    start=left;
                }
                left--;
                right++;
            }
        };
        for(int i=0;i<n;i++){
            expand(i,i);
            expand(i,i+1);
        }
        return s.substr(start,maxlen);

}
int main(){
    string s="ababab";
    cout<<longestpalindromicsubstr(s);
    return 0;
}