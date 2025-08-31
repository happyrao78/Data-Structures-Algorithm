#include<bits/stdc++.h>
using namespace std;

long long atmostkdistinct(const string &s,int k){
    if(k <=0) return 0;
    int  n=s.size();
    vector<int> freq(256,0);
    int distinct=0;
    int left=0;
    long long ans=0;
    for(int right =0;right<n;right++){
        if(freq[s[right]]==0) distinct++;
        freq[s[right]]++;
        while(distinct > k){
            freq[s[left]]--;
            if(freq[s[left]]==0) distinct--;
            left++;
        }
        ans+=(right-left+1);
    }
    return ans;
}

long long exactlyonekdistinct(const string &s,int k){
    return atmostkdistinct(s,k)- atmostkdistinct(s,k-1);
}
int main(){
    string s="pqpqs";
    int k=2;
    cout<<exactlyonekdistinct(s,k);
    return 0;
}