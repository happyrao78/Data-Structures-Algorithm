#include<bits/stdc++.h>
using namespace std;

int countsubstr(string s){
    int n=s.length();
    return n*(n+1)/2;
}
int main(){
    string s="hiinandfi";
    cout<<countsubstr(s);
    return 0;
}