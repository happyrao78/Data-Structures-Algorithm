#include<bits/stdc++.h>
using namespace std;

int beautySum(string s){
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        vector<int> freq(26,0);
        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;
            int maxi=0,mini=INT_MAX;
            for(int f:freq){
                if(f > 0){
                    maxi=max(maxi,f);
                    mini=min(mini,f);
                }
            }
            ans+=(maxi-mini);
        }
    }
    return ans;
}
int main(){
    string s1 = "aabcb";
    cout << beautySum(s1) << endl; // Output: 5

    string s2 = "aabcbaa";
    cout << beautySum(s2) << endl; // Output: 17
    return 0;
}