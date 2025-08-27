#include<bits/stdc++.h>
using namespace std;

bool rotatestring(string s,string goal){
    if(s.size()!=goal.size()) return false;
    string doubled=s+s;
    int idx=doubled.find(goal);
    return (idx < doubled.size());
}
int main(){
    string s="abcde";
    string goal="cdeab";
    cout<<rotatestring(s,goal);
    return 0;
}