#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    while(n>0 && x>0){
        if(n>x){
            n%=x;
        }
        else{
            x%=n;
        }
    }
    if(x==0) cout<<n;
    else cout<<x;
    return 0;
}