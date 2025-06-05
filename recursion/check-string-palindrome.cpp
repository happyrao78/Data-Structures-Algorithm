#include<bits/stdc++.h>
using namespace std;

bool pal(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pal(i+1,s);
}

bool pal_method_two(string s){
    int left =0;
    int right =s.length()-1;
    while(left <right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[left]) != tolower(s[right])) 
        return false;
        else{
            left++;
            right--;
        }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    // cout<<pal(0,s);
    cout<<pal_method_two(s);
    return 0;
}