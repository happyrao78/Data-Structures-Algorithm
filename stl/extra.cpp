#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        if(p1.first > p2.first) return true;
        return false;
    }
    //nisme dekhna hai ki increasing order of second number and agar secondnumbe rsame hai to fir first number jiska bda h wo ayega 
int main(){
    pair<int,int> p1[]={{1,4},{4,1},{2,1}};
    int n = sizeof(p1) / sizeof(p1[0]);
    sort(p1,p1+n,comp);
    for(auto it: p1){
        cout<<"("<<it.first<<","<<it.second<<") ";
    }
    return 0;
}