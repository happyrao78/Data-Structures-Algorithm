#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ls;
    // time complexity O(sqrt(n)+O(nlogn)+O(n);
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}